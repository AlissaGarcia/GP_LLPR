#include <stdio.h>

int main()
{
   float preco, lucro_perc, calc_vend, valor_lu;
   
   preco = 100;
   lucro_perc = 0.01;

   valor_lu = preco * lucro_perc;
   calc_vend = preco - valor_lu;
   
   printf ("%.2f", calc_vend);
   
}
