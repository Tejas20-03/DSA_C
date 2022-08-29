#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(long int *a, long int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubblesort(long int a[], long int b[])
{
    int n;
    for (long int i = 0; i < n - 1; i++)
    {
        for (long int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}



int main(){
    long int n=100000;
    int it=0;
    double tim1[10], tim2[10], tim3[10];
    printf("A_size , Bubble \n");


    while(it++<10){
        long int a[n];
        for(int i=0;i<n;i++){
            long int no=rand()%n+1;
            a[i]=no;
        }
        clock_t start,end;
        start=clock();
        bubblesort(a,n);
        end=clock();
        tim1[it]=((double)(end-start));
        printf("%l \n",(long int)tim1[it]);
        n+=10000;
    }
    return 0;

}