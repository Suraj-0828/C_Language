#include <stdio.h>
int main(){
	int a; // instilize value
	do{
		printf("Enter number :");
		scanf("%d",&a);
	//	printf("%d \n",a);
		if(a % 7 == 0){
			break; // increment
		}
	}while(1); // condition
	printf("Thank you");
	return 0;
}
