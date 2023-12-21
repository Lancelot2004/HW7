#include <stdio.h>

int main(void) {

	FILE *fptr1, *fptr2;

	char str[100];
	fptr1 = fopen("in.txt", "r");
	fptr2 = fopen("out.txt", "w");
	int count;

	

	while (!feof(fptr1)) {
		
		count = fscanf(fptr1, "%s", str);
		if (count > 0)
			fprintf(fptr2, "%s\n", str);
	}

	fclose(fptr1);
	fclose(fptr2);
	

	
	
	
	system("pause");

	return 0;

}