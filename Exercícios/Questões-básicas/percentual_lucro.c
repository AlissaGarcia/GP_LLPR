#include <stdio.h>

int main() {

    float preco, lucro, calc_venda, multi;

    preco = 100;
    lucro = 0.05;
    multi = preco * lucro;
    calc_venda = preco + multi;

    printf("%.2f", calc_venda);

    return 0;
}