#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();


int main()
{
    setlocale(LC_ALL, "Portuguese");
    ex01();
    ex02();
    ex03();
    ex04();
    ex05();
    ex06();
    ex07();
    ex08();
    ex09();
    ex10();

}

int ex01(void)
{
    printf("Exercício 01\n");

    int n1;

    printf("Digite um valor: \n");
    scanf("%d", &n1);

    if(n1 % 2 == 0)
    {
        printf("Este número é par\n");
    }
    else
    {
        printf("Este número é impar\n");
    }
}

int ex02(void)
{
    printf("\nExercício 02 \n");

    char nome[20];
    int n1,n2,n3;
    float media;
    printf("Digite seu nome \n");
    fflush(stdin);
    gets(nome);
    printf("Digite a primeira nota do aluno\n");
    scanf("%d", &n1);
    printf("Digite a segunda nota do aluno\n");
    scanf("%d", &n2);
    printf("Digite a terceira nota do aluno\n");
    scanf("%d", &n3);

    media = (n1+n2+n3)/3;

    if(media >= 6)
    {
        printf("%s foi aprovado com a média de: %2.f", nome, media);
    }
    else
    {
        printf("%s foi reprovado com a média de: %2.f\n", nome, media);
    }
}

int ex03(void)
{
    printf("\nExercício 03 \n");
    float temp;
    printf("Digite a temperatura da água.\n");
    scanf("%f", &temp);

    if(temp > 100)
    {
        printf("Água em estado gasoso.\n");
    }
    else
    {
        if(temp < 0 )
        {
            printf("Água em estado sólido.\n");
        }
        else
        {
            printf("Água em estado líquido.\n");
        }
    }
}

int ex04(void)
{
    printf("\nExercício 04 \n");
    int n1, y;
    printf("Digite seu número.\n");
    scanf("%d", &n1);

    if(n1<0)
    {
        y = pow(n1,2) + 4;
        printf("Resultado: %d\n", y);
    }
    else if(n1>0)
    {
        y = pow(n1,3) - 3;
        printf("Resultado: %d\n", y);
    }
    else
    {
        printf("Erro, digite um número diferente de 0\n");
    }

}

int ex05(void)
{
    printf("\nExercício 05 \n");

    int n1,n2,n3;

    printf("Digite o primeiro valor.\n");
    scanf("%d",&n1);

    printf("Digite o segundo valor.\n");
    scanf("%d",&n2);

    printf("Digite o terceiro valor.\n");
    scanf("%d",&n3);

    if(n1 > n2 && n1 > n3 && n2 < n3)
    {
        printf("C = %d\n", n1);
        printf("B = %d\n", n3);
        printf("A = %d\n", n2);
    }
    else if (n1 > n2 && n1 > n3 && n3 < n2)
    {
        printf("C = %d\n", n1);
        printf("B = %d\n", n2);
        printf("A = %d\n", n3);
    }
    else if (n2 > n1 && n2 > n3 && n1 < n3)
    {
        printf("C = %d\n", n2);
        printf("B = %d\n", n3);
        printf("A = %d\n", n1);
    }
    else if (n2 > n1 && n2 > n3 && n3 < n1)
    {
        printf("C = %d\n", n2);
        printf("B = %d\n", n1);
        printf("A = %d\n", n3);
    }
    else if (n3 > n1 && n3 > n2 && n2 < n1)
    {
        printf("C = %d\n", n3);
        printf("B = %d\n", n1);
        printf("A = %d\n", n2);
    }
    else if (n3 > n1 && n3 > n2 && n1 < n2)
    {
        printf("C = %d\n", n3);
        printf("B = %d\n", n2);
        printf("A = %d\n", n1);
    }

}

