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

//test

int main(int argc, char *argv[]){
	string texto = "te amo michi hermosa";

	for(int i = texto.length(); i > -1; i--){
		cout << texto[i];
	}

	cout << endl;

	return 0;
}
