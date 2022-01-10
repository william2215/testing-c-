#include <stdio.h>
using namespace std;
#include <iostream>
#include <string>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <fstream>
#include <algorithm>

int obtenerSimboloNumerico(char simbolo){

	switch (simbolo) {
		case 'A':
			return 10;
		case 'B':
			return 11;
		case 'C':
			return 12;
		case 'D':
			return 13;
		case 'E':
			return 14;
		case 'F':
			return 15;
		default:
			string s;
			s.assign(1, simbolo);
			return stoi(s);
	}
}
	

int main(int argc, char *argv[]){

	string hex = "A123";
	
	int* num = new int[4];	
	int i = 0;

	reverse(hex.begin(), hex.end());

	for (char simbolo : hex) {
		num[i] = obtenerSimboloNumerico(simbolo);
		i++;
	}
	
	int resultadoDecimal = 0;

	for(int j = 0; j <= i; j++){
		resultadoDecimal = resultadoDecimal + num[j] * pow(16, j);
	}

	cout << "El resultado decimal es: " << resultadoDecimal << endl;

}
