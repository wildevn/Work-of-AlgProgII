//Date:21/11/2018
//Contain the interface of student menagement system 
#include "bibliotecas.h"

char interface(void)
{
    char option;

    printf("Bem-vindo ao sistema de gerenciamento de aluno ALPHA!\n");
    printf("\n\n");
    printf("Qual das seguintes opcoes voce deseja realizar ?\n\n");
    printf("Cadastrar novo aluno.(Pressione C)\n");
    printf("Buscar Aluno.(Pressione B)\n");
    printf("Ler arquivo com listagem de alunos.(Pressione L)\n");
    printf("Gerar arquivo com dados dos alunos aprovados.(Pressione A)\n");
    printf("Gerar arquivo com dados dos alunos reprovados(Pressione R)\n");
    printf("Fechar programa.(Pressione F)\n");
    option=getchar();
    
    return option;
}
