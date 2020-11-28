#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main()
{
    Conta umaConta;
    Conta umaOutraConta;

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);
    
    cout << "Uma conta: " << umaConta.saldo << " Outra conta: " << umaOutraConta.saldo << endl;
    
    return 0;
}
