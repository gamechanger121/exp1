#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int *a,int n)
{
    FILE * ptr2 =NULL;
    ptr2 = fopen("insertion2.csv","a");
    for(int i = 0 ; i < n ; i++)
    {
        fprintf(ptr2,"%d\n",a[i]);
    }
    fprintf(ptr2,"\n");
    fclose(ptr2);
}

void InsertionSort(int *a, int n)
{
    int key,j;
    for(int i = 0; i < n; i++)
    {
        key = a[i];
        j = i-1;

        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j -- ; // j will get reset to 0 or it will run till j become 0
        }
        a[j+1] = key;
    }
}

void main()
{
    
    FILE * ptr3 = NULL;
    FILE * ptr2 = NULL;
    ptr3 = fopen("insertion.csv","a");
    ptr2 = fopen("insertion1.csv","a");
    int n;
    int *a;
    // printf("Enter the size of array\n"); //THis is dynamic allocation array 
    // scanf("%d",&n);
    a = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n ; i++)
    {
        int rando = rand();
        a[i] = rando;
        rando;
    }

    for(n=0 ; n <=100000 ; n = n+100)
    {

        printf("For %d\n",n);
        int ticks = clock();
        fprintf(ptr3,"%f\n",(float)ticks / CLOCKS_PER_SEC);

    }
    printArray(a,n);
    InsertionSort(a,n);
    printArray(a,n);
    fclose(ptr2);
    fclose(ptr3);
}
