#include <stdio.h>
int main(){
	int a,b,i;
	printf("Enter the number here (first to last number):");
	scanf("%d",&a);
	scanf("%d",&b);
	int sum=0;
	for(i=a;i<=b;i++){
		sum = sum + i;
	}
	printf("the total sum of this number %d \n",sum);
	return 0;
}
