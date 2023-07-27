#include <stdio.h>
//struct class
struct product{
	int apple;
	int banana;
	int quantity;
	int gst;
};
//struct reference
int main(){
	//idea lagaya hai aisa kuch run nahi hora hai program okay
	//program not working
	printf("Enter the product ?\n");
	printf("Enter the apple price :\n");
	scanf("%d",&p.apple);
	printf("Enter the price of banana :");
	scanf("%d",&p.banana);
	printf("Enter the quantity :");
	scanf("%d",&p.quantity);
	printf("Enter the gst including :");
	scanf("%d",&p.gst);
	struct product p;
	p.apple = 100;
	p.banana = 230;
	p.quantity = 5;
	p.gst = 18;
	
	int final_product,fruit,product_gst;
	fruit = (p.apple + p.banana);
	product_gst = (fruit*p.gst)/100;
	final_product = (fruit + product_gst) * p.quantity;
	
	printf("The final price is :%d",final_product);
	return 0;	
}







