#include <stdio.h>

int main(){
    
    char s;
    printf("Qual seu sexo? ");
    scanf("%c", &s);
    
    switch(s){
        case 'M': printf("Masculino"); break;
        case 'F': printf("Feminino"); break;
        default: printf("Tente Novamente com M ou F!!!"); break;
    }
    
    return 0;
}
