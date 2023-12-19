#include <stdio.h>
#inlcude <stdlib.h>

//inserting the data at the beginning singly linked list vs array

int main() {
	int arr[10], data = 10; i, n;
	printf("Enter the number of elements: ");
	scanf("%d", &arr[i]]);
	
	n = add_beg(arr, n, data);
	
	for(i= 0; i<n; i++)
		printf("%d", arr[i]);
	return 0;
	
}

int add_beg(int arr[], int n, int data) {
	int i;
	for(i=n-1; i>=0; i--) {
		arr[i+1] = arr[i];
	}
	arr[0] = data;
	return n+1;
}
