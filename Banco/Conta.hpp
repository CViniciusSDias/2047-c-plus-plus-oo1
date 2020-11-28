#pragma once
#include <string>

class Conta
{
private:
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo = 0;

public:
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperaSaldo() const;
    void definirNomeTitular(std::string nome);
};
