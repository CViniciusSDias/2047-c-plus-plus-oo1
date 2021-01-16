#pragma once
#include "Funcionario.hpp"
#include "Autenticavel.hpp"

class Gerente final : public Funcionario, public Autenticavel
{
public:
    Gerente(Cpf cpf, std::string nome, float salario, short int diaDoPagamento, std::string senha);
    float bonificacao() const;
};

