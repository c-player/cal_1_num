#define _CRT_SECURE_NO_WARNINGS 1

//����һ�����洢�ڼ������1�ĸ���
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
//��n��n-1��λ�룬��ʹ��n��ĩβ��1��Ϊ0
//��˽��м��ΰ�λ����������м���1
//��1011&1010=1010
//  1010&1001=1000
//  1000&0111=0000

int main()
{
	int n;
	int count1 = 0, count2 = 0;
	int i = 0;
	scanf("%d", &n);
	//����1
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count1++;
		}
	}

	//����2
	count2 = calcu(n);

	printf("����1 = %d\n", count1);
	printf("����2 = %d\n", count2);
	return 0;
}



