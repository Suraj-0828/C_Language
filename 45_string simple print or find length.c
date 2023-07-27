#include <stdio.h>
int main(){
	// string are only support in array
	// print string
	char array[] = "code with professor";
	printf("This is string :%s\n",array);
	
	//print length of string
	int length = 0; // it is just showing 0 indexs
	length = strlen(array);
	printf("this is the length of string :%d",length);
	
	return 0;
}
