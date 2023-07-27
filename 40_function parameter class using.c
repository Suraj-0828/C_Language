#include <stdio.h>
// function parameter class type
int para(int a,int b);
int main(){     // the sum is not working here so that's;
	int a,b;
	printf("Enter the number a :");
	scanf("%d",& a);
	printf("Enter the number b :");
	scanf("%d", b);

	int s = para(a,b);
	printf("the sum of a and b is :%d",s);
	return 0;
}

int para(int a,int b){
	return a + b;
}
