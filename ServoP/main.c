#include <stdio.h>   //printf() entre outras.
#include <conio.h>  //getch().
#include <windows.h>  //Necessário para: LoadLibrary(), GetProcAddress() e HINSTANCE.

#define PARALELA 0x378

//Declaração dos ponteiros para função.
typedef short _stdcall (*PtrInp)(short EndPorta);
typedef void _stdcall (*PtrOut)(short EndPorta, short valor);

int main(void)
{
	HINSTANCE hLib; //Instância para a DLL inpout32.dll.
	PtrInp inportb;     //Instância para a função Imp32(). 
	PtrOut outportb;  //Instância para a função Out32().

	// -------------------------------------------------------------------------
	// Variaveis:
	unsigned char byteSaida;
	// -------------------------------------------------------------------------
	
	// Carrega a DLL na memória.
	printf ("Carregando inpout32.dll na memoria... ");
	hLib = LoadLibrary("inpout32.dll");

	// Verificando se deu certo:
	if(hLib == NULL) {
		printf("ERRO: Arquivo nao encontrado");
		getch();
		return -1;
	}
   	else {
		printf ("OK\n");
	}

	//Obtém o endereço da função Inp32 contida na DLL.
	printf("Obtendo endereco da funcao Inp32... ");
	inportb = (PtrInp) GetProcAddress(hLib, "Inp32");

	// Verificando se deu certo:
	if(inportb == NULL) {
    	printf("ERRO: A função Inp32 nao foi encontrada.\n");
		getch();
		return -1;
	}
	else {
		printf ("OK\n");
	}

	//Obtém o endereço da função Out32 contida na DLL.
	printf("Obtendo endereco da funcao Out32... ");
	outportb = (PtrOut) GetProcAddress(hLib, "Out32");

	// Verificando se deu certo:
	if(outportb == NULL) {
		printf("Erro. A função Out32 não foi encontrada.\n");
		getch();
		return -1;
	}
	else {
		printf ("OK\n");
	}
	
	// Informando o usuário sobre o sucesso da conexão:
	printf ("Conexao estabelecida. Pressione qualquer tecla para iniciar.");
	getch();

	//---------------------------------------------------------------------------   
	// - Aqui vem a minha parte:
	
	system ("cls");	
	byteSaida = 0;
	outportb(0x378, byteSaida);
	printf ("Saida: %d\n", byteSaida);
	printf ("Saida: %d\n", &(0x378));
	getch();
	byteSaida = 255;
	outportb(0x378, byteSaida);
	printf ("Saida: %d\n", byteSaida);
	printf ("Saida: %d\n", &(0x378));
	getch();
   
	//--------------------------------------------------------------------------

	//Libera memória alocada pela DLL.
	FreeLibrary(hLib);
	return(0); 
}
