#include <stdio.h>
void indian();  // this is our build here;
void french();

int main(){  // this is allready build in int main() and scanf();
	char ch,i,f;
	printf("Enter the charater i for india and f for french :");
	scanf("%c",&ch);
	if(ch == 'i'){
		indian();
	}
	else if(ch == 'f'){
		french();
	}
	else{
		printf("This is not in our charater \n");
	}
	return 0;
}

void indian(){
	printf("namaste \n");
}
void french(){
	printf("bonjour \n");
}

