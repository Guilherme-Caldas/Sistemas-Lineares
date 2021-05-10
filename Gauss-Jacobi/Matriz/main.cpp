#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char *argv[]) 

{

    	int i, j, n, m, x, y;
		double matriz[n][m];
    
	// Insere a quantidade de termos
	
	cout << "\n Numero de linhas da matriz = "; cin >> n;
		while (n < 1 || n > 4)
	{
		cout << "\n Valor invalido!\n";
		cout << "\n Numero de linhas da matriz = "; cin >> n;
	}
	
	cout << "\n Numero de colunas da matriz = "; cin >> m;
	    while (m < 1 || m > 4)
	{
		cout << "\n Valor invalido!\n";
		cout << "\n Numero de colunas da matriz = "; cin >> m;
	}
	
	// Armazenamento dos termos
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
	{
		cout << "\n Elemento: [" << i + 1 << "][" << j + 1 << "] = "; cin >> (matriz[i][j]);
	}
	 
	cout << ("\n\n******************* Saida de Dados ********************* \n\n");
	 
    for (int x = 0; x < n; x++)
        for (int y = 0; y < m; y++)
    {
	  cout << "\n Elemento: [" << x + 1 << "][" << y + 1 << "] = " << matriz[x][y] << "\n";
    }
    
		system ("PAUSE");
	return 0;
}


