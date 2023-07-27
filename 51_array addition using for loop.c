#include <stdio.h>
int main(){
	//array adition
	int data[] = {2,3,4,5,1,4,5,3,8};
	int sum = 0;
	int i;
	int size = sizeof(data)/sizeof(data[0]);
	for(i=0;i<size;i++){
		sum = sum + data[i];
	}
	printf("the array addition is :%d\n",sum);
	return 0;
}
