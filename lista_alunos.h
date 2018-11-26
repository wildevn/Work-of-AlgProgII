//Data: 26/11/18
//Definição da lista e prototipação de funções

#include <no.h>
#include <bibliotecas.h>

struct alunos_st
{
	no* cabeca;
};

typedef struct alunos_st alunos;

//Prototipação
alunos* cria_lista_alunos();
void cadastra_aluno(alunos*);
no* busca_aluno(alunos*, char);
void cadastra_com_arquivo(alunos*, char);
void aprovados(alunos*);
void reprovados(alunos*);