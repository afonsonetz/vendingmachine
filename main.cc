#include <iostream>
using namespace std;

#include "produto.hpp"

#define MAX_PRODUTOS 30


class MaquinaDeVendas
{
    private:
    int saldo = 100;
    int troco;

    Produto *stock[MAX_PRODUTOS] = {nullptr};

    MaquinaDeVendas() {}
    MaquinaDeVendas(MaquinaDeVendas const&);
    ~MaquinaDeVendas() {}
    void operator=(MaquinaDeVendas const&);

    public:
    static MaquinaDeVendas& getInstance() {
	    static MaquinaDeVendas maquina;
	    return maquina;
    }

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

int main (int argc, char* argv[]) {
	MaquinaDeVendas::getInstance();

	return 0;
}

