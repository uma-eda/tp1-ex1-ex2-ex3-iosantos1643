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
	cout << "Os passos para o desenvolvimento de SW seguro são:" << endl;
	cout << "1. Análise: Definir o problema, tendo em conta a segurança." << endl;
	cout << "2. Desenho: Planear a solução, tendo em conta a segurança." << endl;
	cout << "3. Implementação: Codificar a solução, tendo em conta a segurança." << endl;
	cout << "4. Testar e depurar, tendo em conta a segurança." << endl;
	cout << "5. Manter e documentar, tendo em conta a segurança." << endl;
	// cout << "6. Adicionar mecanismos de segurança" << endl;  Afirmação incorreta pois temos de ter em atenção a Segurança à medida que escrevemos o código, do princípio ao fim. (EX.2)

	return 0;
}
