# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include <string.h>
# include <windows.h>
#include<stdlib.h>
#include<time.h>

//int main()
//{
//	printf("helloworld");
//}



//int main() //判断一个数是否为奇数
//{
//	int num;
//	int a;
//	scanf("%d", &num);
//	a = num % 2;
//	if (0 == a)
//	{
//		printf("偶数");
//	}
//	else
//	{
//		printf("奇数");
//	}
//	return 0;
//
//}

//int main() //输出100以内的奇数
//{
//	int i;
//	for (i = 0; i <= 100; i++)
//	{
//		if(i%2==1)
//			printf("%d\n", i);
//	}
//		
//	return 0;
//}

//int main() //输出100以内的奇数
//{
//	int a = 0;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d ", a);
//		a++;
//	}
//	return 0;
//}

//int main() //计算n的阶乘
//{
//	int n = 0;
//	int m = 0;
//	int s = 1;
//	scanf("%d", &m);
//	for (n = 1; n <= m; n++)
//
//	{
//		printf("%d", n);
//		if (n < m)
//			 printf("*");
//		else
//			printf("=");
//		s = n * s;
//	}
//	printf("\n");
//	printf("%d", s);
//	return 0;
//
//}


//int main() //计算 1！+2！+3！+4！+···+n！
//{
//	int i = 0;
//	int n = 1;
//	int m = 1;
//	int j = 0;
//	scanf("%d", &n);
//	for (i = 1; i < n; i++)
//	{
//		m = i * m;
//		j = j + m;
//	}
//	printf("%d", j);
//	return 0;
//}


//int main() //二分法找有序数列中的某一元素
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int k = 12;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	//int mid = (right + left) / 2;
//	//printf("%d", mid);
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid-1; //必须缩小mid，不能使用mid
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("已找到：%d", arr[mid]);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}



//int main()  //演示多个字符从两端向中间移动
//{
//	char c[] = "welcome to bit!!!";
//	char d[] = "#################";
//	int i = 0;
//	int sz = sizeof(c) / sizeof(c[0]);
//	int j = sz - 2;  //注意是减去2而不是减去1，因为字符串后面有一个隐藏的/n,
//	                // 或者可以用下面一行的strlen函数。
//	//int j = strlen(c) - 1;
//	for (; i <= j; i++, j--)
//	{
//		d[i] = c[i];
//		d[j] = c[j];
//		printf("%s\n", d);
//		Sleep(1000); // 休息一秒
//		system("cls");
//	}
//
//	return 0;
//}

//int main()
//{
//	char password[20] = "123456asd";
//	char input[20] = {0};
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		printf("enter your password:\n");
//		scanf("%s", input);
//		if (strcmp(input, password) == 0)  //比较字符串函数，如果相等返回0，如果第一个大于第二个返回大于0的数字，如果第一个小于第二个，返回一个小于0的数字。
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//		{
//			printf("密码错误");
//		}
//
//	}      
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序");
//	}
//	return 0;
//}

//int main() // 比较三个数的大小(自己写的）
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int m = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a >= b)
//	{
//		if (b >= c) //a>b>c
//		{
//			printf("%d %d %d", a,b,c);
//		}
//		else // c>b
//		{
//			if (a >= c) 
//			{
//				printf("%d %d %d", a, c, b); 
//			}
//			else //c>a
//			{
//				printf("%d %d %d", c, a, b);
//			}
//		}
//	}
//	else //b>a
//	{
//		if (c >= a)
//		{
//			if(b>c)
//			{ 
//				printf("%d %d %d", b, c, a);
//			}
//			else //c>b
//			{
//				printf("%d %d %d", c, b, a);
//			}
//		}
//		else //a>c
//		{
//			printf("%d %d %d", b, a, c);
//		}
//	}
//
//	return 0;
//}



//int main() // 比较三个数的大小（老师给的）
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//s算法实现：a中放最大，c中放最小的
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//


//int main()//打印1-100之间的3的倍数 
//{
//	int n = 1;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 3 == 0)
//		{
//			printf("%d ", n);
//		}
//	}
//
//	return 0;
//}


//int main() //秋两个数的最大公约数
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d", n);
//	return 0;
//}

//int main() // 计算1000-2000年中为闰年
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//		}
//		else if (y % 4 == 0 && y % 100 != 0)
//		{
//			printf("%d ", y);
//		}
//
//	}
//
//	return 0;
//}


