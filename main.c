#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE *filePointer;
char str[50];
void sort(int ar[], int size){
	int i,j,temp;
	time_t start, end;
	double execution_Time; 
	start = clock();
	for(i = 0; i<size-1; i++){
		for(j = 0; j<size - i-1; j++){
			if(ar[j]>ar[j+1]){
				temp = ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	end = clock();
	execution_Time = difftime(end,start)/CLOCKS_PER_SEC;
//	execution_Time = execution_Time + "\n";
	sprintf(str, "%lf %d\n", execution_Time,size);
//	string String_execution_Time = sprintf(execution_Time);
	filePointer = fopen("draw.txt","a");
	fprintf(filePointer,str);
	printf("\n\nExecution Time = %lf\n\n",execution_Time);
	printf("Sorted Array.");
	for (i = 0; i<1000; i++){
		printf("%d,",ar[i]);
	}
}
int main(int argc, char *argv[]) {
	int arr[1000],arr2[100],arr3[4000],arr4[5023],arr5[4893],arr6[6009], n,i;
	n = sizeof(arr)/sizeof(arr[0]);
//	n = sizeof(arr);
	for (i = 0; i<n; i++){
		arr[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr[i]);
	}
	
	sort(arr, n);
	
// second array	
	
	
	n = sizeof(arr2)/sizeof(arr2[0]);
//	n = sizeof(arr);
	for (i = 0; i<n; i++){
		arr2[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr2[i]);
	}
	
	sort(arr2, n);

// Third array	
	n = sizeof(arr3)/sizeof(arr3[0]);
	for (i = 0; i<n; i++){
		arr3[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr3[i]);
	}
	
	sort(arr3, n);

// Four array	
	n = sizeof(arr4)/sizeof(arr4[0]);
	for (i = 0; i<n; i++){
		arr4[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr4[i]);
	}
	
	sort(arr4, n);

// Four array	
	n = sizeof(arr5)/sizeof(arr5[0]);
	for (i = 0; i<n; i++){
		arr5[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr5[i]);
	}
	
	sort(arr5, n);

	n = sizeof(arr)/sizeof(arr[0]);
//	n = sizeof(arr);
	for (i = 0; i<n; i++){
		arr[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr[i]);
	}
	
	sort(arr, n);
	
// second array	
	
	
	n = sizeof(arr2)/sizeof(arr2[0]);
//	n = sizeof(arr);
	for (i = 0; i<n; i++){
		arr2[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr2[i]);
	}
	
	sort(arr2, n);

// Third array	
	n = sizeof(arr3)/sizeof(arr3[0]);
	for (i = 0; i<n; i++){
		arr3[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr3[i]);
	}
	
	sort(arr3, n);

// Four array	
	n = sizeof(arr4)/sizeof(arr4[0]);
	for (i = 0; i<n; i++){
		arr4[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr4[i]);
	}
	
	sort(arr4, n);

// five array	
	n = sizeof(arr5)/sizeof(arr5[0]);
	for (i = 0; i<n; i++){
		arr5[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr5[i]);
	}
	
	sort(arr5, n);

	n = sizeof(arr)/sizeof(arr[0]);
//	n = sizeof(arr);
	for (i = 0; i<n; i++){
		arr[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr[i]);
	}
	
	sort(arr, n);
	
// second array	
	
	
	n = sizeof(arr2)/sizeof(arr2[0]);
//	n = sizeof(arr);
	for (i = 0; i<n; i++){
		arr2[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr2[i]);
	}
	
	sort(arr2, n);

// Third array	
	n = sizeof(arr3)/sizeof(arr3[0]);
	for (i = 0; i<n; i++){
		arr3[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr3[i]);
	}
	
	sort(arr3, n);

// Four array	
	n = sizeof(arr4)/sizeof(arr4[0]);
	for (i = 0; i<n; i++){
		arr4[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr4[i]);
	}
	
	sort(arr4, n);

// six array	
	n = sizeof(arr6)/sizeof(arr6[0]);
	for (i = 0; i<n; i++){
		arr6[i]= rand();		
	}
	printf("UnSorted Automatic Created Array.\n");
	
	for (i = 0; i<1000; i++){
		printf("%d,",arr6[i]);
	}
	
	sort(arr6, n);	
	return 0;
}
