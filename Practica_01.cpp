#include <stdio.h>
#include <stdlib.h>

int main(){
   float a,b,c;
   int opcion;
   printf(" 1.-Suma\n 2.-Resta\n 3.-Multiplicacion \n 4.-Division\n\n");
   printf("Seleccione una opcion: ");
   scanf("%d",&opcion);
   printf("Ingrese el primer valor: ");
   scanf("%f",&a);
   printf("Ingrese el segundo valor: ");
   scanf("%f",&b);

   if (opcion==1){
    c=a+b;
   }
   else if (opcion==2){
    c=a-b;
   }
   else if (opcion==3){
    c=a*b;
   }
   else if (opcion==4){
    while (b==0){
        printf("Error, b debe ser diferente a 0\n");
        printf("Ingrese valor de b: ");
        scanf("%f",&b);
    }
    c=a/b;
   }
   else {
    printf("Syntax error\n");
    c=0;
   }
   printf("El resultado es %f",c);

}
