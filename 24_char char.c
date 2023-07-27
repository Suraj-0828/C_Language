#include <stdio.h>
int main(){
	char word;
	printf("Enter your number :");
	scanf("%c",&word);
	if(word >= 'A' && word <= 'Z'){
		printf("this is upper cash");
	}
	else if(word >= 'a' && word <= 'z'){
		printf("this is lower cash");
	}
	else{
		printf("please Enter correct format");
	}
	return 0;
}
