#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void arrayInput(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand()%100000;
    }
    
}

void insertionSortAsc(int arr[], int size){
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
void insertionSortDsc(int arr[], int size){
    for (int i = 1; i < size; i++)
    {
        int key,j;
        key = arr[i];
        j = i-1;
        while (j>=0 && key > arr[j])
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

int main(){
    int arr[100000];
    int n = sizeof(arr)/sizeof(int);
    arrayInput(arr, n);
    insertionSortAsc(arr, n);
	clock_t t1;
	t1 = clock();
    insertionSortAsc(arr,n);
	t1 = clock() - t1;
	double time_taken_1 = ((double)t1)/CLOCKS_PER_SEC;
    // display(arr, n);
	printf("Insertion Sort took %f seconds for %d sorted elements \n", time_taken_1, n);

    arrayInput(arr, n);
    clock_t t2;
	t2 = clock();
    insertionSortAsc(arr,n);
	t2 = clock() - t2;
	double time_taken_2 = ((double)t2)/CLOCKS_PER_SEC;
    // display(arr, n);
	printf("Insertion Sort took %f seconds for %d partially sorted elements \n", time_taken_2, n);

    arrayInput(arr, n);
    insertionSortDsc(arr, n);
	clock_t t3;
	t3 = clock();
    insertionSortAsc(arr,n);
	t3 = clock() - t3;
	double time_taken_3 = ((double)t3)/CLOCKS_PER_SEC;
    // display(arr, n);
	printf("Insertion Sort took %f seconds for %d reverse sorted elements \n", time_taken_3, n);
    return 0;
}