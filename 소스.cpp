
일자 : 22.12.5 ~ 12.9
과정 : SoEn, C문법 1장 ~ 3장

<이론 test>

1 C, C++, Java의 특징 및 차이를 기술하시오.
C는 절자치향언어이고 , C++, JAVA는 객체 지향언어이고, 
처리속도가 C,C++이 JAVA에 비해 빠르다

2 컴파일러의 의미 및 처리과정을 설명하시오.
의미는 프로그래밍언어를 쓰여 있는 문서를 컴퓨터가 이해할 수 있는 언어로 바꾸는것이다

과정 : 전처리 과정 - 컴파일 과정 - 어셈블리 과정 - 링킹 과정

3 변수의 작명법에 대하여 기술하시오.

작명법 :  자료형 배열명[배열 크기]

4 배열과 포인터의 개념 및 차이점에 대하여 설명하시오.
(1) 개념
배열 : 동일한 타입을 가지는 자료들의 집합
포인터 : 변수의 값이 아닌 변수가 저장되어 있는 메모리를 기억하는 타입
(2) 차이점 
1) 데이터 저장공간
배열은 데이터를 저장하고 포인터는 데이터를 저장한 변수 위치를 저장한다 .

2. 증감 연산자 사용 여부 
포인터는 변수여서  ptr++ 이런걸 사용할수 있는데 배열은 상수이므로 ptr ++ 를 사용 할수 없다 

5 2차원 배열에 접근하는 방법을 기술하시오.
(추가문제) 1차원 배열을 2차원 배열처럼 사용할 수 있는 조건 및 방법에 대하여 설명하시오.

5번은 모르겠습니다 

6 loop문의 종류 및 각 형태 별 탈출방법, 무한루프가 되는 조건에 대하여 설명하시오.

종류 : for, while, do ~ while 
형태: for(초기화 식; 조건식; 증감식){}, while(조건식){}, do~while(조건식); 
탈출 방법 : for, while, do~while 탈출방법은 continue, break 이다
무한루프 되는 조건 : for문은 초기화식, 조건식, 증감식에 아무것도 쓰지 않으면 무한루프에 빠지고, 
while, do~while는 조건식부분에 조건식을 쓰지 않으면 무한루프에 빠진다.

<coading test>

1 int, double, long, short 형 변수 선언 후 data size를 출력하시오.
코드)
#include <stdio.h>
int main(void) {
	
	int i=0;
	double db = 0;
	long lg = 0;
	short st = 0;
	printf("int = %d\n", sizeof(i));
	printf("double = %d\n", sizeof(db));
	printf("long = %d\n", sizeof(lg));
	printf("short = %d\n", sizeof(st));
	return 0; 
}
==================================================================
2 숫자 2개를 입력받아, 숫자 및 사칙연산 결과를 출력하시오.
  예) Input 2 num : 2 3
     2 + 3 = 5
     2 - 3 = -1
     2 * 3 = 6
     2 / 3 = 0.666
   조건: 나눗셈은 소수점 3자리까지만 표시하시오

코드)
#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;

	printf("숫자 2개 입력 : ");
	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %.3f \n",num1, num2, (float)num1 / (float)num2);
	

	
}
==================================================================
3 알파벳을 입력받아 ASCII 숫자로 출력하시오.
  또한, 반대로 숫자를 입력받아 ASCII 문자로 출력하시오.
  (if문, switch-case 문 등 불필요)
  예) a 입력 시, ascii 번호인 97 출력
     97 입력 시, 문자 a 출력

코드)
#include<stdio.h>
int main(void) {

	char a;
	int b;
	printf("알파벳을 입력하시오 : \n");
	scanf("%c", &a);
	scanf("%d", &b);

	printf("알파벳 %c 를 입력 받아 아스크코드 숫자로 %d 출력 \n", a,a);
	printf("숫자 %d를 입력받아 아스키코드 문자 %c 출력 \n", b,b);

}
==================================================================
4 동서남북에 대한 열거형 변수를 선언 후 숫자패드의 키를 입력받아 다음과 같이 출력하시오
  (if문, switch-case 문 등 사용)
 1 입력 시 = 동
 2 입력 시 = 서
 3 입력 시 = 남
 4 입력 시 = 북

코드)
#include<stdio.h>

enum Dir{ east = 1 , west, south, north } ;

int main(void) {
	
	int dir;
	printf("방향 입력 : \n");
	scanf("%d", &dir);

	switch (dir) {

	case 1: printf("동쪽입니다 \n");
	case 2: printf("서쪽입니다 \n");
	case 3: printf("남쪽입니다 \n");
	case 4: printf("북쪽입니다 \n");

	}
	return 0;
}

==================================================================
5 구구단을 입력받은 단수 까지 모두 출력하시오. (for 혹은 while 이용, 간격 동일하게)
  예) 4 입력 시
     2x1= 2  3x1= 3  4x1= 4
     2x2= 4  3x2= 6  4x2= 8
     2x3= 6  3x3= 9  4x2=12
      ...     ...     ...
     2x9=18  3x9=27  4x9=36
코드)
#include <stdio.h>
int main(void) {
	int value, i = 2;
	printf("수를 입력하시오 : \n");
	scanf("%d", &value);
	for (int i = 2; i <= value; i++){
		printf("\n %3d단\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
		i++;
	}
	return 0; 
}
==================================================================
6 층수를 입력받아, * 문자를 이용하여 삼각형을 출력하시오. (for 혹은 while 이용)
  예)
               *
              ***
             *****
            *******
           *********
          ***********
         *************
        ***************
       *****************
      *******************
     *********************
    ***********************
   *************************
  ***************************
 *****************************
코드)
#include <stdio.h>

int main(void) {

	int value, i = 0;
	printf("수를 입력하시오 : \n");
	scanf("%d", &value);

	while(i<value){
		for (int j = 0; j < value; j++) {
			if(i<j) printf(" ");
		}
		for (int k = 0; k < i*2+1; k++) {
			printf("*");
		}
		printf("\n");
		i++;
	}	
}
==================================================================