int ex06(void)
{
    printf("\nExercício 06 \n");
    int x,y,z;
    printf("Digite o primeiro valor.\n");
    scanf("%d",&x);

    printf("Digite o segundo valor.\n");
    scanf("%d",&y);

    printf("Digite o terceiro valor.\n");
    scanf("%d",&z);

    if(x%y == 0 && x%z == 0)
    {
        printf("O número %d é divisível por %d e por %d\n", x,y,z);
    }
    else if(x%y == 0 && x%z != 0)
    {
        printf("O número %d é divisível por %d e mas não por %d\n", x,y,z);
    }
    else if(x%z == 0 && x%y != 0)
    {
        printf("O número %d é divisível por %d e mas não por %d\n", x,z,y);
    }
    else
    {
        printf("O número %d não é divisível por %d e nem por %d\n", x,z,y);
    }
}

int ex07(void)
{

    printf("\nExercício 07 \n");

    int n1,n2,n3,n4,valorinicial,aux, soma, resultado;
    printf("Digite o valor.\n");
    scanf("%d", &valorinicial);

    if(valorinicial > 999)  // 3520
    {
        n1 = valorinicial / 1000; //3
        aux = valorinicial % 1000; // 520
        n2 = aux / 100; // 5
        aux = valorinicial % 100; // 20
        n3 = aux / 10; // 2
        n4 = valorinicial % 10; // 0

        soma = ((n1 * 10) + n2) + ((n3 * 10) + n4);
        resultado = pow(soma,2);

        if(resultado == valorinicial)
        {
            printf("Este valor possui esta característica. \n");
        }
        else
        {
            printf("Este valor não possui esta característica. \n");
        }
    }
    else
    {
        printf("Escreva um número maior que 999\n");
    }
}

int ex08(void)
{
    printf("\nExercício 08 \n");
    int codigo;
    printf("Digite o código.");
    scanf("%d", &codigo);
    switch(codigo)
    {
    case 221:
        printf("221 Bernardo\n");
        break;
    case 211:
        printf("211 Eustáquio\n");
        break;
    case 311:
        printf("311 Luiz\n");
        break;
    case 312:
        printf("312 Mário\n");
        break;
    case 332:
        printf("332 Artur\n");
        break;
    }
}

int ex09(void)
{
    printf("\nExercício 09 \n");

    int n1,n2,n3,n4,n5,valorinicial,aux, soma, resultado;
    printf("Digite o valor.\n");
    scanf("%d", &valorinicial);

    if(valorinicial > 9999)  // 12321
    {
        n1 = valorinicial / 10000; //1
        aux = valorinicial % 10000; // 2321
        n2 = aux / 1000; // 2
        aux = valorinicial % 1000; // 321
        n3 = aux / 100; // 3
        aux = valorinicial % 100; // 21
        n4 = aux / 10; // 2
        aux = valorinicial % 10; // 1

        if(n1 == aux && n2 == n4)
        {
            printf("Este valor possui esta característica. \n");
        }
        else
        {
            printf("Este valor não possui esta característica. \n");
        }
    }
    else
    {
        printf("Escreva um número maior que 9999\n");
    }
}

int ex10()
{
    printf("\nExercício 10 \n");

    float m3, resultado;
    int tipo;

    printf("Digite o seu tipo de consumidor: [1]Residencial,[2]Comercial ou [3]Industrial\n");
    scanf("%d", &tipo);
    printf("Digite o tamanho em metros cúbicos.\n");
    scanf("%f", &m3);

    switch(tipo)
    {
    case 1:
        resultado = 75 + (3.5 * m3);
        printf("O valor a ser pago é: %.2f", resultado);
        break;
    case 2:
        if(m3 > 80)
        {
            m3 = m3 - 80;
            resultado = 500 + (5.5 * m3);
            printf("O valor a ser pago é: %.2f", resultado);
            break;
        }
        else
        {
            printf("O valor a ser pago é: %.2f", resultado);
            break;
        }
    case 3:
        if(m3 > 100)
        {
            m3 = m3 - 100;
            resultado = 800 + (8 * m3);
            printf("O valor a ser pago é: %.2f", resultado);
            break;
        }
        else
        {
            printf("O valor a ser pago é: %.2f", resultado);
            break;
        }
    default:
        printf("Escolha uma das 3 opções.\n");
        break;
    }
}

