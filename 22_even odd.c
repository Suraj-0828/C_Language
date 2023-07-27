#include <stdio.h>
int main(){
	int num1;
	printf("Enter your number :");
	scanf("%d",&num1);
	if(num1 % 2 == 0){
		printf("this is even number");
	}
	else{
		printf("this is odd number");
	}
	return 0;
}
