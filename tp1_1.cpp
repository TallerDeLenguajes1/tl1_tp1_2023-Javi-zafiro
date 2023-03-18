#include <stdio.h>

int main(){
    int x, *p;
    printf("hola mundo \n");

    p=&x;
    printf("el contenido del puntero es: %d \n", p);
    printf("la direccion de memoria almacenada en el puntero es: %d \n", p);
    printf("la direccion de memoria de la variable es: %d \n", &x);
    printf("la direccion de memoria del puntero: %d \n", &p);
    printf("el tamano de memoria utilizado por la variable es: %d \n", sizeof(x));

    return 0;
}
