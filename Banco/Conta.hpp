#pragma once
#include <string>

struct Conta
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;
    
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
};
