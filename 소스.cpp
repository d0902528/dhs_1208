// 1. (int, double, long, short) data size 출력
include <stdio.h> 

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
// 2. 사칙연산(+,-,*,/) 결과를 출력
#include <stdio.h>
int main(void) {
	int num1 = 0;
	int num2 = 0;
	printf("숫자 2개 입력 : ");
	scanf("%d", &num1);
	scanf("%d", &num2);

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%3d / %3d = %.3f \n",num1, num2, (float)num1 / (float)num2);
	return 0;
}
// 3. ASCII 숫자, 문자 출력
#include <stdio.h>
int main(void) {

	char a; int b;
	printf("알파벳을 입력하시오 : \n");
	scanf("%c", &a);
	scanf("%d", &b);

	printf("알파벳 %c 를 입력 받아 아스크코드 숫자로 %d 출력 \n", a,a);
	printf("숫자 %d를 입력받아 아스키코드 문자 %c 출력 \n", b,b);
	return 0;

}
// 4. 동서남북 출력 
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
// 5. 구구단 출력
#include <stdio.h>
int main(void) {

	int value = 0;

	printf("수를 입력하시오 : \n");

	scanf("%d", &value);

	for (int i = 2; i <= value; i++){
		printf("\n %3d단\n", i);

		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}

	return 0; 
}
// 6. 삼각형 출력 문제 
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
	return 0; 
}

