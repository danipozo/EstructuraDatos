#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){

	int n = atoi(argv[1]);
	int filas1,columnas1,fil2,col2;
	filas1 = columnas1 = fil2 = col2 = n;





	int * * matrix1 = new int * [filas1];
	for (int i = 0; i < filas1; i++)
		matrix1[i] = new int [columnas1];


	int * * matrix2 = new int * [fil2];
	for (int i = 0; i < fil2; i++)
		matrix2[i] = new int [col2];

	for (int i = 0; i < filas1; i++){
			for (int j = 0; j < columnas1; j++)
					matrix1[i][j]=1;
		}



    for (int i = 0; i < fil2; i++){
        for (int j = 0; j < col2; j++)
             matrix2[i][j] = 1;

    }


	if (columnas1 == fil2){

		int * * producto = new int * [filas1];
		for (int i = 0; i < col2; i++){
			producto[i] = new int [col2];
		}

		for (int i = 0; i < filas1; i++){
			for(int j = 0; j < col2; j++){
				producto[i][j] = 0;
				for (int k = 0; k < columnas1; k++)
					producto[i][j] = producto[i][j] + matrix1[i][k] * matrix2[k][j];

			}
		}

		for(int i = 0; i < filas1; i++){

			for(int j = 0; j < col2; j++)
				cout << producto[i][j];
		}

		for(int i = 0; i < filas1; i++)
			delete [] producto[i];
		delete [] producto;
	}

	for(int i = 0; i < filas1; i++)
		delete [] matrix1[i];
	delete [] matrix1;

	for(int i = 0; i < filas1; i++)
		delete [] matrix2[i];
	delete [] matrix2;
}
