#include <stdio.h>
int main(){
	int num1;
	printf("Enter the num1 :");
	scanf("%d",&num1);
	// check leap year
	if(num1 % 400 == 0){
		printf("this is a leap year :%d",num1);
	}
	else if(num1 % 4 == 0){
		printf("this is a leap year :%d",num1);
	}
	else{
		printf("this is not a leap year :%d",num1);
	}
	return 0;
}
