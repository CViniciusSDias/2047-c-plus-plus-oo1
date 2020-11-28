#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
public:
    Cpf cpf;
private:
    std::string nome;

public:
    Titular(Cpf cpf, std::string nome);

private:
    void verificaTamanhoDoNome();
};

