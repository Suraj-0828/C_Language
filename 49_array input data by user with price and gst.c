#include <stdio.h>
int main(){
	float data[3];
	printf("Enter the three number :");
	scanf("%f",&data[0]);
	scanf("%f",&data[1]);
	scanf("%f",&data[2]);
	
	printf("The first number :%f\n",data[0]+((data[0]*18)/100));
	printf("The second number :%f\n",data[1]+((data[1]*18)/100));
	printf("The third number :%f\n",data[2]+((data[2]*18)/100));
	return 0;
}
