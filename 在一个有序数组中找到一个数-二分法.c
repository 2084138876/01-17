//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////���ַ�
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);//����Ҫ�ҵ�����
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//sizeof���ڼ����ڴ��С    
//	//sizeof(arr1)�����arr1����Ĵ�С
//	//sizeof(arr1[0])�����һ��Ԫ�صĴ�С
//	//���ԣ���������Ľ��sz������Ԫ�صĸ���
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м��±�
//	    // ������ int ֵ�������ʹ�� mid=left+(right-left��/2
//		if (arr1[mid] < k)//����м��±��Ӧ������С��Ҫ���ҵ�����
//		{
//			//��ô��Ҫ�ҵ�������������mid���ұ�
//			//��ʱleftҪ���mid+1;��right���ñ仯
//			left = mid + 1;
//		}
//		else if (arr1[mid] > k)//����м��±��Ӧ�����ִ���Ҫ���ҵ�����
//		{
//			//��ô��Ҫ�ҵ�������mid�����
//			//��ʱrightҪ���mid-1,��left���ñ仯
//			right = mid - 1;
//		}
//		else//����м��±��Ӧ�����ֵ���Ҫ�ҵ�����
//		{
//			//��ô���ҵ��� 
//			//��ʱmid���±����Ҫ�ҵ����ֵ��±�
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//			//����ѭ��
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
//	}
//
//	return 0;
//}