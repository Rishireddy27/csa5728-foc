#include<stdio.h>
int main(){
	int n;
	printf("enter the value of n:");
	scanf("%d",&n);
	if(n>0){
		printf("it is a positive number");
		
	}else if(n<0){
		printf("it is a negative number");
		
	}else if(n=0){
		printf("it is neither positive or negative");
	}else{
		printf("it is a not a numeric number");
	}
	return 0;
}

