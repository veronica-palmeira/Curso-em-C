#include <stdio.h>

int main(){
    
    int num;
    
    printf("escreva um número:");
    scanf("%d",&num);
    
    switch(num){//mais rápido do que ficar fzd if, else if e else
        case 1://se o usuário escrever 1, vai imprimir domingo na tela
        printf("domingo");
        break;//tem que colocar isso em cada caso, para o código não continuar nos outros
        case 2:
        printf("segunda");
        break;
        case 3:
        printf("terça");
        break;
        case 4:
        printf("quarta");
        break;
        case 5:
        printf("quinta");
        break;
        case 6:
        printf("sexta");
        break;
        case 7:
        printf("sábado");
        break;
        default://caso o número inserido seja diferente desses, vai aparecer essa mensagem
        printf("numero inválido");
        break;
    }
    return 0;
}