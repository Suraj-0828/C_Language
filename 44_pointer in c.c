#include <stdio.h>
int main(){
	// pointer
	int xyz = 190;
	int *ptr;
	ptr = &xyz;
	printf("this is stord pointer variable :%p\n",ptr);// stord pointer address
	printf("this is stord pointer variable :%x\n",&ptr);// stord memmor address
	return 0;
}
