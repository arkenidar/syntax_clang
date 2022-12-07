#include<stdio.h>

struct Matrix{
	int m,n;
	int * p;
};

int main(){
	struct Matrix matrix;
	
	matrix.n=111;
	
	int got=*(((int*)&matrix)+1);
	printf("%d\n",got);
}
