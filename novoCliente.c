#include "lib.h"

Cliente novoCliente(){
    Cliente aux;
    printf("Digite o nome: ");
    scanf("\n%[^\n]s",aux.nome);
    setbuf(stdin,NULL);
    printf("Digite o sobrenome: ");
    scanf("\n%[^\n]s",aux.sobrenome);
    setbuf(stdin,NULL);
    printf("Digite a idade: ");
    scanf("%d",&aux.idade);
    printf("Digite o email: ");
    scanf("%s",aux.email);
    setbuf(stdin,NULL);
    return aux;
}

