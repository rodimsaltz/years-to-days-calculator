#include <stdio.h>
#include <math.h>

int main() 
{
   int Ano, Meses, Dias, Idade;
   
   printf("Digite a sua idade em anos, meses e dias: ");
   scanf("%d%d%d", &Ano, &Meses, &Dias);
   
   
   Idade = (Ano *365) + (Meses *30) +Dias;
   
   printf("Sua idade em dias :%d"), &Idade;
   
   
   return 0;
   
   
}
