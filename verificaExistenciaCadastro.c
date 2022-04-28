#include "lib.h"

int verificaExistenciaCadastro(Cliente vetClientes[], int numCadastrados, char numTelefone[]){
    int i;
    for(i=0;i<numCadastrados;i++){
        if(strcmp(numTelefone,vetClientes[i].telefone)==0){
            return i;
        }
    }
    return (-1);
}

