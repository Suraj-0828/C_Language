#include <stdio.h>
int main(){
	int a;
	printf("Enter the number :");
	scanf("%d \n",&a);
	int fact = 1;
	int i;    // wrong hua hai aanswer doesnt show here
	for(i=1; i<=a; i++){
		fact = fact * i;
	}
	printf("%d\n",fact);
	return 0;
}
