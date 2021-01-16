#include "Gerente.hpp"

Gerente::Gerente(Cpf cpf, std::string nome, float salario, short int diaDoPagamento, std::string senha)
    : Funcionario(cpf, nome, salario, diaDoPagamento), Autenticavel(senha)
{
}

float Gerente::bonificacao() const
{
    return recuperaSalario() * 0.5;
}
