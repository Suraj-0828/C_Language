#include <stdio.h>
void sumition(int price,int quantity,int gst);
int final_price,final_gst,finally;
int main(){
	
	sumition(150,2,18);     // using system function 
	sumition(14,5,18);// you can multiple print here in function
return 0;
}

void sumition(int price, int quantity, int gst){
	final_price = price * quantity;
	final_gst = (price * gst)/100;
	finally = final_price + final_gst;
	
	printf("food price :%d\n",price);
	printf("quantity of food :%d\n",quantity);
	printf("gst of food :%d\n",gst);
	printf("--------------------------\n");
	printf("the finally sum of :%d\n",finally);
}
