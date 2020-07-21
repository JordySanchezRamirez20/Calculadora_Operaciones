//Elabora un programa que permita realizar operaciones aritmeticas elementales o basicas 
//de dos numeros reales segun la clave ingresada
#include<stdio.h>
#include<conio.h>
#include<windows.h>
main(){
   float n1,n2,n3;
   char cla='s';
   do{
      system("cls");
      printf("\n\t Clave     \tOperacion");
      printf("\n\t +         \tSuma");
      printf("\n\t -         \tResta");
      printf("\n\t *         \tMultiplicacion");
      printf("\n\t /         \tDivision");
      printf("\n\t S/s       \tSalir");
      printf("\n");
      printf("\n\tSeleccione una opcion: ");
      fflush(stdin);
      scanf("%c",&cla);
      if(cla=='s' || cla=='S'){
         break;
      }
     switch(cla){
        case '+':
           printf("\nSuma");
           printf("\nNumero 1: ");
           scanf("%f",&n1);
           printf("\nNumero 2: ");
           scanf("%f",&n2);
           n3=n1+n2;
           printf("\tclave= %c   \tResultado %.2f\n",cla,n3);
           break;
        case '-':
          printf("\nResta");
          printf("\nNumero 1: ");
          scanf("%f",&n1);
          printf("\nNumero 2: ");
          scanf("%f",&n2);
          n3=n1-n2;
          printf("\tclave= %c   \tResultado %.2f\n",cla,n3);
          break;
        case '*':
         printf("\nMultiplicacion");
         printf("\nNumero 1: ");
         scanf("%f",&n1);
         printf("\nNumero 2: ");
         scanf("%f",&n2);
         n3=n1*n2;
         printf("\tclave= %c   \tResultado %.2f\n",cla,n3);
         break;
        case '/':
         printf("\nDivision");
         printf("\nNumero 1: ");
         scanf("%f",&n1);
         do{
           printf("\nNumero 2: ");
           scanf("%f",&n2);
           if(n2==0){
              printf("\nNumero invalido para la division");
           }
         }while(n2==0);
         n3=n1/n2;
         printf("\tclave= %c   \tResultado %.2f\n",cla,n3);
         break;
        default:
           printf("\nClave erronea");
           break;
     }
     getch();
  }while(1);
   getch();
}
         
           
