//#include<Windows.h>
//void gotoxy(int x, int y)
//
//{
//
//	COORD pos = { x,y };
//
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//
//}

#define _CRT_SECURE_NO_WARNINGS
/* #include<stdio.h>
#include<time.h>

int main(void) {
	time_t rawTime;
	struct tm* pTimeInfo;

	rawTime = time(NULL);                // ���� �ð��� ����
	pTimeInfo = localtime(&rawTime);    // ���� �ð��� �̻ڰ� struct tm�� ����

	printf("time_t : %lld\n", rawTime);

	int year = pTimeInfo->tm_year + 1900;    //�������� 1900 ������
	int month = pTimeInfo->tm_mon + 1;    // ������ 1 ������
	int day = pTimeInfo->tm_mday;
	int hour = pTimeInfo->tm_hour;
	int min = pTimeInfo->tm_min;
	int sec = pTimeInfo->tm_sec;
	printf("timeInfo : %d�� %d�� %d�� %d�� %d�� %d��\n", year, month, day, hour, min, sec);

	return 0;
}
// ����ð� ���ϴ� ���α׷�
// ����1 : time_t�� ¦�� �̷�� ctime �Լ�
// ����2 : struct tm�� ¦�� �̷�� asctime �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main(void) {

	
	time_t t1;
	time(&t1);

	char* str1 = ctime(&t1);
	printf("ctime�� ��� : %s\n", str1);

	struct tm* pTm;
	time_t t2;

	t2 = time(NULL);
	pTm = localtime(&t2);

	char* str2 = asctime(pTm);
	printf("asctime�� ��� : %s\n", str2);

	return 0;
}
 //�����÷ο� 

#include<stdio.h>
#define rr	return
int main(void) {
	char num1 = 128; // char�� �����Ҽ� �ִ� �ִ� 128
	unsigned char num2 = 256; // unsigned char�� �����Ҽ� �ִ� �ִ� 255
	//�Ѵ� �����Ҽ� �ִ� ������ �Ѿ �ּڰ����� ������
	printf("%d %u %u \n", num1, num2, num3);
	rr 0;
}
//char �̿ܿ��� short, int, long, long long � ������ �� �ִ� ������ �Ѿ�� �ּڰ����� �ٽ� �����ϰ� �˴ϴ�.
//�ݴ�� �ּڰ����� �۾����� ����÷ο�(underflow)�� �߻��Ͽ� �ִ񰪺��� �ٽ� ����
//short 32767 ���� �����Ҽ� �մ� �ִ� 32768���� 
 // ���� �÷ο�
#include <stdio.h>
#include <iostream>
using namespace std;
int main(void) {

	//short a, b, c; 
	//unsigned short s, t, u;

	//a = 20000;
	//b = 12769;
	//c = a + b;
	//printf("%d+%d=%d\n", a, b, c);

	//s = 20000;
	//t = 30000;
	//u = s - t;
	//cout << s << "-" << t << "=" << u << endl;

	//__int64 q, w, e;

	//q = 111111111;
	//w = 111111111;
	//e = q*w;
	cout << q << "*" << w << "=" << e << endl;
	
}

// ũ�� ���ϱ� 
#include <iostream>
using namespace std;
int main(void) {
	double n1 = 0;

	int size = sizeof(n1);
	printf("n1 = %d\n", size);

}

#include <stdio.h>

int main(void) {
	char text = 0;
	while (text != EOF) {
		text = getchar();
		if (text == 'end') continue;
		putchar(text);
		
	}
	return 0; 
}

//�ִ밪, �ּڰ� ���ϱ�
#include <stdio.h>
#include <limits.h>    // �ڷ����� �ִ񰪰� �ּڰ��� ���ǵ� ��� ����

int main()
{
	char num1 = CHAR_MAX +1 ;          // char�� �ּڰ�
	short num2 = SHRT_MAX;         // short�� �ּڰ�
	int num3 = INT_MAX;            // int�� �ּڰ�
	long num4 = LONG_MAX;          // long�� �ּڰ�
	long long num5 = LLONG_MAX;    // long long�� �ּڰ�

	// char, short, int�� %d�� ����ϰ� long�� %ld�� ���, long long�� %lld�� ���
	printf("%d %d %d %ld %lld\n", num1, num2, num3, num4, num5);
	// -128 -32768 -2147483648 -2147483648 -9223372036854775808  MIN
	//  127  32767  2147483647  2147483647  9223372036854775807  MAX
	return 0;
}
#include <stdio.h>
int main(void) {

	int num = 5;
	int i, j, k, s;
	for (i = 0; i < num; i++) {
		for (j = num - 1; j > i; j--) printf(" ");
		for (k = 0; k < i * 2 + 1; k++)printf("*");
		printf("\n");
	}
	s = !k ? 100 : 200;
	printf("%d", s);
	return 0;

#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(void) {
	for (int i = 0; i < 50; i++)
	cout << rand()<< endl;
}
// ����ü
#include <iostream>
using namespace std;
struct {
	int num1 = 100;
	char num2 = 50;
	double num3 = 3.4; 
} number;
int main(void) {

	printf("%d %d %lf\n", number.num1, number.num2,number.num3);
}
// ������
#include<stdio.h>
void print(int number) {
	int i;
	for (i = 1; i <= number; i++)printf("%d", i);
	printf("\n");
}
int main(void)
{
	print(3);
	print(5);
	print(4);
	print(7);
	print(10);
}

#include<stdio.h>
void jaegob(int s) {
	s=s*s;
	printf("%d\n", s);
}
int main(void) {
	int s;
	printf("���ϴ� ����");
	scanf("%d", &s);
	jaegob(s);
	
	return 0;
}

#include<stdio.h>

void ggd(int s) {

	printf("%d��\n", s);
	for (int i = 2; i <= 9; i++) {
		printf("%d x %d = %d\n", s, i, s*i);
	}
}

void sum(int a, int b) {
	printf("%d + %d = %d\n", a, b, a + b);
}
void subtract(int a, int b) {
	printf("%d - %d = %d\n", a, b, a - b);
}
void multiply(int a, int b) {
	printf("%d * %d = %d\n", a, b, a * b);
}
void nanoogi(int a, int b) {
	printf("%d / %d = %d \n", a, b, a / b);
}
int main(void) {
	int a = 0;
	int b = 0;
	int sign = 0;
	re:
	printf("number 1 : ");
	scanf("%d\n", &a);

	printf("number 2 : ");
	scanf("%d\n", &b);

	printf(" � ������ �Ͻ�? (1 = +,2 = -.3 = *.4 = /");
	scanf("%d \n", &sign); 
	if (sign == 1){
		sum(a, b);

	}

	else if (sign == 2) {

		subtract(a, b);

	}
	else if (sign == 3) {

		multiply(a, b);

	}
	else{

		nanoogi(a,b);

	}
	goto re;
}

// struct ,typedef ����
#include<iostream>
typedef unsigned int ui; 
using namespace std;

struct Car {
	int num;
	double gas; 
};
int main(void)
{
	Car car1;
	ui i = 100;
	cout << "���� ��ȣ�� �Է��Ͻÿ�\n";
	cin >> car1.n;

	cout << "���ᷮ�� �Է�" << endl;
	cin >> car1.gas;

	cout << "������ȣ��" << car1.n <<" "<< "���ᷮ��" << car1.gas << "\n" <<i<< endl;
}

#include<iostream>
using namespace std;

struct Car {
	int n;
	double gas;
};

void Show(Car*pC);

int main() {

	Car car1;

	cout << "í����ȣ�� �Է�\n";
	cin >> car1.n;
	cout << "���ᷮ�� �Է�\n";
	cin >> car1.gas;

	Show(&car1);
	return 0; 
}
void Show(Car* pC) {

	cout << "������ȣ��" << pC-> gas << " " << "���ᷮ��" << pC->n << endl;

}
// ����
#include <iostream>

using namespace std;

int main() {

	// ��ǻ�ʹ� 0�� ������ ��� ���ڴ� 1�� ó�� 
	bool a = true;

	cout << "a= " << a << endl; // 1 
	a = false;
	cout << "a= " << a << endl; // 0
	a = -1;
	cout << "a= " << a << endl; // 1 
	a = 0;
	cout << "a= " << a << endl; // 0

	return 0;

}

#include<iostream>
using namespace std;
#define rr	return 
int main(void) {
	int i;

	cout << "�Է� : ";
	cin >> i;
	if (i == 5) {
		cout << "5�� �Է�" << endl;
	}
	else {
		cout << "5�� �ƴ�" << endl;
	}
	rr 0; 

}  
// for�� ���� 
#include<stdio.h>

int main(void) {
	int i=0, k=0;
	int sum = 0;
	printf("�� �Է� : \n");
	scanf("%d", &i);
	for (k = 1; k <= i; k++) {
		sum+=k;
	}
	printf("%d\n", sum);
}
*/

