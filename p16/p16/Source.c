#include <stdio.h>
#include <conio.h>

#define ENTER 13
#define MAX 80

int main(void) {

	FILE *fptr;

	char str[MAX],ch;
	int count = 0;

	fptr = fopen("write.txt", "a");
	printf("輸入字串，按ENTER鍵結束輸入:\n");
	while ((ch = getche()) != ENTER && count < MAX) {
		str[count++] = ch;
	}
	putc('\n', fptr);
	fwrite(str, sizeof(char), count, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");

	return 0;

}