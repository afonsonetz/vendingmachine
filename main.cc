#include <iostream>
using namespace std;

class VendingMachine
{
    private:
    int saldo = 100;
    int troco;
    public:
    int comprar(int *produto, int dinheiro, int *troco)
    {
        int preco = 1;

        if (preco == dinheiro)
        {
            *troco = 0;
        } 
        else if (dinheiro < preco)
        {
            cout << "Dinheiro insuficiente para concretizar a operação!\n";
            return 0;
        } 
        else if (dinheiro > preco)
        {
            *troco = dinheiro - preco;
        }
        *produto--;
        cout << "Compra efectuda com sucesso!";

    }
};
