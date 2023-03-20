#include <stdio.h>
#include <stdlib.h>

int cuadrado(int a){
    int c;
    c=a*a;
    return c;
}

void cuadrado2(int a, int *c){
    *c=a*a;
}

void mostrar(int *a){
    printf("el contenido de la variable es: %d \n", *a);
    printf("la direccion de memoria es: %d \n", a);
}

void invertir(int *a, int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

void orden(int *a, int *b){
    if ((*a)>(*b))
    {
        invertir(a, b);
    }
    
}

int main()
{
    int a, b, c;
    printf("ingrese le primer numero\n");
    scanf("%d",&a);
    printf("ingrese le segundo numero\n");
    scanf("%d",&b);
    c=cuadrado(a);
    printf("el cuadrado del primer numero es: %d \n", c);
    cuadrado2(b, &c);
    printf("el cuadrado del segundo numero es: %d \n", c);
    printf("la primera variable\n");
    mostrar(&a);
    printf("la segunda variable\n");
    mostrar(&b);
    invertir(&a,&b);
    printf("los valores de las variables se intercambiaron\n");
    printf("ahora la primera variable vale %d\n",a);
    printf("ahora la segunda variable vale %d\n",b);
    printf("las ordenemos de menor a mayor\n");
    orden(&a,&b);
    printf("ahora la primera variable vale %d porque es mas chico que %d", a, b);
    return 0;
}
