#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��ʽһ
/*int main()
{
	int i = 1;
	int n = 1;
	int r = 1;
	int j = 1;
	int sum = 0;
	scanf("%d", &n);
	while (j<= n)
	{

		for (i = 1; i <= j; i++)
		{
			r = r * i;
		}

		sum = sum + r;
		r = 1;
		j++;
	}
	

	printf("1!�ӵ�%d�Ľ׳˵ĺ��ǣ�%d", n, sum);


	return 0;
}*/

//��ʽ��

//����һ�������������Ǽ���n�Ľ׳�
/*
int computer(int n)
{
	int i = 0;
	int r = 1;
	for (i = 1; i <= n; i++)
	{
		r = r * i;
	}
	return r;
}

// ѭ�����ú���������׳˺�
int main()
{
	int j = 1;
	int m = 1;
	int r = 0;
	scanf("%d", &m);
	for (j = 1; j <= m; j++)
	{
		r=r+computer(j);
	}
	printf("1!�ӵ�%d�Ľ׳˵ĺ��ǣ�%d\n", m, r);
	return 0;
}
*/

// ��ʽ��
/*

int main()
{
	int i = 1;
	int n = 1;
	int r = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		r = r * i;
		sum = sum + r;
	}

	printf("1!�ӵ�%d�Ľ׳˵ĺ��ǣ�%d\n", n, sum);


	return 0;
}
*/
