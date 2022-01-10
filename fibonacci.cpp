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


int fibonacci(int n){

	if(n == 0){
		return 0;
	}
	
	if(n == 1){
		return 1;
	}

	return fibonacci(n - 2) + fibonacci(n - 1);
}

int main(int argc, char *argv[]){

	int result = fibonacci(10);
	cout << result << endl;
	return 0;
}

