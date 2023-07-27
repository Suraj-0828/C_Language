#include <stdio.h>
int main(){
	int n;
	int i;
	int sum=0;
	printf("Enter the number(1+2+3+4+5=15) :");
	scanf("%d",&n);
	for(i=1; i<=n; i++){
		sum = sum + i;
	}
	printf("the sum of %d",sum);
	return 0;
}
