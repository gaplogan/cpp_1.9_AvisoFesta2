#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //declara vari�vel inteira para controle do loop
    int j = 1; //inicializa vari�vel de controle do loop
    
    while (j <= 5)
    {//in�cio do loop
        //escreve a frase
        cout << "Hoje vai ter festa na casa da Fabi" << endl;
        //incrementa vari�vel de controle do loop (contador)
        j++; // Mesmo que j = j + 1;
    }//fim do loop

    return 0;
}