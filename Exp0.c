#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func1()  // for n^3
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        float a = pow(n,3);
        printf("%d\t%f\n",n,a);
    }

}

void func2()  //for 2^n
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        float a = pow(2,n);
        printf("%d\t%f\n",n,a);
    }  
}

void func3()  // for n
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        printf("%d\t%d\n",n,n);
    }
}

void func4()  // for lgn
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double a = log2(n);
        printf("%d\t%lf\n",n,a);
    }
}

void func5() //for e^n
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double e = exp(n);
        printf("%d\t%lf\n",n,e);
    }  
}

void func6()  // for root (lg(n))
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double b = sqrt(log2(n));
        printf("%d\t%lf\n",n,b);
    }  
}

void func7()   //for  root(2)^logn   **// to fix 
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double a = log2(log2(n));
        printf("%d\t%lf\n",n,a);
    }  
}

void func8() // for 2^lgn
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double a = log2(n);
        double b = pow(2,a);
        printf("%d\t%f\n",n,b);
    }
}

void func9()  // ln(n)
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double a = log(n);
        printf("%d\t%f\n",n,a);
    }
}

void func10() // n*lgn
{
    for(int n = 0 ; n <= 100 ; n = n+10)
    {
        double b = n * log2(n);
        printf("%d\t%f\n",n,b);
    }
}

void func11() //n!
{
    int x = 1,n;
    double fact = 1;
    for(int n = 0; n <= 20; n = n+2)
    {
        while(x <= n)
        {
            fact = fact *x;
            x++;
        }
        printf("%d\t%lf\n",n,fact);
    }
}

int main()
{
    printf("Hello");
    int a = 0;
    while(a == 0)
    {
        int g;
        printf("\nPress 1:For n^3");
        printf("\nPress 2:For 2^n");
        printf("\nPress 3:For n");
        printf("\nPress 4:For lg(n)");
        printf("\nPress 5:For e^n");
        printf("\nPress 6:For root(lg(n))");
        printf("\nPress 7:For lg(lg(n)) ");
        printf("\nPress 8:For 2^(lg(n))");
        printf("\nPress 9:For ln(n)");
        printf("\nPress 10:For n*lg(n)");
        printf("\nPress 11:For n!\n");
        scanf("%d",&g);

        if(g == 1)
        {
            func1();
        }
        else if(g == 2)
        {
            func2();
        }
        else if(g == 3)
        {
            func3();
        }
        else if(g == 4)
        {
            func4();
        }
        else if(g == 5)
        {
            func5();
        }
        else if(g == 6)
        {
            func6();
        }
        else if(g == 7)
        {
            func7();
        }
        else if (g == 8)
        {
            func8();
        }
        else if (g == 9)
        {
            func9();
        }
        else if (g == 10)
        {
            func10();
        }
        else if (g == 11)
        {
            func11();
        }
        else 
        {
            break;
        }
        
        
        printf("\nDo You Want To Continue?\n");
        printf("Press 1: For Yes\n");
        printf("Press 2: For No\n");
        int f;
        scanf("%d",&f);
        if(f == 1)
        {
            a = 0;
        }
        else
        {
            a = 1;
        }
    }
}    
