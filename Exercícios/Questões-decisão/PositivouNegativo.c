
#include <stdio.h>

int main()
{
    int n;
    printf("Escreva um Número: ");
    scanf("%d", &n);
    if(n>0){
        printf("O número digitado é positivo!!");
    }else if(n<0){
        printf("O número digitado é negativo!!");
    }else{
        printf("O número digitado é nulo");
    }
    
    return 0;
}