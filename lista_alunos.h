//Data: 26/11/18
//Definição da lista e prototipação de funções
#include <no.h>
#include <bibliotecas.h>

typedef struct ls_alunos_st
{
	no* cabeca;
} ls_alunos;

//Prototipação
alunos* cria_lista_alunos();
void cadastra_aluno(alunos*);
no* busca_aluno(alunos*, char);
void cadastra_com_arquivo(alunos*, char);
void aprovados(alunos*);
void reprovados(alunos*);
