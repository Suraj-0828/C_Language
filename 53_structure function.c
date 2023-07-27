#include <stdio.h>
//struct reference
struct product{
	int apple;
	int banana;
	int quantity;
	int gst;
};

int main(){
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







