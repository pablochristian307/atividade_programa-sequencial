#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void questao01(int a, int b) {
    if (a > b) {
        printf(">>> %d é o maior valor!\n\n", a);
    }
    else if (a < b) {
        printf(">>> %d é o maior valor!\n\n", b);
    }
    else {
        printf(">>> Os valores digitados são iguais...\n\n");
    }
}

void questao02(int a) {
    if (a > 0) {
        printf("Número postivo!");
    }
    else if (a < 0) {
        printf("Número negativo!");
    }
    else {
        printf("Número neutro(0)!");
    }
}

void questao03(char a) {
    switch (a)
    {
    case 'F':
        printf("Sexo feminino!");
        break;
    case 'f':
        printf("Sexo feminino!");
        break;
    case 'M':
        printf("Sexo masculino!");
        break;
    case 'm':
        printf("Sexo masculino!");
        break;
    default:
        printf("Sexo inválido...");
        break;
    }

}

void questao04(char a){
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("A letra digitada é uma vogal!");
    } else {
        printf("A letra digitada é uma consoante!");
    }
}

void questao05(float a, float b){
    float media = (a+b)/2.0;

    if (media < 7) {
        printf("Aluno reprovado!");
    }
    else if (media > 7) {
        if (media == 10) {
            printf("Aluno aprovado com distinção!");
        } else {
            printf("Aluno aprovado!");
        }
    }
}

void questao06(int a, int b, int c) {
    if (a == b && b == c) {
        printf(">>> Os valores digitados são iguais...\n\n");
    }
    else if (a > b && a > c) {
        printf(">>> %d é o maior valor!\n\n", a);
    }
    else if (b > a && b > c) {
        printf(">>> %d é o maior valor!\n\n", b);
    }
    else {
        printf(">>> %d é o maior valor!\n\n", c);
    }
}

void questao07(int a, int b, int c) {
    int maior = a;
    int menor = a;
    
    if (a == b && b == c) {
        printf("Todos os números são iguais...\n");
        return;
    }

    if (b > maior) maior = b;
    if (c > maior) maior = c;
    if (b < menor) menor = b;
    if (c < menor) menor = c;

    printf("Maior valor é: %d\nMenor valor é: %d\n", maior, menor);
}

void questao08(float p1, float p2, float p3) {
    if (p1 <= p2 && p1 <= p3) {
        printf("Você deve comprar o primeiro produto.\n");
    } else if (p2 <= p1 && p2 <= p3) {
        printf("Você deve comprar o segundo produto.\n");
    } else {
        printf("Você deve comprar o terceiro produto.\n");
    }
}

void questao09(int a, int b, int c) {
    int maior, meio, menor;

    if (a >= b && a >= c) {
        maior = a;
        if (b >= c) { meio = b; menor = c; }
        else { meio = c; menor = b; }
    } else if (b >= a && b >= c) {
        maior = b;
        if (a >= c) { meio = a; menor = c; }
        else { meio = c; menor = a; }
    } else {
        maior = c;
        if (a >= b) { meio = a; menor = b; }
        else { meio = b; menor = a; }
    }
    printf("%d, %d, %d\n", maior, meio, menor);
}

void questao10(char turno) {
    if (turno == 'M' || turno == 'm') printf("Bom Dia!\n");
    else if (turno == 'V' || turno == 'v') printf("Boa Tarde!\n");
    else if (turno == 'N' || turno == 'n') printf("Boa Noite!\n");
    else printf("Valor Inválido!\n");
}

void questao11(float salario_atual) {
    float percentual, aumento, novo_salario;

    if (salario_atual <= 280.0) percentual = 20;
    else if (salario_atual <= 700.0) percentual = 15;
    else if (salario_atual <= 1500.0) percentual = 10;
    else percentual = 5;

    aumento = salario_atual * (percentual / 100);
    novo_salario = salario_atual + aumento;

    printf("Salário antes: R$ %.2f\n", salario_atual);
    printf("Percentual: %.0f%%\n", percentual);
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novo_salario);
}

