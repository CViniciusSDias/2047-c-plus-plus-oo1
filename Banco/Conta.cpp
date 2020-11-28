#include "Conta.hpp"
#include <iostream>

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular):
    numero(numero), 
    nomeTitular(nomeTitular), 
    cpfTitular(cpfTitular),
    saldo(0)
{
    verificaTamanhoDoNome();
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

int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}

void Conta::verificaTamanhoDoNome()
{
    if (nomeTitular.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}