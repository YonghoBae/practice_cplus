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

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
} // 생성자 Adder(a,b) 구현, op1에 a로 초기화, op2에 b로 초기화
int Adder::process() {
	return op1 + op2;
} // 멤버함수 process 구현, op1+op2 리턴