//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//	int left = 0;
//	int right = strlen(arr1) - 1;//或者 right = sizeof(arr1) / sizeof(arr1[0]) - 2   
//	//strlen 函数用于计算字符串长度，不计算\0的长度
//	//sizeof() 函数计算 \0 的长度
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//休眠1000ms   即1s
//		system("cls");//system是一个库函数，他可以执行系统命令  即cmd窗口可执行的命令
//
//	}
//	printf("%s\n", arr2);
//
//	
//	return 0;
//}