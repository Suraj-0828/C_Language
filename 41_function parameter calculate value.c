#include <stdio.h>
void calculateprice(float value);

int main(){
	float value = 100;
	calculateprice(value);
	return 0;
}

void calculateprice(float value){
	value = value + ((value * 18)/100);
	printf("this is final price :%f",value);
}
