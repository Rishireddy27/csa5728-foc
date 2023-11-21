#include <stdio.h>
int main()
{
	int x , y ;
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of y:");
	scanf("%d",&y);
    if (y == 0) {
		y = x;
		x = 0;
	}
	else if (x == 0) {
		x = y;
		y = 0;
	}
	
	else {
		x = x * y; 
		y = x / y; 
		x = x / y; 
	}

	printf("After Swapping: x = %d, y = %d", x, y);

	return 0;
}



