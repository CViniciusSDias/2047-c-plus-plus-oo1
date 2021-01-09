#pragma once
#include <string>
#include "Titular.hpp"

class Conta
{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numero;
    Titular titular;
    float saldo;
    /** 1 = conta corrente e 2 = conta poupança */
    short int tipoConta;

public:
    Conta(std::string numero, Titular titular, short int tipoConta);
    ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    float recuperaSaldo() const;
};
