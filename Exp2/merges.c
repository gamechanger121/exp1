#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void PrintArray(int *A , int n) //Pointer of 1st element and size
{
    FILE * ptr1 = NULL;
    ptr1 = fopen("merges2.csv","a");
    for (int i = 0; i < n; i++)
    {
        fprintf(ptr1,"%d\n",A[i]);
    }
    fprintf(ptr1,"\n");
    fclose(ptr1);
}


void Merge(int a[],int low,int mid ,int high)
{
    int i,j,k, b[100000];
    
    i = low ;
    j = mid+1; 
    k = low;
    while(i<= mid && j<= high)
    {
        if (a[i]<a[j])
        {
            b[k]=a[i];
            i++;
            k++;
        }
        else
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    
    for (int i = low ; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[],int low, int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high)/2;
        mergeSort(a,low,mid); //one part //recursive
        mergeSort(a,mid+1,high); //second part  
        Merge(a,low,mid,high);
    }

}

void main()
{
    int n = 100000;
    int a[n];
    FILE * ptr = NULL;
    ptr = fopen("merge1.csv","a");

    for(int i = 99; i<= n ; i++)
    {
        int rando = rand();
        a[i] = rando;
    }

    
    for(int i = 99; i <= n ; i += 100)
    {
        clock_t start, end;
        double cpu_time_used;
        start = clock();
        PrintArray(a,n);
        mergeSort(a, 0, i);
        end = clock();
        PrintArray(a,n);
        cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
        fprintf(ptr, "%d, %f\n", i+1, cpu_time_used);
        printf("Sorted from 0 to %d in %.2fs\n", i, cpu_time_used);
    }
    
}
