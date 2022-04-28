#include "lib.h"

int main(){
    int op, numCadastrados=0;
    Cliente C[100];
    Cliente novoCadastro;
    char strTelefone[20];
    int registro;
    int i;

    for(i=0;i<100;i++){
        C[i].idade=INT_MAX;
    }

    do{
        printf("----- LISTA DE CADASTROS DE CLIENTES -----\n\n");
        printf("2) Mostrar clientes cadastrados\n");
        printf("1) Cadastrar novo cliente\n");
        printf("0) Finalizar cadastros\n");
        scanf("%d",&op);
        switch(op){

        case 2:
            printClientes(C,numCadastrados);
            break;
        case 1:
            printf("Digite o numero de telefone: ");
            scanf("%s",strTelefone);
            registro=verificaExistenciaCadastro(C,numCadastrados,strTelefone);
            if(registro==(-1)){
                novoCadastro=novoCliente();
                strcpy(novoCadastro.telefone,strTelefone);
                numCadastrados=insereNovoCliente(C,numCadastrados,novoCadastro);
            }
            else{
                printf("Cliente ja cadastrado\n");
                printf("Nome: %s %s Telefone: %s Registro: %d \n",C[registro].nome,C[registro].sobrenome,strTelefone,registro);
            }
        break;
        case 0:
            printf("\n________________________________________\nFechando programa...\n\n");
            printf("3...\n");
            Sleep(500);
            printf("2...\n");
            Sleep(500);
            printf("1...\n");
            Sleep(500);
            return 0;
        break;
        }
    }while(op!=0 || numCadastrados<100);

    return 0;
}
