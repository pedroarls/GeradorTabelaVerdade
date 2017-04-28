#ifndef BINARY_GENERATOR_H
#define BINARY_GENERATOR_H

typedef struct TypeNode* PointerNode;
typedef struct TypeNode{
	short bit;
	PointerNode left, right;
}Node;


void createTree(PointerNode*  root);
void insert(short x, PointerNode* node);
void binaryGenerator(int numBits,PointerNode* node);
void print(int numBits,PointerNode root);
void printResult(int level,int* binaryNumber, int numBits, PointerNode node);

#endif
