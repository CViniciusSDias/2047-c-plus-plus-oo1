#include "Conta.hpp"
#include <iostream>

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular)
{
    this->numero = numero;
    this->nomeTitular = nomeTitular;
    this->cpfTitular = cpfTitular;
    this->saldo = 0;
}

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

float Conta::recuperaSaldo() const
{
    return saldo;
}

void Conta::definirNomeTitular(std::string nome)
{
    nomeTitular = nome;
}