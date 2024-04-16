#include <stdio.h>
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

int main(){
    char * tiposProductos[] = {"Galletas","Snack","Cigarillos","Caramelos","Bebidas"};
    int cantClientes;
    printf("Ingrese la cantidad de clientes: ");
    gets(cantClientes);
    Cliente * = (Cliente *)malloc(sizeof(Cliente) * cantClientes);


    



    return 0;
}