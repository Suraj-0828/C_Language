#include <stdio.h>
int main(){
	FILE *fsuraj;
	
	//create a file
	fsuraj = fopen("57_file created.txt","w");
	
	//store the cpntent of the file
	char mystring[100];
	
	fgets(mystring,100,fsuraj);
	
	printf("%s",mystring);
	
	fclose(fsuraj);
	return 0;
}
