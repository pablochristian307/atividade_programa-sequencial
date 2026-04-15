#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "funcoes.h"

int main() {
    int escolha;

    setlocale(LC_ALL, "pt_BR.UTF-8");

    do {
        printf("\n\n--- MENU DE EXERCíCIOS ---\n\n");
        printf("1  - Maior de dois numeros\n");
        printf("2  - Positivo ou Negativo\n");
        printf("3  - F ou M\n");
        printf("4  - Vogal ou Consoante\n");
        printf("5  - Media do Aluno\n");
        printf("6  - Maior de três numeros\n");
        printf("7  - Maior e Menor de três\n");
        printf("8  - Comprar o mais barato\n");
        printf("9  - Ordem Decrescente\n");
        printf("10 - Turno de Estudo\n");
        printf("11 - Reajuste Salarial\n");
        printf("12 - Folha de Pagamento\n");
        printf("13 - Dias da Semana\n");
        printf("14 - Conceito das Médias\n");
        printf("0  - Sair\n");
        printf("\nEscolha a questao:\n>>> ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
            {
                int a, b; 
                printf("\nDigite dois valores:\n");
                scanf("%d %d", &a, &b);
                questao01(a, b); 
            }
                break;
            case 2:
            {
                int num;
                printf("Escolha um número aleatório:\n>>> ");
                scanf("%d", &num); 
                questao02(num);
            } 
                break;
            case 3: 
            {
                char sexo;

                printf("\nDigite a inicial do seu sexo:\nM - Masculino\nF - Feminino\n\n>>> ");
                scanf("%c", &sexo);

                questao03(sexo);
            } 
                break;
            case 4: 
            {   
                char letra;

                printf("Digite uma letra(sem acento):\n>>> ");
                scanf("%c", &letra);

                if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
                    questao04(letra);
                } 
                else {
                    printf("Letra inválida...\n");    
                }
            } 
                break;
            case 5: 
            {
                int n1, n2, i = 1;

                do {
                    printf("Digite as suas notas:\n");
                    scanf("%d %d", &n1, &n2);

                    if ((n1 >= 0 && n1<= 10) && (n2 >= 0 && n2 <=10)) {
                        questao05(n1, n2);
                        i = 0;
                    } else {
                        printf("Notas inválidas...\n");
                    }
                } while (i != 0);
            } 
                break;
            case 6: 
            {
                int a, b, c;

                printf("Digite três valores:\n");
                scanf("%d %d %d", &a, &b, &c);

                questao06(a, b, c);
            } 
                break;
            case 7: 
            {
                int a, b, c;
                printf("Digite três valores:\n");
                scanf("%d %d %d", &a, &b, &c);

                questao07(a, b, c);
            } 
                break;
            case 8: 
            {
                float produto1, produto2, produto3;

                printf("Fornecça o preço dos produtos:\n");
                scanf("%f %f %f", &produto1, &produto2, &produto3);

                questao08(produto1, produto2, produto3);
            } 
                break;
            case 9: 
            {
                int num1, num2, num3;

                printf("Digite três números:\n");
                scanf("%d %d %d", &num1, &num2, &num3);

                questao09(num1, num2, num3);
            } 
                break;
            case 10: 
            {
                char turno;

                printf("Informe seu turno:\n\nM - Manhã\nV - Vespertino\nN - Noturno\n\n>>> ");
                scanf("%c", &turno);

                questao10(turno);
            } 
                break;
            case 11: 
            {
                float salario_atual;

                printf("Informe seu salário:\n\n>>> ");
                scanf("%f", &salario_atual);

                questao11(salario_atual);
            } 
                break;
            case 12: 
            {
                float valor_hora, horas_trabalhadas;

                printf("Informe o valor da sua hora/trabalho:\n\n>>> ");
                scanf("%f", &valor_hora);
                printf("Informe a quantidade de horas trabalhadas no mês:\n\n>>> ");
                scanf("%f", &horas_trabalhadas);

                questao12(valor_hora, horas_trabalhadas);
            } 
                break;
            case 13: 
            {
                int dia;

                printf("Digite um número:\n1 - Domingo\n2 - Segunda\n3 - Terça\n4 - Quarta\n5 - Quinta\n6 - Sexta\n7 - Sábado\n\n>>> ");
                scanf("%d", &dia);

                questao13(dia);
            }
                break;
            case 14: 
            {
                float n1, n2; 
                int i = 1;

                do {
                    printf("Digite as suas notas parciais:\n");
                    scanf("%f %f", &n1, &n2);

                    if ((n1 >= 0 && n1<= 10) && (n2 >= 0 && n2 <=10)) {
                        questao14(n1, n2);
                        i = 0;
                    } else {
                        printf("Notas inválidas...\n");
                    }
                } while (i != 0);
            }  
                break;
            case 0: printf("\nSaindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }

    } while (escolha != 0);

    return 0;
}
