#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

void ExibeSaldo(const Conta& conta)
{
    cout << "O saldo da conta é: " << conta.recuperaSaldo() << endl;
}

int main()
{
    Conta umaConta("123456", "Vinicius", "123.456.789-10");
    
    Conta umaOutraConta;

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);
    
    cout << "Uma conta: " << umaConta.recuperaSaldo() << " Outra conta: " << umaOutraConta.recuperaSaldo() << endl;
    
    return 0;
}
