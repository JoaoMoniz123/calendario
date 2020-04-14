#include <stdio.h>
    int main(void){

        int dia;
        int mes;
        int ano;
        int resposta;
        int x;

        printf("Qual o dia? \n");
        scanf("%d", &dia);

        printf("Qual o mes? \n"); 
        scanf("%d", &mes);

        printf("Qual o ano?\n "); 
        scanf("%d", &ano);

        if (mes > 2){
           mes = mes - 2;
           x = 8;
       }
       
       else{
           ano = ano - 1;
           x = 13;
       }
      
       resposta = (x + dia + 2 * mes + ((7 * mes) / 12) + ano % 7 +
              ano / 4 % 7 - (3 * (1 + ano / 100)) / 4 % 7) % 7;
      
      if (resposta == 0){
         printf("Sabado");
      }

      else if (resposta == 1){ 
          printf("Domingo");
      }

      else if (resposta == 2) {
          printf("Segunda");
          }
        
      else if (resposta == 3){ 
          printf("Terca");
          }

      else if (resposta == 4){ 
          printf("Quarta");
          }

      else if (resposta == 5) {
          printf("Quinta");
          }

      else if (resposta == 6) {
          printf("Sexta");
      }
   }