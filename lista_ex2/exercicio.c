#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
}

int ex1()
{
    printf("Exercicio 1 \n");
    setlocale(LC_ALL,"portuguese");
    float diam, raio, pi, area,volume;
    printf("Digite o valor do diâmetro da esfera: \n");
    scanf("%f", &diam);
    pi = 3.14;
    raio = diam / 2;
    area = 4 * pi * pow(raio,2);
    volume = 4/3 * pi * pow(raio,3);
    printf("A área da esfera é: %5.2f \n", area);
    printf("A volume da esfera é: %5.2f \n", volume);
    printf("---------------------------------------------- \n\n");
    return 0;
}

int ex2()
{
    printf("Exercicio 2 \n");
    int x, y, v, n, m, resul;
    printf("Qual o maior valor? %i \n", 2>3); // falso 0
    printf("Qual o maior valor? %i \n", 4==4); // verdadeiro 1

    printf("Digite um valor. \n");
    scanf("%i", &x);

    printf("Digite outro valor. \n");
    scanf("%i", &y);

    printf("Qual é o maior valor? %i \n", x>y);
    printf("Qual é o maior valor? %i \n", x<y);
    printf("Qual é o maior valor? %i \n", x==y);

    printf("Digite um valor para x. \n");
    scanf("%i", &x);

    printf("Digite um valor para y. \n");
    scanf("%i", &y);

    printf("Digite um valor para a.\n");
    scanf("%i", &v);

    printf("Resultado da comparação: %i \n", pow(x,2) - pow(y,3) > pow(x,v+4));
    printf("Resultado da comparação: %i \n", v < 5);

    double a,b,c,delta,x1,x2;

    printf("coeficente a: ");
    scanf("%lf",&a);

    printf("coeficente b: ");
    scanf("%lf",&b);

    printf("coeficente c: ");
    scanf("%lf",&c);

    delta = pow(b,2) - 4 * a * c;

    if(a==0 || delta<0){

       printf("equacao nao possui raizes...");

    }
    else{

        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);

        printf("x1 = %.1lf",x1);
        printf("\nx2 = %.1lf",x2);
    }


    printf("\n---------------------------------------------- \n\n");
    return 0;
}

int ex3()
{
    printf("Exercicio 3 \n");
    int x,y,dif;
    printf("Digite o valor de x: ");
    scanf("%i", &x);
    printf("Digite o valor de y: ");
    scanf("%i", &y);
    dif = x-y;
    if(dif == 0){
        printf("A diferença entre os valores é igual a zero");
    }else{
        printf("A diferença entre os valores é desigual a zero");
    }
    printf("\n---------------------------------------------- \n\n");
    return 0;
}

int ex4()
{
    printf("Exercicio 4 \n");
    float p1, p2, resul;
    printf("Digite o primeiro ponto da reta: ");
    scanf("%f", &p1);
    printf("Digite o segundo ponto da reta: ");
    scanf("%f", &p2);
    if(p1>p2){
        resul = p1-p2;
        printf("A distância entre os dois pontos é: %2f \n", resul);
    }else{
        resul = p2-p1;
        printf("A distância entre os dois pontos é: %2f \n", resul);
    }
    printf("---------------------------------------------- \n\n");
    return 0;
}

int ex5()
{
    printf("Exercicio 5 \n");
    int x,y,z,resultado;

    printf("Digite o número de professores: ");
    scanf("%i", &x);

    printf("Digite o número de professores que dão cálculo: ");
    scanf("%i", &y);

    z = x - y;
    printf("O número de professores que dão matemática são: %i", z);

    printf("\n---------------------------------------------- \n\n");
    return 0;

}
