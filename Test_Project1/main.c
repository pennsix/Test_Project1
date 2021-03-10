#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char* p = "        123456789             ";
	char* start = p; //首元素地址
	char* end = p + strlen(p) - 1; //尾元素地址

	//从左往右
	while (*start == ' ' && *start != '\0')
	{
		start++;
	}

	//从右往左
	while (*end == ' ' && end != p)
	{
		end--;
	}

	int n = end - start + 1;
	printf("n = %d\n", n);

	char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	strncpy(buf, start, n);
	buf[n] = 0; //结束符
	printf("buf = %s\n", buf);

	return 0;
}
