//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[20] = {0};
//	//假设密码是字符串 abcdef
//	//只能输入三次密码
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码>:");
//		scanf("%s", password);//数组名本来就是地址，所以这个地方可以不取地址
//		if (strcmp(password,"abcdef")==0)//比较两个字符串是否相等不能使用 ==  ，而是需要使用 strcmp 函数（string compare)
//								 // 如果相等，strcmp 函数返回值是 0
//		{
//			printf("密码正确，登陆成功！");
//			break;
//		}
//		else
//		{
//			printf("密码错误！\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次错误，程序退出！");
//	}
//
//
//
//
//
//
//	return 0;
//}