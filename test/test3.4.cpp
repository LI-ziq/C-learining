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



//int main() //�ж�һ�����Ƿ�Ϊ����
//{
//	int num;
//	int a;
//	scanf("%d", &num);
//	a = num % 2;
//	if (0 == a)
//	{
//		printf("ż��");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//
//}

//int main() //���100���ڵ�����
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

//int main() //���100���ڵ�����
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

//int main() //����n�Ľ׳�
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


//int main() //���� 1��+2��+3��+4��+������+n��
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


//int main() //���ַ������������е�ĳһԪ��
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
//			right = mid-1; //������Сmid������ʹ��mid
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+1;
//		}
//		else
//		{
//			printf("���ҵ���%d", arr[mid]);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}



//int main()  //��ʾ����ַ����������м��ƶ�
//{
//	char c[] = "welcome to bit!!!";
//	char d[] = "#################";
//	int i = 0;
//	int sz = sizeof(c) / sizeof(c[0]);
//	int j = sz - 2;  //ע���Ǽ�ȥ2�����Ǽ�ȥ1����Ϊ�ַ���������һ�����ص�/n,
//	                // ���߿���������һ�е�strlen������
//	//int j = strlen(c) - 1;
//	for (; i <= j; i++, j--)
//	{
//		d[i] = c[i];
//		d[j] = c[j];
//		printf("%s\n", d);
//		Sleep(1000); // ��Ϣһ��
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
//		if (strcmp(input, password) == 0)  //�Ƚ��ַ��������������ȷ���0�������һ�����ڵڶ������ش���0�����֣������һ��С�ڵڶ���������һ��С��0�����֡�
//		{
//			printf("��½�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//
//	}      
//	if (i == 3)
//	{
//		printf("��������������˳�����");
//	}
//	return 0;
//}

//int main() // �Ƚ��������Ĵ�С(�Լ�д�ģ�
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



//int main() // �Ƚ��������Ĵ�С����ʦ���ģ�
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//s�㷨ʵ�֣�a�з����c�з���С��
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


//int main()//��ӡ1-100֮���3�ı��� 
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


//int main() //�������������Լ��
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

//int main() // ����1000-2000����Ϊ����
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
//int main() //���100-200֮�������
//{
//	int a = 0;
//	for (a = 100; a <= 200; a++)
//	{
//		//�Գ���������2-a-1������һ��һ����
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
//int main() //��ӡ99�˷���
//{
//	int a = 1;
//	int b = 1;
//	int m = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b <=a; b++)
//		{
//			m = a * b;
//			printf("%d * %d = %-2d  ", b,a,m); //%-2d��ʾ����������λ���������
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
//void game() //��������Ϸ
//{
//	printf("This is a number guess game!\n");
//	//1.����һ���������
//	int ret = 0;
//	int guess = 0; // ���ܲµ�����
//	//��ʱ���������������ֵ��������
//	// time_t time(time_t *timer)
//	ret = rand()%100+1; //����1-100֮������֣�RAND_MAX��Χ��0-32767������100������һ����Ϊ0-99����һ��Ϊ1-100
//	//printf("%d", ret);
//	while (1)
//	{
//		printf("your guess is:\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("correct��congratulation��\n");
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
//	printf("123\0asdfads"); //��ӡ�ַ������߼����ַ�������ʱ��\0��Ϊ�ַ����Ľ�����־�����\0��������ݲ������
//	return 0;
//}

 
//int binary_search(int arr[], int k) //����ʾ��
//{
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);  //���󣡣��������ڴ���ʱ���������ݵ�����Ԫ�صĵ�ַ��
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1; //������Сmid������ʹ��mid
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
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//
//	}
//
//	return 0;
//
//}
//
//int binary_search(int arr[], int k, int sz) //��ȷʾ����дһ������ʵ�ֶ��ַ�������
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right) //������С�ڵ���
//	{
//		int mid = (right + left) / 2;  //�����ѭ����
//		if (arr[mid] > k)
//		{
//			right = mid - 1; //������Сmid������ʹ��mid
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
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//
//	}
//
//	return 0;
//
//}

//void ADD(int* p)  //����һ�Σ�ֵ��һ
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
//	printf("%d", printf("%d", printf("%d", 43)));//printf��������ֵΪ��ӡ���ַ��ĸ���
//	return 0;
//}

//
//void print(int n)  //�ݹ��㷨��������������ÿһλ����
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



//int my_strlen(char* str)  //һ�����������ַ����ĳ���
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


//int my_strlen(char* str)  //�õݹ��㷨�����ַ����ĳ���
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
//// ���Էֽ�Ϊ1+my_strlrn("ello")  �ݹ�˼�룺���»�С
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


//int Fac(int n)   //�ݹ����n�Ľ׳�
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
//int febo(int n)  // ���n��쳲�������
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


void bubble_sort(int arr[],int sz)// ð�ݷ�����
{
	int i = 0;
	int t = 0;
	int j = 0;

	for (i = 0; i < sz-1; i++)//ȷ��ð������������
	{
		int flag = 1;//������һ���Ѿ�����
		for (j = 0;j<sz-i-1; j++)//ÿһ�˵Ĵ���
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
