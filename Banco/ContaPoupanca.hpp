#pragma once
#include "Conta.hpp"

class ContaPoupanca : public Conta
{
public:
    ContaPoupanca(std::string numero, Titular titular);
    void sacar(float valorASacar) override;
    ~ContaPoupanca();
};

