#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char* p = "        123456789             ";
	char* start = p; //��Ԫ�ص�ַ
	char* end = p + strlen(p) - 1; //βԪ�ص�ַ

	//��������
	while (*start == ' ' && *start != '\0')
	{
		start++;
	}

	//��������
	while (*end == ' ' && end != p)
	{
		end--;
	}

	int n = end - start + 1;
	printf("n = %d\n", n);

	char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	strncpy(buf, start, n);
	buf[n] = 0; //������
	printf("buf = %s\n", buf);

	return 0;
}
