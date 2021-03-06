#include <iostream>
#include <cmath>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char *argv[]) 

{
	int i, c;
	float vetor[16];
	float vetor1[4];
	float vetor2[40];
	int a = 0;
	double x1, x2, x3, x4, b1, b2, b3, b4;
	
		cout << "\n Programa para calculo do metodo de Gauss-Jacobi. \n";
		cout << "\n Digite os valores da matriz 4x4: \n";
		 
	// Armazenamento dos termos
         
		for (i = 0; i < 16; i++)
	{
		cout << "\n Elemento: [" << i + 1 << "] = "; cin >> (vetor[i]);
	}

	cout << ("\n\n******************* Saida de Dados ********************* \n\n");
	 

        for (i = 0; i < 16; i++)
		{        	
	     cout << "\n Elemento: [" << i + 1 << "] = " << vetor[i] << "\n";
        }
        
        cout << "\n Digite os valores de B: \n";
        
        for (i = 0; i < 4; i++)
		{        	
	     cout << "\n B  [" << i + 1 << "] = "; cin >> (vetor1[i]);
        }
        
        b1 = vetor1[0] / vetor[0];
        b2 = vetor1[1] / vetor[5];
        b3 = vetor1[2] / vetor[10];
        b4 = vetor1[3] / vetor[15];
        
        cout << ("\n\n******************* Saida de Dados ********************* \n\n");
        
        for (i = 0; i < 4; i++)
		{        	
	     cout << "\n B  [" << i + 1 << "] = " << vetor1[i] << "\n";
        }

  	        vetor2[0] = ((1/vetor[0])*(vetor1[0] - (vetor[1]*b2) - (vetor[2]*b3) - (vetor[3]*b4)));
        	vetor2[1] = ((1/vetor[5])*(vetor1[1] - (vetor[4]*b1) - (vetor[6]*b3) - (vetor[7]*b4)));
        	vetor2[2] = ((1/vetor[10])*(vetor1[2] - (vetor[8]*b1) - (vetor[9]*b2) - (vetor[11]*b4)));
        	vetor2[3] = ((1/vetor[15])*(vetor1[3] - (vetor[12]*b1) - (vetor[13]*b2) - (vetor[14]*b3)));
        	
        	
        for (i = 0; i < 32; i + 4)
        {
            vetor2[i+4] = ((1/vetor[0])*(vetor1[0] - (vetor[1]*vetor2[i+1]) - (vetor[2]*vetor2[i+2]) - (vetor[3]*vetor2[i+3])));
        	vetor2[i+5] = ((1/vetor[5])*(vetor1[1] - (vetor[4]*vetor2[i]) - (vetor[6]*vetor2[i+2]) - (vetor[7]*vetor2[i+3])));
        	vetor2[i+6] = ((1/vetor[10])*(vetor1[2] - (vetor[8]*vetor2[i]) - (vetor[9]*vetor2[i+1]) - (vetor[11]*vetor2[i+3])));
        	vetor2[i+7] = ((1/vetor[15])*(vetor1[3] - (vetor[12]*vetor2[i]) - (vetor[13]*vetor2[i+1]) - (vetor[14]*vetor2[i+2])));
	    }
		
		x1 = vetor2[36];
		x2 = vetor2[37];
		x3 = vetor2[38];
		x4 = vetor2[39];
		
		cout << "\n Metodo de Gauss-Jacobi: \n";
		cout << "\n Valores de X1: " << x1 << "\n";
		cout << "\n Valores de X2: " << x2 << "\n";
		cout << "\n Valores de X3: " << x3 << "\n";
		cout << "\n Valores de X4: " << x4 << "\n";
		
		system ("PAUSE");
	return 0;
}
