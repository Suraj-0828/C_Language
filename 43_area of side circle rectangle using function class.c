#include <stdio.h>
float square_area(float side); // void kab lagega jab parameter use nahi hoga tab
float circle_area(float radius);
float rectangle_area(float a,float b);
int main(){
	// area of side
	float side = 5;
	printf("this is areaofside :%f\n",square_area(side));
	
	//area of radius
	float radius = 12;
	printf("this is areaofradius :%f\n",circle_area(radius));
	
	//area of rectangle
	float a = 10;
	float b = 12;
	printf("rectangle_area is :%f\n",rectangle_area(a,b));
}

 float square_area(float side){
	return side * side;
}

 float circle_area(float radius){
 	return 3.14 * radius * radius;
 }
 
  float rectangle_area(float a,float b){
  	return a * b;
  }
