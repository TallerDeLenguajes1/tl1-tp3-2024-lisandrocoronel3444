#include <stdio.h>

void cargarMatriz(int matriz[5][12]);
void mostrarMatriz(int matriz[5][12]);


int main(){
    int matriz[5][12];
    cargarMatriz(matriz);
    mostrarMatriz(matriz);



    return 0;




}

void cargarMatriz(int matriz[5][12]){
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 12; j++){
            matriz[i][j] = rand() % (50000 - 10000 + 1) + 10000;
        }


    }


}
void mostrarMatriz(int matriz[5][12]){
    int i,j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 12; j++){
            printf(" %d ", matriz[i][j]);

        }
        printf("\n");
    }


}