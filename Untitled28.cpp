//deletion at the end array

#include <stdio.h>

int main() {
	int arr[] = {23, 3, 45, 12, 67, 54, 6, 4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i;
	size = size - 1;
	for(i=0; i<size; i++)
		printf("%d", arr[i]);
	return 0;
}

//deletion in the beginning array
int main() {
	int arr[8];
	int n, i;
	printf("enter the number of elements: ");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);
	
	n = del_first(arr, n);
	for(i=0; i<n; i++)
		printf("%d", arr[i]);
	return 0;
	
		
	
}

int del_first(int arr[], int n) {
	int i;
	if(n == 0) {
		printf("array is empty");
		return n;
	}
	for(i=0; i<n-1; i++) {
		arr[i] = arr[i+1];
	return n-1;
	}
}





