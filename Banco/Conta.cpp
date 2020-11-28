#include "Conta.hpp"
#include <iostream>

void Conta::sacar(float valorASacar)
{
    if (valorASacar < 0) {
            std::cout << "Não pode sacar valor negativo" << std::endl;
            return;
        }
        
        if (valorASacar > saldo) {
            std::cout << "Saldo insuficiente" << std::endl;
            return;
        }
        
        saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
        if (valorADepositar < 0) {
            std::cout << "Não pode sacar valor negativo" << std::endl;
            return;
        }

        saldo += valorADepositar;
}