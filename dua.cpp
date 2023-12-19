#include <stdio.h>

int main() {
	int *ptr;
	ptr = (int*)malloc(2*sizeof(int));
	if(ptr == NULL)
		printf("memory could not be allocated");
	else
		printf("memroy allocated successfully");
	return 0;
	
}

//dangling pointer

int* fun() {
	int num = 10;
	return &num;
}

int main() {
	int *ptr = NULL;
	ptr = fun();
	printf("%d", *ptr);
	return 0;
}
