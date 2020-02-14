// tp1-ex1-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Ciclo de Desenvolvimento de Software
// Escrito por: Isaac Santos
// Data: 14/02/2020

#include <iostream>
#include <locale>
using namespace std;

int main()
{
	locale::global(locale(""));
	cout << "Os passos para o desenvolvimento de SW seguro s�o:" << endl;
	cout << "1. An�lise: Definir o problema, tendo em conta a seguran�a." << endl;
	cout << "2. Desenho: Planear a solu��o, tendo em conta a seguran�a." << endl;
	cout << "3. Implementa��o: Codificar a solu��o, tendo em conta a seguran�a." << endl;
	cout << "4. Testar e depurar, tendo em conta a seguran�a." << endl;
	cout << "5. Manter e documentar, tendo em conta a seguran�a." << endl;
	// cout << "6. Adicionar mecanismos de seguran�a" << endl;  Afirma��o incorreta pois temos de ter em aten��o a Seguran�a � medida que escrevemos o c�digo, do princ�pio ao fim. (EX.2)

	return 0;
}
