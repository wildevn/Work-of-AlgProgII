//Date:21/11/2018
//Contain the interface of student menagement system 
#include "bibliotecas.h"

char interface(void)
{
    char option;

    printf("Bem-vindo ao sistema de gerenciamento de aluno ALPHA!\n");
    printf("\n\n\n");
    printf("Qual das seguintes opcoes voce deseja realizar ?\n");
    printf("\nCadastrar novo aluno.(Pressione C)");
    printf("\nBuscar Aluno.(Pressione B)");
    printf("\nLer arquivo com listagem de alunos.(Pressione L)");
    printf("\nGerar arquivo com dados dos alunos aprovados.(Pressione A)");
    printf("\nGerar arquivo com dados dos alunos reprovados(Pressione R)");
    printf("\nFechar programa.(Pressione F)\n");
    option=getchar();
    
    return option;
}