//
//int main() //输出100-200之间的素数
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		//试除法，产生2-a-1个数，一个一个试
//
//		int j = 0;
//		for (j = 2; j < a; j++)
//		{
//			if (a % j == 0)
//			{
//				break;
//			}
//		}
//		if (a == j)
//			{
//			 printf("%d ", a);
//			}
//	}
//	return 0;
//}

//
//int main() //打印99乘法表
//{
//	int a = 1;
//	int b = 1;
//	int m = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <=a; b++)
//		{
//			m = a * b;
//			printf("%d * %d = %-2d  ", b,a,m); //%-2d表示输出结果是两位数，左对齐
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void menu()
//{
//	printf("*****************************\n");
//	printf("*****************************\n");
//	printf("****  1->play   0->exit *****\n");
//	printf("*****************************\n");
//	printf("*****************************\n");
//
//}
//
//void game() //猜数字游戏
//{
//	printf("This is a number guess game!\n");
//	//1.生成一个随机数字
//	int ret = 0;
//	int guess = 0; // 接受猜的数字
//	//拿时间戳来设置随机数字的生成起点
//	// time_t time(time_t *timer)
//	ret = rand()%100+1; //生成1-100之间的数字，RAND_MAX范围在0-32767，除以100的余数一定在为0-99，加一则为1-100
//	//printf("%d", ret);
//	while (1)
//	{
//		printf("your guess is:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("correct，congratulation！\n");
//			break;
//		}
//	}
//
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//		menu();
//		printf("your choose is\n");
//		scanf("%d", &input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("exit\n");
//				break;\
//			default:
//				printf("error");
//				break;
//		}
//
//	} while (input);
//
//	return 0;
//}

//
//int main()
//{
//	printf("123\0asdfads"); //打印字符串或者计算字符串长度时，\0即为字符串的结束标志，因此\0后面的内容不会计入
//	return 0;
//}

 
//int binary_search(int arr[], int k) //错误示范
//{
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //错误！！！数组在传参时，仅仅传递的是首元素的地址。
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1; //必须缩小mid，不能使用mid
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 12;
//	int ret = binary_search(arr, k);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//
//	}
//
//	return 0;
//
//}
//
//int binary_search(int arr[], int k, int sz) //正确示范，写一个函数实现二分法找数字
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right) //必须是小于等于
//	{
//		int mid = (right + left) / 2;  //必须放循环里
//		if (arr[mid] > k)
//		{
//			right = mid - 1; //必须缩小mid，不能使用mid
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//
//	}
//
//	return 0;
//
//}

//void ADD(int* p)  //调用一次，值加一
//{
//	(*p)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	ADD(&num);
//	printf("%d\n", num);
//	return 0;
//} 

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//printf函数返回值为打印的字符的个数
//	return 0;
//}

//
//void print(int n)  //递归算法，单个输出输入的每一位数字
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n%10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", num);
//	print(num);
//	return 0;
//}



//int my_strlen(char* str)  //一个函数计算字符串的长度
//{
//	int lenth = 0;
//	while (*str != '\0')
//	{
//		str++;
//		lenth++;
//	}
//	return lenth;
//}
//
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("len= %d\n", len);
//	return 0;
//}


//int my_strlen(char* str)  //用递归算法计算字符串的长度
//{
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//// 可以分解为1+my_strlrn("ello")  递归思想：大事化小
////           2+my_strlrn("llo")
////		     3+my_strlrn("lo")
////           4+my_strlen("o")
////           5+my_strlen("")
//
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr); 
//	printf("len= %d\n", len);
//	return 0;
//}


//int Fac(int n)   //递归计算n的阶乘
//{ 
//	if (n > 0)
//	{
//		return n * Fac(n - 1);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d", ret);
//	return 0;
//}


//
//int febo(int n)  // 求第n个斐波那契数
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return febo(n - 1) + febo(n - 2);
//	}
//}
//
//
//
//int main()
//{
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret=febo(a);
//	printf("%d", ret);
//	return 0;
//}


void bubble_sort(int arr[],int sz)// 冒泡法排序
{
	int i = 0;
	int t = 0;
	int j = 0;

	for (i = 0; i < sz-1; i++)//确定冒泡排数的躺数
	{
		int flag = 1;//假设这一趟已经有序
		for (j = 0;j<sz-i-1; j++)//每一趟的次数
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] =arr[j+1];
				arr[j+1] = t;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


int main()
{
	int arr[] = { 0,56,12,8,4,63,10,8 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
