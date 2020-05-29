#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	typedef struct movie
	{
		char *title;
		int attendance;
		char director[20];
	} movie;

	movie box[] = {
	{ "명량", 17613000, "김한민" },
	{ "국제시장", 14257000, "윤제균" },
	{ "베테랑", 13383000} };

	strcpy(box[2].director, "류승완");

	printf("   제목     감독   관객수\n");
	printf("===========================\n");
	for (int i = 0; i < 3; i++)
		printf("[%8s] %6s %d\n",
			box[i].title, box[i].director, box[i].attendance);

	return 0;
}

