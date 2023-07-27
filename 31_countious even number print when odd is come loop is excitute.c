#include <stdio.h>
int main(){
	int a;
	do{
		printf("Enter number :");
		scanf("%d",&a);
	//	printf("%d \n",a);
		if(a % 2 != 0){
			break;
		}
	}while(1);
	printf("Thank you");
	return 0;
}
