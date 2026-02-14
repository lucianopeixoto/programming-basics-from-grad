#include <cstdlib>
#include <iostream>

using namespace std;

class Elevador
{
	private:
		int andarAtual;
		int andarDestino;
		int listaInterna[100];
		int listaExterna[100];
		int velocidade;
		int aceleracao;
		int velocidadeMax;
		int carga;
		int cargaMax;
	public:
		int set andarAtual;
};

int main(int argc, char *argv[])
{
	system("PAUSE");
	return EXIT_SUCCESS;
}
