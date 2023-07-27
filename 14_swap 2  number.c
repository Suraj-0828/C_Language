#include <stdio.h>
int main(){
	int a;
	int b;
	int temp;
	printf("Enter the first number :");
	scanf("%d",& a);
	printf("Enter the second number :");
	scanf("%d",& b);
	//swap to number
	 temp = a;
	 a = b;
	 b = temp;
	printf("\n changing a to b %d",a);
	printf("\n changing b to a %d",b);
	return 0;
}
