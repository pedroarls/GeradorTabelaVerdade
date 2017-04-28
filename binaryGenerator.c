#include<stdio.h>
#include<stdlib.h>
#include "binaryGenerator.h"

void createTree(PointerNode* root){
	(*root)=(PointerNode)malloc(sizeof(Node));
}

void insert(short x, PointerNode* node){
	if((*node) == NULL){
		*node = (PointerNode)malloc(sizeof(Node));
		(*node)->bit=x;
		(*node)->left = NULL;
		(*node)->right = NULL;
		return;
	}
	
	if(x==0){
		insert(0,&(*node)->left);
		return;
	}

	if(x==1){
		insert(1,&(*node)->left);
		return;
	}
}

void binaryGenerator(int numBits,PointerNode* node){
	if((*node == NULL)||numBits<=0){
		return;
	}
	else{
		insert(0,&(*node)->left);
		insert(1,&(*node)->right);
		binaryGenerator(numBits-1,&(*node)->left);
		binaryGenerator(numBits-1,&(*node)->right);
		return;
	}
}

void print(int numBits,PointerNode root){
	int binaryNumber[numBits];
	int level = 0;
	printResult(level,binaryNumber,numBits, root);
}

void printResult(int level,int* binaryNumber,int numBits,PointerNode node){
	int i;
	if(node==NULL){
		return;
	}
	
	if(level>0 && level<=numBits){
		binaryNumber[level-1] = node->bit;
	}

	if(level==numBits){
		for(i=0;i<numBits;i++){
			printf("%d",binaryNumber[i]);
		}
		printf("\n");
		
	}
	
	printResult(level+1,binaryNumber,numBits,node->left);
	printResult(level+1,binaryNumber,numBits,node->right);
}
