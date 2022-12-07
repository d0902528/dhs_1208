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

	rawTime = time(NULL);                // 현재 시간을 받음
	pTimeInfo = localtime(&rawTime);    // 현재 시간을 이쁘게 struct tm에 넣음

	printf("time_t : %lld\n", rawTime);

	int year = pTimeInfo->tm_year + 1900;    //연도에는 1900 더해줌
	int month = pTimeInfo->tm_mon + 1;    // 월에는 1 더해줌
	int day = pTimeInfo->tm_mday;
	int hour = pTimeInfo->tm_hour;
	int min = pTimeInfo->tm_min;
	int sec = pTimeInfo->tm_sec;
	printf("timeInfo : %d년 %d월 %d일 %d시 %d분 %d초\n", year, month, day, hour, min, sec);

	return 0;
}
// 현재시간 구하는 프로그램
// 예제1 : time_t와 짝을 이루는 ctime 함수
// 예제2 : struct tm과 짝을 이루는 asctime 함수

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main(void) {

	
	time_t t1;
	time(&t1);

	char* str1 = ctime(&t1);
	printf("ctime의 결과 : %s\n", str1);

	struct tm* pTm;
	time_t t2;

	t2 = time(NULL);
	pTm = localtime(&t2);

	char* str2 = asctime(pTm);
	printf("asctime의 결과 : %s\n", str2);

	return 0;
}
 //오버플로우 

#include<stdio.h>
#define rr	return
int main(void) {
	char num1 = 128; // char에 저장할수 있는 최댓값 128
	unsigned char num2 = 256; // unsigned char에 저장할수 있는 최댓값 255
	//둘다 저장할수 있는 범위를 넘어서 최솟값부터 시작함
	printf("%d %u %u \n", num1, num2, num3);
	rr 0;
}
//char 이외에도 short, int, long, long long 등도 저장할 수 있는 범위를 넘어서면 최솟값부터 다시 시작하게 됩니다.
//반대로 최솟값보다 작아지면 언더플로우(underflow)가 발생하여 최댓값부터 다시 시작
//short 32767 까지 저장할수 잇다 최대 32768까지 
 // 오버 플로우
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

// 크기 구하기 
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

//최대값, 최솟값 구하기
#include <stdio.h>
#include <limits.h>    // 자료형의 최댓값과 최솟값이 정의된 헤더 파일

int main()
{
	char num1 = CHAR_MAX +1 ;          // char의 최솟값
	short num2 = SHRT_MAX;         // short의 최솟값
	int num3 = INT_MAX;            // int의 최솟값
	long num4 = LONG_MAX;          // long의 최솟값
	long long num5 = LLONG_MAX;    // long long의 최솟값

	// char, short, int는 %d로 출력하고 long은 %ld로 출력, long long은 %lld로 출력
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
// 구조체
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
// 포인터
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
	printf("원하는 숫자");
	scanf("%d", &s);
	jaegob(s);
	
	return 0;
}

#include<stdio.h>

void ggd(int s) {

	printf("%d단\n", s);
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

	printf(" 어떤 연산을 하심? (1 = +,2 = -.3 = *.4 = /");
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

// struct ,typedef 선언
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
	cout << "차량 번호를 입력하시오\n";
	cin >> car1.n;

	cout << "연료량을 입력" << endl;
	cin >> car1.gas;

	cout << "차량번호는" << car1.n <<" "<< "연료량은" << car1.gas << "\n" <<i<< endl;
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

	cout << "챠량번호를 입력\n";
	cin >> car1.n;
	cout << "연료량를 입력\n";
	cin >> car1.gas;

	Show(&car1);
	return 0; 
}
void Show(Car* pC) {

	cout << "차량번호는" << pC-> gas << " " << "연료량은" << pC->n << endl;

}
// 논리형
#include <iostream>

using namespace std;

int main() {

	// 컴퓨터는 0을 제외한 모든 숫자는 1로 처리 
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

	cout << "입력 : ";
	cin >> i;
	if (i == 5) {
		cout << "5를 입력" << endl;
	}
	else {
		cout << "5가 아님" << endl;
	}
	rr 0; 

}  
// for문 문제 
#include<stdio.h>

int main(void) {
	int i=0, k=0;
	int sum = 0;
	printf("수 입력 : \n");
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

	printf("입력");
	scanf("%d", &f);
	/////////////////////////////  피라미드 출력 
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
	//////////////////////////////// 우측 계단식
	for (i = 0; i < f; i++) {
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	///////////////좌측 계단식
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
	////////////////////// 직사각형
	for (i = 0; i < 2; i++) {
		for (j = 0; j < f; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	///////////////////////우측 계단 다른 방식
	for (i = 0; i < f; i++)
	{
		for (j = 0; j < f; j++) 
		{
			if (j <= i) printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	//////////////////// 대각선으로 별 출력하기 
	for (i = 0; i < f; i++) {
		for (j = 0; j < f; j++) {
			if (i == j) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	printf("\n\n");
	////////////////////////////(1)*(1+2)*(1+2+3) ....  n 값 구하기 
	int sum = 0;
	for (i = 1; i <= f; i++) {
		for (j = 1; j <= i; j++) {
			sum += j;
		}
	}
	printf("%d", sum);
}