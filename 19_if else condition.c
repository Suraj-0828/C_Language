#include <stdio.h>
int main(){
	int age;
	printf("Enter you age :");
	scanf("%d",& age);
	if(age > 18 && age < 100){
		printf("you are a adult");
	}
	else if(age <= 18){
		printf("you are not adult");
		printf("please go away");
	}
	else{
		printf("please Enter correct format");
	}
	return 0;
}
