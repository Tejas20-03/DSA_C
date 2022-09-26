#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void arrayInput(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%500;
    }
    
}

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int key,j;
        key = arr[i];
        j = i-1;
        while (j>=0 && key < arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
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
    int arrSize[10] = {10,100,1000,10000,20000,30000,50000,70000,80000,100000};
    for (int i = 0; i < 10; i++)
    {
    int arr[arrSize[i]];
    arrayInput(arr, arrSize[i]);
    // display(arr, n);
	clock_t t;
	t = clock();
    insertionSort(arr, arrSize[i]);
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC;
    // display(arr, n);
	printf("Insertion Sort took %f seconds for sorting %d elements \n", time_taken, arrSize[i]);
    FILE *fptr;
    fptr = fopen("insertionSort.txt", "a");
    fprintf(fptr, "%d %lf\n",arrSize[i],time_taken);
    // fseek(fptr, 0, SEEK_END);
    }
    
	return 0;
}
