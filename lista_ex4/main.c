#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int exA();
int exB();
int exC();
int exD();
int exE();
int exF();
int exG();
int exH();
int exI();
int exJ();

int main()
{
    setlocale(LC_ALL, "portuguese");
    exA();
    exB();
    exC();
    exD();
    exE();
    exF();
    exG();
    exH();
    exI();
    exJ();
}

int exA()
{
    printf("Exerc�cio A\n");
    int x;
    printf("Digite um n�mero.\n");
    scanf("%i", &x);
    printf("O sucessor do n�mero �: %i\n", x + 1);
}

int exB()
{
    printf("\nExerc�cio B\n");
    int a, b, c, d, soma;
    double media;

    printf("Digite 4 valores.\n");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);

    soma = a + b + c + d;
    media = soma / 4;

    printf("A m�dia dos n�meros �: %5.2f\n", media);
}

int exC()
{
    printf("\nExerc�cio C\n");
    double nota1, peso1, nota2, peso2, nota3, peso3, media;

    printf("Digite a nota 1 e seu peso: \n");
    scanf("%lf", &nota1);
    scanf("%lf", &peso1);

    printf("Digite a nota 2 e seu peso: \n");
    scanf("%lf", &nota2);
    scanf("%lf", &peso2);

    printf("\nDigite a nota 3 e seu peso: \n");
    scanf("%lf", &nota3);
    scanf("%lf", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 * peso2 * peso3);
    printf("Valor da m�dia: %lf\n", media);
}

int exD()
{
    printf("\nExerc�cio D\n");
    double temperaturaC, temperaturaF;

    printf("Qual temperatura sera convertida? ");
    scanf("%lf", &temperaturaC);

    temperaturaF = 32 + (9 * temperaturaC) / 5;

    printf("\ntemperatura em Fahrenheit = %.2lf\n", temperaturaF);
}

int exE()
{
    printf("\nExerc�cio E\n");
    double salarioInicial, porcentagem, salarioFinal, aumento;

    printf("Qual o salario inicial? \n");
    scanf("%lf", &salarioInicial);

    printf("Qual o aumento percentual? \n");
    scanf("%lf", &porcentagem);

    aumento = (porcentagem * salarioInicial) / 100;

    salarioFinal = aumento + salarioInicial;

    printf("Salario final  = %.2lf\n", salarioFinal);
}

int exF()
{
    printf("\nExerc�cio F\n");
    double base, altura, area;

    printf("digite o valor da base do triangulo: \n");
    scanf("%lf", &base);
    printf("digite o valor da altura do triangulo: \n");
    scanf("%lf", &altura);

    area = (base * altura) / 2;

    printf("Area = %.2lf\n", area);
}

int exG()
{
    printf("\nExerc�cio G\n");
    double pesoSaco, quantidade, restante;

    printf("Quantidade de racao em gramas do saco comprado: \n");
    scanf("%lf", &pesoSaco);

    printf("Quantidade de racao para cada gato por dia:\n ");
    scanf("%lf", &quantidade);

    restante = pesoSaco - (quantidade * 2 * 5);

    printf("Quantidade de gramas de racao apos 5 dias = %.2lf\n", restante);
}

int exH()
{
    printf("\nExerc�cio H\n");
    int a, b, troca;

    printf("Digite dois numeros e a ordem sera invertida: \n");
    scanf("%d", &a);
    scanf("%d", &b);

    troca = a;
    a = b;
    b = troca;

    printf("\n%d", a);
    printf("\n%d\n", b);

    return 0;
}

int exI()
{
    printf("\nExerc�cio I\n");
    int numero;

    printf("Escolha um numero para descobrir o resto da divisao dele por 7: \n");
    scanf("%d", &numero);

    printf("resto da divisao por 7 = %d\n", numero % 7);
}

int exJ()
{
    printf("\nExerc�cio J\n");
    int a1, a2, razao, soma, an, quantidade;

    printf("Digite o primeiro termo da PA: \n");
    scanf("%d", &a1);
    printf("Digite o segundo termo da PA: \n");
    scanf("%d", &a2);
    printf("Digite a quantidade de termos da PA: \n");
    scanf("%d", &quantidade);

    razao = a2 - a1;

    an = a1 + (quantidade - 1) * razao;

    soma = quantidade * (a1 + an) / 2;

    printf("Soma dos valores da PA = %d\n", soma);

    return 0;
}