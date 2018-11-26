//Data: 26/11/18
//Estrutura de cada aluno
#include <bibliotecas.h>
#define SIZE 20

struct aluno_st
{
	char Nome[SIZE];
	int RA;
	float P1, P2;
	float Trab;
	float PO;
};

typedef struct aluno_st aluno;