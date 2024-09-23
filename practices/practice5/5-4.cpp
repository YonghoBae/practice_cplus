/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일                    */
/*  작성자 : 배용호                    날짜 : 2023년 4월 16일        */
/*                                                                 */
/* 문제 정의 : 소스를 헤더 파일과 cpp 파일로 분리하여 재작성하라.      */
/*                - - - - - - -                                   */
/***************************************************************/
#include<iostream> //헤더파일 iostream 포함
using namespace std; // std생략

#include "Adder.h" //Adder.h 헤더파일 포함
#include "Calculator.h" //Calculator.h 헤더파일 포함


int main() {
	Calculator calc; // calc 객체 생성
	calc.run(); // 계산기 시작
}