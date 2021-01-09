#pragma once
#include "Funcionario.hpp"

class Gerente final : public Funcionario
{
public:
    Gerente(Cpf cpf, std::string nome, float salario);
    float bonificacao() const;
};

