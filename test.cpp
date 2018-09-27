//============================================================================
// Name        : test.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>

float minimum(float a,float b,float c);
bool if_vowel(char c);
float mediam(float a, float b, float c);
void size();

int main() {
	float min = minimum(23634,234,124.23);
	std::cout<<min<<std::endl;
	char c;
	std::cin>> c ;
	if_vowel(c);
	std::cout<<mediam(23,124,2);
    size();

	return 0;
}
float minimum(float a,float b,float c){
     float min = 0;
     if( a < b ){
    	 min = a;
    	 if( c < a ){
    		 min = c;
    	 }
     }
     else{
    	min = b;
        if( c < b){
        	min = c;
        }
     }
    return min;
}

bool if_vowel(char c){
	if(c == 'A' || c == 'a' || c == 'E' || c == 'e' ||	c == 'I'||
			c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
		std::cout<<c<<" is a vowel"<<std::endl;
		return true;
	}
	else{
		std::cout<<c<<" is not a vowel"<<std::endl;
		return false;
	}
}

float mediam(float a, float b, float c){
	float mid = 0;
	if(a > b){
		if(b > c){
			mid = b;
		}
		else{
			mid = a;
			if(a > c){
				mid = c;
			}
		}
	}
	else{
		if(a > c){
			mid = a;
		}
		else{
			mid = b;
			if(b > c){
				mid = c;
			}
		}
	}
	return mid;
}

void size(){
	        char a;
			int b;
			double c;
			bool d;

			std::cout<<"Size of character is"<<sizeof(a)<<std::endl;
			std::cout<<"Size of integer is"<<sizeof(b)<<std::endl;
			std::cout<<"Size of double is"<<sizeof(c)<<std::endl;
			std::cout<<"Size of Boolean is"<<sizeof(d)<<std::endl;
			std::cout<<"Size of void is"<<sizeof(void)<<std::endl;

}

int root_number(double a,double b, double c){
	if(b*b-4*a*c > 0){
		return 2;
	}
	else{
		if(b*b-4*a*c == 0)
		return 1;
	}
   return 0;
}

void root(double a,double b,double c){
	double r1 = 0;
	double r2 = 0;
	if(b*b-4*a*c > 0){
		r1 = -b/2/a+std::sqrt(b*b-4*a*c)/2/a;
		r2 = -b/2/a-std::sqrt(b*b-4*a*c)/2/a;
		std::cout<< r1 <<','<< r2<<std::endl;
		}
	else{
		if(b*b-4*a*c == 0){
		r1 = -b/2/a;
		std::cout<<r1<<std::endl;
		}
		else{
			double re = -b/2/a;
			double ima= std::sqrt(4*a*c-b*b)/2/a;
			std::cout<<re<<'+'<<ima<<'j'<<','<<re<<'-'<<ima<<'j'<<std::endl;
		}
	}
}

















