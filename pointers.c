#include<stdio.h>

struct Matrix{
	int m,n;
	int * p;
};

void test1(){
	
	puts("--------------------");
	puts("TEST 1");
	puts("--------------------");

	struct Matrix matrix;
	
	matrix.n=111;
	
	int got=*(((int*)&matrix)+1);
	printf("%d\n",got);

	puts("--------------------");
}

struct ComplexData
{
	int steps;
	float distance;
	char* name;
};

void test2(){
	
	puts("--------------------");
	puts("TEST 2");
	puts("--------------------");

	struct ComplexData structure;

	structure.steps = 100;
	structure.distance = 55.5;
	structure.name = (char*)"NAME";

	int* psteps = (int*)&structure;
	float* pdistance = (float*)(psteps+1);
	char** pname = (char**)(pdistance+1);

	printf("int %d\n", *psteps );
	printf("float %g\n", *pdistance );
	printf("char* %s\n", *pname );

	puts("--------------------");
}

int main(){
	test1();
	puts("===========================");
	test2();
}
