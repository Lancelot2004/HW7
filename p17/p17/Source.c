#include <stdio.h>
#define MAX 80
int main(void) {

	FILE *fptr;

	char str[MAX];
	int count;

	fptr = fopen("新文字文件.txt", "r");

	while (!feof(fptr))
	{
		count = fread(str, sizeof(char), MAX - 1, fptr);
		str[count] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	
	system("pause");

	return 0;

}