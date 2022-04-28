#include "lib.h"

void deslocaVetCliente(Cliente vetClientes[], int numCadastrados, int inicioDeslocamento){
    int i;
    for(i=numCadastrados;i>inicioDeslocamento;i--){
            vetClientes[i]=vetClientes[i-1];
    }
}

