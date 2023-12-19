#include <stdio.h>

//pointer to structure as an argument
//passing pointers to structures as arguments atau 


struct point {
	int x;
	int y;
	
};

void print (struct point *ptr) {
	printf("%d %d\n", ptr->x, ptr->y);
}

int main() {
	struct point p1 = {23, 45};
	struct point p2 = {56, 90};
	print(&p1);
	print(&p2);
	return 0;
	
}
