#include<stdio.h>
#include<stdlib.h>
#include "binaryGenerator.h"

int main(){
	PointerNode root;
	int numBits = 5;
	createTree(&root);
	binaryGenerator(numBits,&root);
	print(numBits,root);
}
