#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int ex6();
int ex7();
int ex8();
int ex9();
int ex10();

int main(void)
{
    int n;
    printf("\nEscolha o exercicio: [1],[2],[3],[4],[5],[6],[7],[8],[9],[10]\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        ex1();
        break;
    case 2:
        ex2();
        break;
    case 3:
        ex3();
        break;
    case 4:
        ex4();
        break;
    case 5:
        ex5();
        break;
    case 6:
        ex6();
        break;
    case 7:
        ex7();
        break;
    case 8:
        ex8();
        break;
    case 9:
        ex9();
        break;
    case 10:
        ex10();
        break;
    default:
        printf("\nPor favor, escolha uma das opcoes.\n");
        break;
    }
}

int ex1(void)
{
    printf("Exercicio 01\n");
    printf("----------------------------------\n");

    int qpares, qimpares, n;

    printf("Digite um numero.\n");
    scanf("%d", &n);

    while (n < 9999)
    {
        printf("Digite um numero.\n");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            qpares++;
        }
        else
        {
            qimpares++;
        }
    }

    printf("Total de numero pares: %d, total de numeros impares: %d \n", qpares, qimpares);
}

int ex2(void)
{
    printf("\nExercicio 02\n");
    printf("----------------------------------\n");

    int maior, menor, n, i, total;
    float media;

    menor = 9999999;
    maior = 0;
    i = 0;
    total = 0;
    media = 0;

    printf("Digite um numero. \n");
    scanf("%d", &n);

    while (n > 0)
    {
        total = total + n;
        i++;

        if (n > maior)
        {
            maior = n;
        }
        if (n < menor)
        {
            menor = n;
        }

        printf("Digite outro numero ou digite -1 para sair. \n");
        scanf("%d", &n);
    }
    media = (double)total / i;
    printf("Maior valor: %d\nMenor valor: %d\nMedia dos valores: %.2f\n", maior, menor, media);
}

int ex3(void)
{

    printf("\nExercicio 03\n");
    printf("----------------------------------\n");

    int n, i;

    printf("Digite um numero para calcular o fatorial.\n");
    scanf("%d", &n);

    for (i = 1; n > 1; n--)
    {
        i = i * n;
    }
    printf("\nFatorial Calculado: %d\n", i);
}

int ex4(void)
{
    printf("\nExercicio 04\n");
    printf("----------------------------------\n");

    int contador, n;
    double total, denominador;
    denominador = 3;

    printf("Digite a quantidade de termos desejada.\n");
    scanf("%d", &n);

    for (contador = 1; contador <= n; contador++)
    {
        if (contador % 2 == 1)
        {
            total += 1 / pow(denominador, 3);
            denominador += 2;
        }
        else
        {
            total -= 1 / pow(denominador, 3);
            denominador += 2;
        }
    }

    total = 1 - total;
    printf("\nTotal da sequencia: %.4f\n", total);
}

int ex5(void)
{

    printf("\nExercicio 05\n");
    printf("----------------------------------\n");

    int a, b, auxiliar, i, n;

    a = 0;
    b = 1;

    printf("Digite o numero de termos da serie.\n");
    scanf("%d", &n);

    if (n > 2)
    {
        for (i = 0; i < n; i++)
        {

            auxiliar = a + b;
            a = b;
            b = auxiliar;

            printf("%d\n", auxiliar);
        }
    }
    else
    {
        printf("\nDigite um numero maior que 2\n");
    }
}

int ex6(void)
{
    printf("\nExercicio 06\n");
    printf("----------------------------------\n");

    int contador;
    float total, denominador, n, numerador;
    numerador = 1;

    printf("Digite o numeros de termos.\n");
    scanf("%f", &n);

    for (contador = 1; contador <= n; contador++)
    {
        if (contador % 2 == 1)
        {
            total += numerador / n;
            n -= numerador - 1;
            numerador++;
        }
        else
        {
            total -= numerador / n;
            n -= numerador - 1;
            numerador++;
        }
    }
    printf("\nTotal da expressao: %.2f", total);
}

int ex7(void)
{

    printf("\nExercicio 07\n");
    printf("----------------------------------\n");

    int i, n1, n2, n3, n4, n5, aux;

    for (i = 10000; i <= 99999; i++)
    {
        n1 = i / 10000;
        aux = i % 10000;
        n2 = aux / 1000;
        aux = aux % 1000;
        n3 = aux / 100;
        aux = aux % 100;
        n4 = aux / 10;
        aux = aux % 10;
        n5 = aux;
        if (n1 == n5 && n2 == n4)
        {
            printf("\nO numero %d possui esta caracteristica.\n", i);
        }
    }
}

int ex8(void)
{
    printf("\nExercicio 08\n");
    printf("----------------------------------\n");

    int i, n1, n2, n3, n4, aux, total;

    for (i = 1000; i <= 9999; i++)
    {
        n1 = i / 1000;
        aux = i % 1000;
        n2 = aux / 100;
        aux = aux % 100;
        n3 = aux / 10;
        aux = aux % 10;
        n4 = aux;

        total = (n1 + (n2 * 10)) + (n3 + (n4 * 10));
        if (total = pow(total, 2) == i)
        {
            printf("\nO numero %d possui esta caracteristica.\n", i);
        }
    }
}

int ex9(void)

{

    printf("\nExercicio 09\n");
    printf("----------------------------------\n");

    int i, n, random, acerto, erro;
    printf("\nEscolha entre cara [0] ou coroa [1]\n");
    scanf("%d", &n);
    srand(time(NULL));

    for (i = 1; i <= 60; i++)
    {
        random = rand() % 2;
        if (random == 1)
        {
            printf("\nLado foi coroa.\n");
            if (random == n)
            {
                printf("\nVoce acertou!\n");
                acerto++;
            }
            else
            {
                printf("\nVoce errou!\n");
                erro++;
            }
        }
        else
        {
            printf("\nLado foi cara.\n");
            if (random == n)
            {
                printf("\nVoce acertou!\n");
                acerto++;
            }
            else
            {
                printf("\nVoce errou!\n");
                erro++;
            }
        }
        printf("\nEscolha entre cara [0] ou coroa [1]\n");
        scanf("%d", &n);
    }
    printf("\nA quantidade de acertos foram: %d\nA de erros foram: %d\n", acerto, erro);
}

int ex10(void)
{

    printf("\nExercicio 10\n");
    printf("----------------------------------\n");

    printf("\nPense em um numero entre 1 e 1023\n");

    char resposta[5];
    float max, min, inter;
    inter = 512;
    min = 1;
    max = 1023;

    for (int i = 1; i <= 10; i++)
    {
        printf("\nSeu numero e maior [>], menor [<] ou [=] a %.2f\n", inter);
        gets(resposta);

        if (strcmp(resposta, "=") == 0)
        {
            printf("\nSeu numero e: %.2f\n", inter);
        }

        if (strcmp(resposta, ">") == 0)
        {
            min = inter;
            inter = (min + max) / 2;
        }

        if (strcmp(resposta, "<") == 0)
        {
            max = inter;
            inter = (min + max) / 2;
        }
    }

    printf("\nSeu numero e igual a: %.0f", inter);
}

/* 

função strcmp para comparar a entrada do tipo char

if(strcmp (variavel,"char_de_comparação") == 0){
    // codigo
}

*/