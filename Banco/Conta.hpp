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
    
protected:
    float saldo;

public:
    Conta(std::string numero, Titular titular);
    virtual ~Conta();
    void sacar(float valorASacar);
    void depositar(float valorADepositar);
    void operator+=(float valorADepositar);
    float recuperaSaldo() const;
    virtual float taxaDeSaque() const = 0;
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
};
