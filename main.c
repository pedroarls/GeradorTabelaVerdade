#include "binaryGenerator.h"

int main(){
	PointerNode root;
	int numBits = 16;
	createTree(&root);
	binaryGenerator(numBits,&root);
	print(numBits,root);
}
