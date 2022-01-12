#include <stdio.h>
#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
#include <string>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <fstream>
using namespace std;


int binarySearchResult(int* array, int x, int left, int right)
{
	if (left > right)
	{
		return false;
	}	

	int mid = (left + right) / 2;

	if (array[mid] == x) {
		return mid;
	}
	else if(x < array[mid])
	{
		//cout << "EL valor mid es :  " << array[mid] << endl;
		return binarySearchResult(array, x, left, mid - 1);
	}
	else
	{
		//cout << "EL valor mid es :  " <<  array[mid] << endl;
		return binarySearchResult(array, x, mid + 1, right);
	}
}

int binarySearch(int* array, int x)
{
	return binarySearchResult(array, x, 0, 14999);
}

int main(){

	int size = 15000;

	int* array = new int[size];

	for(int i = 0; i < size; i++)
	{
		if (i == 899) {
			array[i] = 14000;
		}else{
			array[i] = i + log(i+1);
		}
	}

	int res = binarySearch(array, 40);

	
	for (int j = 0; j < 50; j++) {
		cout << "Index es " << j << " " <<  array[j] << endl;
	}


	cout << "el resultado es : "  << res << endl;

	return 0;
}

