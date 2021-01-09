#include "Caixa.hpp"

Caixa::Caixa(Cpf cpf, std::string nome, float salario): Funcionario(cpf, nome, salario)
{
}

float Caixa::bonificacao() const
{
    return recuperaSalario() * 0.1;
}

