#include <iostream>
#include <cmath>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char *argv[]) 

{
	int i = 0,j = 0;
	
	float matriz[4][4];
	
	
		cout << "\n Digite os valores da matriz 4x4: \n";
		 
	// Armazenamento dos termos
         
		for (i = 0; i < 4; i++)
		{
			for (j = 0; j < 4; j++)
				{
				cout << "\n Elemento: [" << i + 1 << "][" << j + 1 << "] = "; cin >> (matriz[i][j]);
            	}
		}
		
	cout << ("\n\n******************* Saida de Dados ********************* \n\n");
	 

       for (i = 0; i < 4; i++)
		{
			cout << "   " << "\n\n";
			
				for (j = 0; j < 4; j++)
				{        	
	     			cout << "   " << matriz[i][j] << "   ";
        		}
		
		}
		cout << "\n\n " ;
		
		system ("PAUSE");
	return 0;
}
