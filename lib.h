#ifndef _LIB_H_
#define _LIB_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <limits.h>

typedef struct cliente{
    char nome[20];
    char sobrenome[40];
    int idade;
    char telefone[20];
    char email[50];
} Cliente;

int insereNovoCliente(Cliente vetClientes[], int numCadastrados, Cliente novoCliente);
Cliente novoCliente();
int verificaExistenciaCadastro(Cliente vetClientes[], int numCadastrados, char numTelefone[]);
void deslocaVetCliente(Cliente vetClientes[], int numCadastrados, int inicioDeslocamento);
void printClientes(Cliente vetClientes[], int numCadastrados);

#endif // _LIB_H_

