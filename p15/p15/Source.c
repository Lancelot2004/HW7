#include <stdio.h>

int main(void) {

	FILE *fptr1,*fptr2;

	char ch;
	fptr1= fopen("input.txt", "r");
	fptr2= fopen("output.txt", "w");
	int count = 0;

	if ((fptr1!=NULL)&& (fptr2 != NULL)) {

		while ((ch = getc(fptr1)) != EOF) {
			putc(ch, fptr2);
		}
		
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!\n");

	}
	else
	{
		printf("�ɮ׶}�ҥ���\n");

	}
	system("pause");

	return 0;

}