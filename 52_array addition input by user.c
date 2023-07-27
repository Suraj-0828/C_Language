#include <stdio.h>
int main(){
	int a,b,c,d,e,f,g,h;
	printf("Enter the number(a to h) :");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&f);
	scanf("%d",&g);
	scanf("%d",&h);
	int array[] = {a,b,c,d,e,f,g,h};
	int sum = 0;
	int i;
	int size = sizeof(array)/sizeof(array[0]);
	for(i=0;i<size;i++){
		sum = sum + array[i];
	}
	printf("THE ARRAY ADDITION IS :%d",sum);
	return 0;
}
