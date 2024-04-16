#include <stdio.h>

int main(){
    int i,j;
    char ** nombres;
    nombres =(char **)malloc(5*sizeof(char *));
    char buffer[100];
    for(i = 0; i < 5; i++){
        printf("Ingrese el nombre: ");
        gets(buffer);
        nombres[i] = (char *)malloc(sizeof(char)*strlen(buffer) + 1);
        strcpy(nombres[i], buffer);
    }
    printf("---Nombres---\n");
    for(j = 0; j < 5;j++){
        printf("%s\n", nombres[j]);
        

    }
    



    return 0;
}