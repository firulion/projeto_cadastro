#include "lib.h"

void printClientes(Cliente vetClientes[], int numCadastrados){
    int i;
    for(i=0;i<numCadastrados;i++){
        printf(" Cliente %d\n Nome: %s %s   idade: %d\n\n",(i+1),vetClientes[i].nome,vetClientes[i].sobrenome,vetClientes[i].idade);
    }
}

