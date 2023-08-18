#include <stdio.h>

int main(){

   /*Passo1 - alocar endereco de memoria para armazenamento de informacoes*/

   char nome[50];
   int idade;
   char matricula[16];
   char endereco[100];
   char curso[50];
   int periodo;
   char disciplinas[50];
   float mensalidade;

   /*passo2 - receber as informacoes e armazena-las nos enderecos de memoria, ou seja, nas variaveis*/

   printf("___________________________");
   printf("cadatro de aluno");
   printf("___________________________");

   printf("\n Nome: ");
   fgets(nome, 50, stdin);
   fflush(stdin);
   
   printf("\n idade: ");
   scanf("%d",&idade);
   fflush(stdin);

   printf("\n matricula: ");
   fgets(matricula, 16, stdin);
   fflush(stdin);
   
   printf("\n endereco; ");
   fgets(endereco,100, stdin);
   fflush(stdin);

   printf("\n curso: ");
   fgets(curso, 50, stdin);
   fflush(stdin);

   printf("\n periodo; ");
   scanf("%d",&periodo);
   fflush(stdin);

   printf("disciplina; ");
   fgets(disciplinas,50, stdin);
   fflush(stdin);

   printf("mensalidade; ");
   scanf("%f",&mensalidade );
   fflush(stdin);

   /*Passo 3 - aprensentar dados, ou seja, recuperacao das informacoes armazenadas nos enderecos de memoria*/
   printf("___________________________");
   printf("Dados de cadastro");
   printf("___________________________");

   printf("\n nome; %s", nome);
   printf("\n idade; %d", idade);
   printf("\n matricula; %s", matricula);
   printf("\n endereco; %s", endereco);
   printf("\n curso; %s", curso);
   printf("\n periodo ; %i", periodo);
   printf("\n disciplina; %s", disciplinas);
   printf("\n mensalidade; %f", mensalidade);

    return 0;
}