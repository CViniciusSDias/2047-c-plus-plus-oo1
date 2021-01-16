#pragma once
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include <string>

class Funcionario : public Pessoa
{
private:
    float salario;
    // 0 = Domingo, 1 = segunda, etc.
    short int diaDoPagamento;

public:
    Funcionario(Cpf cpf, std::string nome, float salario, short int diaDoPagamento);
    std::string recuperaNome() const;
    float recuperaSalario() const;
    virtual float bonificacao() const = 0;
};
