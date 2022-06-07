#define _CRT_SECURE_NO_WARNINGS 1

//计算一个数存储在计算机中1的个数
#include <stdio.h>

int calcu(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//将n与n-1按位与，会使得n的末尾的1变为0
//因此进行几次按位与操作，就有几个1
//如1011&1010=1010
//  1010&1001=1000
//  1000&0111=0000

int main()
{
	int n;
	int count1 = 0, count2 = 0;
	int i = 0;
	scanf("%d", &n);
	//方法1
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count1++;
		}
	}

	//方法2
	count2 = calcu(n);

	printf("方法1 = %d\n", count1);
	printf("方法2 = %d\n", count2);
	return 0;
}