#include <stdio.h>

void main()
{
	int i, j, k;
	int f = 0;

	printf("�Է�");
	scanf("%d", &f);
	/////////////////////////////  �Ƕ�̵� ��� 
	for (i = 0; i < f; i++) {
		for (j = f - 1; j > i; j--) {
			printf(" ");
		}
		for (k = 0; k < i * 2 + 1; k++) {
			printf("*");
		}
		printf("\n");
	} 
	printf("\n\n");
	//////////////////////////////// ���� ��ܽ�
	for (i = 0; i < f; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	///////////////���� ��ܽ�
	for (i = 1; i <= f; i++) {
		for (j = f; j > i; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	////////////////////// ���簢��
	for (i = 0; i < 2; i++) {
		for (j = 0; j < f; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	///////////////////////���� ��� �ٸ� ���
	for (i = 0; i < f; i++)
	{
		for (j = 0; j < f; j++) 
		{
			if (j <= i) printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	//////////////////// �밢������ �� ����ϱ� 
	for (i = 0; i < f; i++) {
		for (j = 0; j < f; j++) {
			if (i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n\n");
	////////////////////////////(1)*(1+2)*(1+2+3) ....  n �� ���ϱ� 
	int sum = 0;
	for (i = 1; i <= f; i++) {
		for (j = 1; j <= i; j++) {
			sum += j;
		}
	}
	printf("%d", sum);
}