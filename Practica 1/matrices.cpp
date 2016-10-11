#include <iostream>

using namespace std;

int main(){

	int filas1 = 2,columnas1 = 2;
	int fil2 = 2,col2 = 2;

	int ** matrix1 = new int * [filas1];
	for (int i = 0; i < filas1; i++)
		matrix1[i] = new int [columnas1];

	int ** matrix2 = new int * [fil2];
		for (int i = 0; i < fil2; i++)
			matrix2[i] = new int [col2];

	int ** producto = new int * [filas1];
	for (int i = 0; i < col2; i++){
				producto[i] = new int [col2];
	}

    cout << "\nIntroduzca la primera matriz con los elementos de cada fila " << endl;

    for (int i = 0; i < filas1; i++){
        for (int j = 0; j < columnas1; j++)
            cin >> matrix1[i][j];
        cout << endl;
    }


    cout << "Introduzca la segunda matriz con los elementos de cada fila" << endl;

    for (int i = 0; i < fil2; i++){
        for (int j = 0; j < col2; j++)
            cin >> matrix2[i][j];
        cout << endl;
    }


		for (int i = 0; i < filas1; i++){
			for(int j = 0; j < col2; j++){
				producto[i][j] = 0;
				for (int k = 0; k < columnas1; k++)
					producto[i][j] = producto[i][j] + matrix1[i][k] * matrix2[k][j];
			}
		}

		cout << "Resultado:" << endl;
		for(int i = 0; i < filas1; i++){
			cout << "\n";
			for(int j = 0; j < col2; j++)
				cout << producto[i][j] << "  ";
		}




	cout << endl;

	for(int i = 0; i < filas1; i++)
		delete [] producto[i];
	delete [] producto;

	for(int i = 0; i < filas1; i++)
		delete [] matrix1[i];
	delete [] matrix1;

	for(int i = 0; i < filas1; i++)
		delete [] matrix2[i];
	delete [] matrix2;
}
