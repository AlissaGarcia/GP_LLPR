#include <stdio.h>

int main()
{
    char s;
    
    printf("Qual seu sexo? ");
    scanf("%c", &s);
    
    if(s=='M'){
        printf("Masculino");
    }else if(s=='F'){
        printf("Feminino");
    }else{
        printf("Tente Novamente com M ou F!!!");
    }

    return 0;
}