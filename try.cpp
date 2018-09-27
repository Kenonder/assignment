//============================================================================
// Name        : try.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
double addition(double a,double b);
double subtraction(double a, double b);
double division(double a,double b);
double multiplication(double a,double b);
double calculate(double operand1, char operation, double operand2);
int main() {

	return 0;
}

double addition(double a,double b){
	return a+b;
}

double subtraction(double a, double b){
	return a-b;
}

double division(double a,double b){
	return a / b;
}

double multiplication(double a,double b){
	return a*b;
}

double calculate(double operand1, char operation, double operand2){
	if( operation == '+'){
		return addition(operand1,operand2);
	}
	else{
		if( operation == '-'){
			return subtraction(operand1,operand2);
			}
		else{
				if( operation == '*'){
				return multiplication(operand1,operand2);
				}
					else{
						if( operation == '*'){
						return division(operand1,operand2);
						}
						else
						return 0;
					}
	}
}

=








