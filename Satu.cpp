#include stdio.h

void fun(int n) {
	int i, j, k, count = 0;
	for(i= n/2; i<= n; i++)
		for(j=1; j+n/2 <=n; j++)
			for(k = 1;k <=n; k= k*2)
				count++;
}

void fun(int n) {
	int i =1;
	while(i< n) {
		int j = n;
		while(j>0)
			j = j/2;
		i = 2*1;
	}
}

int main() {
	int n = 10;
	void *ptr = &n;
	printf("%d", *(int*)ptr);
	return 0;
	
	
	
}
