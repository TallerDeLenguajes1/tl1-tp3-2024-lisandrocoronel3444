#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Producto{
    int ProductoID;
    int cantidad;
    char * tipoProducto;
    float precioUnitario;
}typedef Producto;

struct Cliente{
    int clienteID;
    char * nombreCliente;
    int cantidadProductosAPedir;
    Producto * productos;
}typedef Cliente;

void cargarClientes(Cliente * datos, char * tiposProductos[]);
void mostrarClientes(Cliente * datos);


int main(){
    char * tiposProductos[] = {"Galletas","Snack","Cigarillos","Caramelos","Bebidas"};
    int cantClientes;
    Cliente * clientes;
    printf("Ingrese la cantidad de clientes(no mas de 5): ");
    scanf("%d",&cantClientes);
    clientes = (Cliente *)malloc(sizeof(Cliente) * cantClientes);
    for(int i = 0; i < cantClientes; i++){
    clientes->clienteID = i;
    cargarClientes(clientes, tiposProductos);
    mostrarClientes(clientes);

    }


    



    return 0;
}

void cargarClientes(Cliente * datos, char * tiposProductos[]){
    char buffer[100];
        
        printf("Ingrese nombre del cliente:");
        fflush(stdin);
        gets(buffer);
        datos->nombreCliente=(char *)malloc(sizeof(char) * (strlen(buffer)) + 1);
        strcpy(datos->nombreCliente, buffer);
        datos->cantidadProductosAPedir = rand() % 5 + 1;
        datos->productos = (Producto *)malloc(sizeof(Producto) * datos->cantidadProductosAPedir);
        for(int j = 0; j < datos->cantidadProductosAPedir; j++){
            datos->productos[j].cantidad = rand() % 10 + 1;
            datos->productos[j].tipoProducto = tiposProductos[rand() % 4 + 1];
            datos->productos[j].precioUnitario = rand() % (400 + 1) + 100;

        }




    }




void mostrarClientes(Cliente * datos){
    
        printf("Cliente ID: %d\n", datos->clienteID);
        printf("Nombre Cliente: %s\n", datos->nombreCliente);
        printf("Productos: %d\n", datos->cantidadProductosAPedir);
        for(int j = 0; j < datos->cantidadProductosAPedir; j++){

            printf("Cantidad productos %d\n", datos->productos[j].cantidad);
            printf("Tipo: %s\n", datos->productos[j].tipoProducto);
            printf("Precio: %.2f\n", datos->productos[j].precioUnitario);
            printf("Precio total x%d productos: %2.f\n", datos->productos[j].cantidad, (datos->productos[j].precioUnitario * datos->productos[j].cantidad));
            
        }
    }

    




