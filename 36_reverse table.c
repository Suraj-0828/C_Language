#include <stdio.h>
int main(){
	int a,i;
	printf("Enter the reverse table number :");
	scanf("%d",& a);
	for(i=10; i>=1; i--){
		printf("%d \n",(a*i));
	}
	return 0;
}
