#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <fstream>
using namespace std;


struct Node{
	int data;
	struct Node* left;
	struct Node* right;

	Node(int val){
		data = val;
		left = NULL;
		right = NULL;
	}
};

int main(){
	struct Node* root = new Node(1);
	
	root -> left = new Node(2);
	root -> right = new Node(3);

	root -> left -> left = new Node(4);

	int dato = root->left->left->data;
	
	printf("%d",dato);

	return 0;
}
