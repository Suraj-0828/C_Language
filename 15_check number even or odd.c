#include <stdio.h>
int main(){
	int num1;
	printf("Enter the number :");
	scanf("%d",& num1);
	if(num1 % 2 == 0){
		printf("yes this is even number %d",num1);
	}
	else{
		printf("this is odd number %d",num1);
	}
	return 0;
}
