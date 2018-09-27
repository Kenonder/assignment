//============================================================================
// Name        : ggg.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
int main() {

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

double arithmetic_mean(double a1, double a2, double a3, double a4, double a5 ){
	return (a1 +a2 +a3 +a4 +a5) / 5;
}

double geometric_mean(double a1, double a2, double a3, double a4, double a5){

	return std::pow( a1 * a2 * a3 * a4 * a5 ,1/5);
}

double harmonic_mean(double a1, double a2, double a3, double a4, double a5){
	return 5 / (1/a1 + 1/a2 + 1/a3 + 1/ a4 + 1/a5);
}

double maximum_mean(double a1, double a2, double a3, double a4, double a5){
	double max = 0;
	double ari = arithmetic_mean(a1,a2,a3,a4,a5);
	double geo = geometric_mean(a1,a2,a3,a4,a5);
	double har = harmonic_mean(a1,a2,a3,a4,a5);
	if ( ari > geo){
		max = ari;
		if( har > ari){
			max = har;
		}

	}
	else{
		max = geo;
		if (har > geo){
			max = har;
		}
	}

	return max;
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














