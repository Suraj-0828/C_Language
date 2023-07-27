#include <stdio.h>
int main(){
	int num1,num2,num3;
	printf("Enter the num1 :");
	scanf("%d",&num1);
	printf("Enter the num2 :");
	scanf("%d",&num2);
	printf("Enter the num3 :");
	scanf("%d",&num3);
	if(num1<num2 && num1<num3){
		printf("num1 is smallest number");
	}
	else if(num2<num3 && num2<num1){
		printf("num2 is smallest number");
	}
	else{
		printf("num3 is smallest number");
	}
	return 0;
}
