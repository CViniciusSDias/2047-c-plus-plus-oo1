#include "Funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(Cpf cpf, std::string nome, float salario, short int diaDoPagamento)
    : Pessoa(cpf, nome), salario(salario), diaDoPagamento(diaDoPagamento)
{
}

std::string Funcionario::recuperaNome() const
{
    return nome;
}

float Funcionario::recuperaSalario() const
{
    return salario;
}