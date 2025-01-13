/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일                    */
/*  작성자 : 배용호                    날짜 : 2023년 4월 16일        */
/*                                                                 */
/* 문제 정의 : 소스를 헤더 파일과 cpp 파일로 분리하여 재작성하라.      */
/*                - - - - - - -                                   */
/***************************************************************/
#include<iostream> //헤더파일 iostream 포함
using namespace std; // std생략
#include "Calculator.h" // Calculator.h 헤더파일 포함
#include "Adder.h" // Adder.h 헤더파일 포함

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>"; //문자열출력
	int a, b; // int형 변수 두 개 선언
	cin >> a >> b; // 정수 두 개 입력
	Adder adder(a, b); // 덧셈기 생성
	cout << adder.process(); // 덧셈 계산
}