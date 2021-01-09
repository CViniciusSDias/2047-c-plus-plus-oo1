#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, Titular titular, short int tipoConta):
    numero(numero), 
    titular(titular),
    saldo(0),
    tipoConta(tipoConta)
{
    numeroDeContas++;
}

Conta::~Conta()
{
    numeroDeContas--;
}

void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }
    
    float taxa;
    if (tipoConta == 1) {
        taxa = 0.05;
    } else if (tipoConta == 2) {
        taxa = 0.03;
    }
    float tarifaDeSaque = valorASacar * taxa;
    float valorDoSaque = valorASacar + tarifaDeSaque;

    if (valorDoSaque > saldo) {
        std::cout << "Saldo insuficiente" << std::endl;
        return;
    }

    saldo -= valorDoSaque;
}

void Conta::depositar(float valorADepositar)
{
    if (valorADepositar < 0) {
        std::cout << "Não pode sacar valor negativo" << std::endl;
        return;
    }

    saldo += valorADepositar;
}

float Conta::recuperaSaldo() const
{
    return saldo;
}

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}