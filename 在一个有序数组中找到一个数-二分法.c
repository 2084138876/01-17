//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////二分法
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);//输入要找的数字
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	//sizeof用于计算内存大小    
//	//sizeof(arr1)结果是arr1数组的大小
//	//sizeof(arr1[0])结果是一个元素的大小
//	//所以，二者相除的结果sz是数组元素的个数
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
//	
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间下标
//	    // 若害怕 int 值溢出，可使用 mid=left+(right-left）/2
//		if (arr1[mid] < k)//如果中间下标对应的数字小于要查找的数字
//		{
//			//那么，要找的数字在数字在mid的右边
//			//此时left要变成mid+1;而right不用变化
//			left = mid + 1;
//		}
//		else if (arr1[mid] > k)//如果中间下标对应的数字大于要查找的数字
//		{
//			//那么，要找的数字在mid的左边
//			//此时right要变成mid-1,而left不用变化
//			right = mid - 1;
//		}
//		else//如果中间下标对应的数字等于要找的数字
//		{
//			//那么，找到了 
//			//此时mid的下标就是要找的数字的下标
//			printf("找到了，下标是：%d", mid);
//			break;
//			//跳出循环
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！");
//	}
//
//	return 0;
//}