void questao12(float valor_hora, float horas_trabalhadas) {
    float bruto = valor_hora * horas_trabalhadas;
    float ir_percentual, ir_valor, inss, fgts, total_descontos, liquido;

    if (bruto <= 900) ir_percentual = 0;
    else if (bruto <= 1500) ir_percentual = 5;
    else if (bruto <= 2500) ir_percentual = 10;
    else ir_percentual = 20;

    ir_valor = bruto * (ir_percentual / 100);
    inss = bruto * 0.10;
    fgts = bruto * 0.11;
    total_descontos = ir_valor + inss;
    liquido = bruto - total_descontos;

    printf("Salário Bruto: (%.2f * %.2f) : R$ %.2f\n", valor_hora, horas_trabalhadas, bruto);
    printf("(-) IR (%.0f%%) : R$ %.2f\n", ir_percentual, ir_valor);
    printf("(-) INSS (10%%) : R$ %.2f\n", inss);
    printf("FGTS (11%%) : R$ %.2f\n", fgts);
    printf("Total de descontos : R$ %.2f\n", total_descontos);
    printf("Salário Liquido : R$ %.2f\n", liquido);
}

void questao13(int dia) {
    switch(dia) {
        case 1: printf("1-Domingo\n"); break;
        case 2: printf("2-Segunda\n"); break;
        case 3: printf("3-Terça\n"); break;
        case 4: printf("4-Quarta\n"); break;
        case 5: printf("5-Quinta\n"); break;
        case 6: printf("6-Sexta\n"); break;
        case 7: printf("7-Sábado\n"); break;
        default: printf("Valor inválido\n");
    }
}

void questao14(float n1, float n2) {
    float media = (n1 + n2) / 2.0;
    char conceito;

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.5) {
        conceito = 'B';
    } else if (media >= 6.0) {
        conceito = 'C';
    } else if (media >= 4.0) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("Notas: %.1f e %.1f\n", n1, n2);
    printf("Média: %.1f\n", media);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("SITUAÇÃO: APROVADO\n");
    } else {
        printf("SITUAÇÃO: REPROVADO\n");
    }
}

/*
1. Faça um Programa que peça dois números e imprima o maior deles.
2. Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.
3. Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino,
M - Masculino, Sexo Inválido.
4. Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
5. Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
o A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
o A mensagem "Reprovado", se a média for menor do que sete;
o A mensagem "Aprovado com Distinção", se a média for igual a dez.
6. Faça um Programa que leia três números e mostre o maior deles.
7. Faça um Programa que leia três números e mostre o maior e o menor deles.
8. Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar,
sabendo que a decisão é sempre pelo mais barato.
9. Faça um Programa que leia três números e mostre-os em ordem decrescente.
10. Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino
ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme
o caso.
11. As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe contraram
para desenvolver o programa que calculará os reajustes.
o Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério,
baseado no salário atual:
o salários até R$ 280,00 (incluindo) : aumento de 20%
o salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
o salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
o salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
o o salário antes do reajuste;
o o percentual de aumento aplicado;
o o valor do aumento;
o o novo salário, após o aumento.
12. Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto
de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS
corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita). O Salário Líquido
corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora
e a quantidade de horas trabalhadas no mês.
o Desconto do IR:
o Salário Bruto até 900 (inclusive) - isento
o Salário Bruto até 1500 (inclusive) - desconto de 5%
o Salário Bruto até 2500 (inclusive) - desconto de 10%
o Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações, dispostas conforme
o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220.
o Salário Bruto: (5 * 220) : R$ 1100,00
o (-) IR (5%) : R$ 55,00
o (-) INSS ( 10%) : R$ 110,00
o FGTS (11%) : R$ 121,00
o Total de descontos : R$ 165,00
Salário Liquido : R$ 935,00

13. Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda,
etc.), se digitar outro valor deve aparecer valor inválido.
14. Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um
semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
o Média de Aproveitamento Conceito
o Entre 9.0 e 10.0 A
o Entre 7.5 e 9.0 B
o Entre 6.0 e 7.5 C
o Entre 4.0 e 6.0 D
o Entre 4.0 e zero E
O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem*/
