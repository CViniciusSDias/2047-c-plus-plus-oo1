#include "ContaCorrente.hpp"
#include <iostream>

ContaCorrente::ContaCorrente(std::string numero, Titular titular): Conta(numero, titular)
{
}

float ContaCorrente::taxaDeSaque() const
{
    std::cout << "Chamando método sacar da conta corrente" << std::endl;

    return 0.05;
}

void ContaCorrente::transferePara(Conta& destino, float valor)
{
    Conta::ResultadoSaque resultado = sacar(valor);
    
    if (resultado == Sucesso) { 
        destino.depositar(valor);
    }
}

void ContaCorrente::operator+=(ContaCorrente& contaOrigem)
{
    contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo() / 2);
}