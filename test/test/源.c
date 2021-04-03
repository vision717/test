#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<Windows.h>
#include<string.h>
#include<stdlib.h>//system("cls //shutdowm -s -t 60//shutdown -a");
#include<time.h>
#include<ctype.h>//isalpha(ch)判断是否字母
#include"add.h"//函数调用

//int main()
//{
//	int a[51], N,n, i,x;
//
//	scanf("%d", &n);
//	N = n;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &x);
//	while (1)
//	{
//		if (x < a[n - 1])
//		{
//			a[n] = a[n - 1]; n--;
//		}
//		else
//			break;
//	}
//	a[n] = x;
//
//	for (i = 0; i <= N; i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//int main()
//{
//	int i, j = 0,k;
//	for (k = 1; k <= 100; k += 2)
//	{
//		i = k;
//		while (i)
//		{
//			if (i % 10 == 9)
//			{
//				j++; break;
//			}
//			i /= 10;
//		}
//	}
//	printf("%d", j);
//	return 0;
//}
//int main()
//{
//	int i, j, k;
//	while (scanf("%d", &k) != EOF)
//	{
//		for (i = 0; i < k; i++)
//		{
//			for (j = 0; j < k; j++)
//			{
//				if (i == j || i == k - 1 - j)
//					printf("*");
//				else
//					printf(" ");
//				
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

/*
int main()
{
	return 0;
}*/
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//
//	//申请存放数组并输入初始化
//	int a[40] = { 0 };
//	for (int i = 0; i < n; ++i) {
//		scanf("%d", &a[i]);
//	}
//	//使用算法库内置的sort函数进行排序，greater<int>是STL内置的比较函数
//	sort(a, a + n, greater<int>());
//	//输出前五大的数值
//	printf("%d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4]);
//	return 0;
//}
//bool comp(int x, int y) {//重载sort
//	return x > y;
//}
//int n;
//int a[99999];
//int main() {
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) scanf("%d", &a[i]);//输入
//
//	sort(a, a + n, comp);//排序
//
//	for (int i = 0; i < 5; i++) printf("%d ", a[i]);//输出
//}
//int main()
//{
//	int i, j, k, jh, xs, cj[40];
//	scanf("%d", &xs);
//	for (i = 0; i < xs; i++)
//		scanf("%d", &cj[i]);
//	for (i = 0; i < 5; i++)
//	{
//		k = i;
//		for (j = i + 1; j < xs; j++)
//		{
//			if (cj[k] < cj[j])
//			{
//				k = j;
//			}
//		}
//		jh = cj[i];
//		cj[i] = cj[k];
//		cj[k] = jh;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", cj[i]);
//	}
//	return 0;
//}
// ------------------------------------排序---------------------------------------
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//处理一行
//		//空格
//		int j = 0;
//		for (j = 0; j < 5 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		//数字
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void mppx(int* i, int sz)
//{
//	int a, b,c;
//	for (a = sz; a >0; a--)
//	{
//		
//		for (b = 0; b < a-1 ; b++)
//		{
//			if (*(i + b) > *(i + b + 1))
//			{
//				c = *(i + b);
//				*(i + b) = *(i + b + 1);
//				*(i + b + 1) = c;
//			}	
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 1,9,4,3,0,12,7,17,9,10 };
//	int j = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	mppx(arr, size);
//	for (; j < size; j++)
//		printf("%d ", arr[j]);
//	printf("\n%p\n", &arr);//整个数组的地址
//	printf("%p\n", &arr + 1);//整个数组后面的地址
//	printf("%p", arr);//数组首元素的地址
//	return 0;
//}
// --------------------------冒泡排序-------------------------------------------
//int main()
//{
//	int arr1[] = { 1,2,3 };
//	char arr2[] = { 'a','b','c' };
//	char arr3[] = "abc";
//	printf("%d\n", sizeof(arr1));//12
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", sizeof(arr3));//4
//	printf("%d\n", strlen(arr2));//随机值
//	printf("%d\n", strlen(arr3));//3
//	return 0;
//}---------------strlen,sizeof-----------------------------------
//int fbnq(int i)
//{
//	if (i > 2)
//		return fbnq(i - 1) + fbnq(i - 2);
//	else
//		return 1;
//}
//                          递归---------注：栈溢出---------------------------------
//int fbnq(int i)
//{
//	int a = 1, b = 1, c = 1;
//	while (i > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		i--;
//	}
//	return c;
//}                                   循环--------------------------------
//int main()
//{
//	int i;
//	scanf("%d", &i);
//	printf("%d\n", fbnq(i));
//	return 0;
//}
//------------------------------------斐波那契数:1 1 2 3 5 8 13 21......
//int my_strlen(char* i)
//{
//	if (*i != 0)
//		return 1 + my_strlen(i + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char a[] = "abcdefg";
//	int len = my_strlen(a);
//	printf("%d\n", len);
//	return 0;
//}
// -----------------递归-----------字符串长度-----------------------------
//void dayi(int i)
//{
//	if (i>10)
//		dayi(i / 10);
//	printf("%d ", i%10);
//}
//int main()
//{
//	int a = 1234;
//	dayi(a);
//	return 0;
//}
// ------------------------------------打印-----------------------------------
//int main()
//{
//	printf("%d\0", printf("%d\0", printf("%d\0", 123)));
//	return 0;
//}
//void ss(int* a, int i, int j)
//{
//	int left, middle, right;
//	left = 0; right = j - 1;
//	do
//	{
//		middle = (left + right) / 2;
//		if (i < *(a + middle))
//			right = middle - 1;
//		else
//			if (i > *(a + middle))
//				left = middle + 1;
//			else
//			
//				if (i == *(a + middle))
//				{
//					printf("有%d\n", middle); break;
//				}
//	} while (left <= right);
//	if (left > right)printf("无\n");
//}
//int main()
//{
//	int a[] = { 1,2,3,4,7,8,9,10 };
//	int size = sizeof(a) / sizeof(a[0]);
//	
//	int xz;
//	scanf("%d", &xz);
//	ss(a, xz, size);
//	return 0;
//}
//int main()
//{
//	char input[20];
//	system("shutdown -s -t 60");
//	again:
//	scanf("%s", input);
//	if (strcmp(input, "停止关机") == 0)
//		system("shutdown -a");
//	else
//		goto again;
//	return 0;
//}
//------------------------------关机-------------------------------------------

