#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void arrayInput(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%100;
    }
    
}

void bubbleSort(int arr[], int n)
{
    int temp;
	for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[20000];
    int n = sizeof(arr)/sizeof(int);
    arrayInput(arr, n);
    display(arr, n);
	clock_t t;
	t = clock();
    bubbleSort(arr, n);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
    display(arr, n);
	printf("Bubble Sort took %f seconds to execute \n", time_taken);
	return 0;
}
