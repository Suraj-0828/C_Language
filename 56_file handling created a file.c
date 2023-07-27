#include <stdio.h>
int main(){
	FILE *fsuraj;
	
	//create a file
	fsuraj = fopen("57_file created.txt","w");
	
	fclose(fsuraj);
}