/*void play()
{
	int sr,sj;
	printf("猜数字：\n");
	sj = rand()%100+1;
	do
	{
		scanf("%d", &sr);
		if (sr < sj)printf("猜小了！\n");
		else
			if (sr > sj)printf("猜大了！\n");
			else
				if (sr == sj)
				{
					printf("猜对了！！！\n"); break;
				}
	} while (1);
}
int main()
{
	int xz;
	srand((unsigned int)time(NULL));
	do
	{
		printf("***************猜数字***************\n");
		printf("***********1.play   0.over**********\n");
		printf("************************************\n");
		scanf("%d", &xz);
		switch (xz)
		{
		case 1: play(); break;
		case 0:printf("游戏结束！！！\n"); break;
		default:printf("输入错误！！！\n"); break;
		}
		Sleep(1000);
		system("cls");
	} 	while (xz);
	
	return 0;
}
 ------------------------------猜数字游戏--------------------------------------*/
//int main()
//{
//	int i, j, k=0;
//	for (i = 101; i <= 199; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)break;
//		}
//		if (j > sqrt(i))
//		{
//			k++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", k);
//	return 0;
//}
//-----------------------------------质数----------------------------------------

//int main()
//{
//	int i, j, k;
//	scanf("%d%d", &i, &j);
//	while (i % j)
//	{
//		k = i % j;
//		i = j;
//		j = k;
//	}
//	printf("%d", j);
//	return 0;
//}
// -------------------------------------最大公约数----------------------------------------
//int main()
//{
//	int a[9] = { 1,2,3,4,5,7,8,9 }, i, j;
//	int sr,sz,left,right,middle;
//	sz = sizeof(a) / sizeof(a[0]);
//	left = 0; right = sz - 1;
//	scanf("%d", &sr);
//	while (left<=right)
//	{
//		middle = (left + right) / 2;
//		if (a[middle] < sr)
//			left = middle+1;
//		else
//			if (a[middle] > sr)
//				right = middle-1;
//			else
//				if (a[middle] == sr)
//				{
//					printf("找到了：%d", middle);
//					break;
//				}
//	}
//	if (left > right)printf("找不到");
//	return 0;
//}
// -------------------------------------二分查找----------------------------------
//int main()
//{
//	int i, j,ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//{
//	char i, j;
//	while ((i = getchar()) != EOF)
//		putchar(i);
//}
	
//{
//	void pj(int* p, int i);
//	void sc(int(*p)[3], int j);
//	int a[3][3],i,j;
//	for (i = 0, j = 0; i < 3, j < 3; i++, j++)
//		scanf("%d", a[i][j]);
//	pj(*a, 9);
//	
//}
//void pj(int* p,  int i)
//{
//	int k = 0, * q; q = p + i;
//	for(;p<q;p++)
//	{
//		k = (*p) + k;
//	}printf("%d\n",k / i );
//	
//}
