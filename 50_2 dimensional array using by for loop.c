#include <stdio.h>
int main(){
	// multi dimensional array
	int array[3][3];
	//first row first colms
	//first row second column
	//first row third column
	array[0][0] = 2;
	array[0][1] = 5;
	array[0][2] = 4;
	
	array[1][0] = 5;
	array[1][1] = 7;
	array[1][2] = 8;
	
	array[2][0] = 4;
	array[2][1] = 3;
	array[2][2] = 9;
	
//	printf("%d",array[0][0]); single type me bhi print kar sakte hai
	
	int i,a;
	for(i=0;i<=2;i++){
		for(a=0;a<=2;a++){
			printf("%d\n",array[i][a]);
		}
//		printf("\n");
		return 0;
	}
	
}
