#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n");
    printf("\t\t\t\t\tBienvenido a mi primer proyecto\n\n");
    printf("\t\t\tEn este primer paso por gihub prepare una calculadora simple\n\n");
    menu();

    return 0;
}
// DECLARACIÓN DE FUNCIONES DE LA CALCULADORA
float sumar(float n1,float n2){
    return n1 + n2;
}

float restar(float n1,float n2){
    return n1 - n2;
}
float multiplicar(float n1,float n2){
    return n1 * n2;
}
void dividir(float n1,float n2){
    if(n1<n2){
        printf("El dividendo no puede ser menor que el dividor.\nPor favor, elegir otros numeros.");
        printf("\nPrimer numero: ");
        scanf("%f",&n1);
        printf("Segundo numero: ");
        scanf("%f",&n2);
        printf("La division entre %.2f y %.2f es: %.2f\n\n",n1,n2,n1/n2);
    }
    else if(n2==0){
        printf("El divisor no puede ser 0.(No se puede dividir un numero por 0)\nPor favor, elegir otro numero para el divisor. ");
        printf("\nNumero del divisor: ");
        scanf("%f",&n2);
        printf("La division entre %.2f y %.2f es: %.2f\n\n",n1,n2,n1/n2);
    }
    else{
        printf("La division entre %.2f y %.2f es: %.2f\n\n",n1,n2,n1/n2);
    }
}
//FUNCION MENU
void menu(){
    int opcion;
    float n1,n2;

    printf("- Ingresar 2 numeros - \n\n");
    printf("Primer numero: ");
    scanf("%f",&n1);
    printf("Segundo numero: ");
    scanf("%f",&n2);
    system("cls");
    printf("Tus numeros son: \nPrimer numero: %.2f\nSegundo numero: %.2f\n\n", n1,n2);
    printf("Seleccione la accion a realizar:\n");

    do{
        fflush(stdin);

        printf("1) Suma\n");
        printf("2) Resta\n");
        printf("3) Multiplicacion\n");
        printf("4) Division\n");
        printf("5) Ingresar nuevos numeros\n");
        printf("6) Salir\n");
        printf("\n");
        printf("Elija la opcion que desee: ");
        scanf("%d",&opcion);
        switch(opcion){
        case 1:
            system("cls");
            printf("La suma de %.2f y %.2f es: %.2f\n\n",n1,n2,sumar(n1,n2));
            break;
        case 2:
            system("cls");
            printf("La resta de %.2f y %.2f es: %.2f\n\n",n1,n2,restar(n1,n2));
            break;
        case 3:
            system("cls");
            printf("La multiplicacion de %.2f y %.2f  es: %.2f\n\n",n1,n2,multiplicar(n1,n2));
            break;
        case 4:
            system("cls");
            dividir(n1,n2);
            break;
        case 5:
            system("cls");
            menu();
            break;
        case 6:
            break;
        default:
            printf("La opcion ingresada no es correcta");
            break;
        }
    }while(opcion !=6);

    system("cls");
    printf("Gracias por pasarte por mi programa!!\n\n");
    printf("Daiana :D \n\n");
}
