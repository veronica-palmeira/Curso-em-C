//1
#include <stdio.h>

int main(){
    printf("eu quero ser aluno nota %d",10);
    return 0;
}

//2
#include <stdio.h>

int main(){
    printf("a soma é:%d",40+52);
    return 0;
}

//3
#include <stdio.h>

int main(){
    printf("gastou:%2.1f",5*2.3);
    return 0;
}

//4
#include <stdio.h>

int main(){
    printf("custa:%1.1f",57.5/23);
    return 0;
}


//outra aula

//1
#include <stdio.h>

int main(){
    
    char nome[50]="verônica";/*para string em C,
    tem que criar um array junto com o nome da variável*/
    int idade=18;
    char sexo='F';
    float altura=1.60;
    
    printf("nome:%s\n",nome);//e para imprimir coloca o %s
    printf("idade:%d\n",idade);
    printf("sexo:%c\n",sexo);
    printf("altura:%1.2f\n",altura);//casas decimais é entre o % e f!
    
}

//2
#include <stdio.h>

int main(){
    
    int lm=5,lmt=39,resultado=lm+lmt;
    
    printf("o resultado da soma é:%d",resultado);
    
    return 0;
}

//apostila

#include <stdio.h>
#include <math.h>

float latas(float raio,float altura){
    const float pi =3.14;
    float area = (2*pi*(pow(raio,2)))+(2*pi*raio*altura);
    float litro = area/3;
    float lata = litro/5;
    return lata;
}
int main(){
    
    float raio,altura;
    
    printf("entre com a medida do raio:");
    scanf("%f",&raio);
    printf("entre com a medida da altura:");
    scanf("%f",&altura);
    
    float Qlata = latas(raio,altura);
    
    float custo = Qlata*20;
    
    printf("quantidade de latas:%f\n",Qlata);
    printf("custo:%f",custo);
    
    return 0;
    
}

exercicio de matriz

#include <stdio.h>

int main(){
    
    int a[4][3],linha,coluna;
    
    for (linha=0;linha<4;linha++) {
        for (coluna=0;coluna<3;coluna++){
            printf("escreva o elemento da linha %d e coluna %d",linha,coluna);
            scanf("%d",&a[linha][coluna]);
        }
    }
     for (linha=0;linha<4;linha++){
        for (coluna=0;coluna<3;coluna++){
            printf("%d",a[linha][coluna]);
        }
        printf("\n");
    }
    
}






