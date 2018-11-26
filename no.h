//Data: 26/11/18
//Nó para a lista de alunos

#include <aluno.h>

struct no_st {

	aluno* al;
	struct no_st* ant;
	struct no_st* prox;

};

typedef struct no_st no;