#include <stdio.h>
#include <conio.h>

#define ENTER 13
#define MAX 80

int main(void) {

	FILE *fptr;

	char str[MAX],ch;
	int count = 0;

	fptr = fopen("write.txt", "a");
	printf("��J�r��A��ENTER�䵲����J:\n");
	while ((ch = getche()) != ENTER && count < MAX) {
		str[count++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), count, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");

	return 0;

}