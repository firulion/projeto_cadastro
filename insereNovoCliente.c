#include "lib.h"

int insereNovoCliente(Cliente vetClientes[], int numCadastrados, Cliente novoCliente){
    int i;
    numCadastrados++;
    for(i=0;i<numCadastrados;i++){
        if(novoCliente.idade<vetClientes[i].idade){
            deslocaVetCliente(vetClientes,numCadastrados,i);
            vetClientes[i]=novoCliente;
        }
    }
    return numCadastrados;
}

