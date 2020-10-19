#define _CRT_SECURE_NO_WARNINGS
#include<windows.h>
#include<stdio.h>
#include<math.h>

int FacNumber(int n)
{
	int i = 0;
	int result = 1;
	for (i = n; i > 0; i--)
	{
		result*= i;
	}
	return result;
}
int Fac_Number(int n)
{
	if (n)
	{
		return Fac_Number*
	}



}
int main()
{
	int n = 3;
	int fac = FacNumber( n);
	printf("%d\n", fac);
	system("pause");
	return 0;
}



//模拟实现strlen函数，“hello，bit”，找到h的地址，1+“ello，bit”，地址+1找到e的地址；
//int Strlen(char *p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	return 1 + Strlen(p + 1);
//}
//int main()
//{
//	char *arr= "hello,bit";
//	int len = Strlen(arr);
//	//int len = 0;
//
//	////初始化
//	//while (*p != '\0')//条件判定
//	//{
//	//	len++;
//	//	p++;
//	//}
//	printf("%d\n", len);
//	system("pause");
//	return 0;
//}
//void MutilTable(int num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <=num ; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int number = i*j;
//			printf("%d*%d=%-4d", i, j, number);
//		}
//		printf("\n");
//	}
//
//
//}
//
//#define num 12
//int main()
//{
//
//	MutilTable(num);
//	system("pause");
//	return 0;
//}

//void Swap(int *x, int *y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a:%d b:%d\n", a, b);
//	system("pause");
//	return 0;
//}



//int IsLeapYear(int year)
//{
//	return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//int main()
//{
//	int year = 0;
//	for (year = 1; year <= 2020; year++)
//	{
//		if (IsLeapYear(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}


//int IsPrimeNumber(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n%i == 0)
//		{
//			return -1;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int num = 100;
//	for (num = 100; num <= 200; num++)
//	{
//		if (IsPrimeNumber(num)==1)
//		{
//			printf("%d ", num);
//		}
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}