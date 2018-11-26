//Data: 26/11/18
//No para a lista de alunos
#include <aluno.h>

typedef struct no_st
{
	aluno* al;
	struct no_st* ant;
	struct no_st* prox;
} no;
