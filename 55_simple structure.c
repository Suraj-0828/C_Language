#include <stdio.h>
//structure class
struct client{
	int price;
	int gst;
};
//structure reference
int main(){
	struct client c;
	c.price = 100;
	c.gst = 18;
	
	int final_price,final_gst;
	final_gst = (c.price * c.gst)/100;
	final_price = (c.price + final_gst);
	
	printf("The final price is :%d",final_price);
	return 0;
}








