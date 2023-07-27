#include <stdio.h>
int main(){
	int day;
	printf("Enter a day(1 to 7) : ");
	scanf("%d",& day);
	switch(day){
		case 1:
			printf("This is monday \n");
			break;
		case 2:
			printf("This is Tuesday \n");
			break;
		case 3:
			printf("This is Wednesday \n");
			break;
		case 4:
			printf("This is Thursday \n");
			break;
		case 5:
			printf("This is Friday \n");
			break;
		case 6:
			printf("This is Saturday \n");
			break;
		case 7:
			printf("This is Sunday \n");
			break;
		default:
			printf("Please only valid number \n");
	}
}
