#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // variaveis da carta 1
    char Estado1 = "A";
    char Codigodacarta1[4] = "A01";
    char Nomedacidade1[10] = "Sãopaulo";
    int População1 = 12325000;
    float Area1 = 1521.11;
    float PIB1 = 699.28;
    int Numeropt1 = 50;
    // variaveis da carta 2
    char Estado2 = "B";
    char Codigodacarta2[4] = "B02";
    char Nomedacidade2[20] = "RiodeJaneiro";
    int População2 = 6748000;
    float Area2 = 1200.25;
    float PIB2 = 300.50;
    int Numeropt2 = 30;

    printf("Estado :%s \n", Estado1);
    printf("Código da carta : %s\n", Codigodacarta1);
    printf("Nome da Cidade : %s\n", Nomedacidade1);
    printf("População : %d\n", População1);
    printf("Área : %f \n", Area1);
    printf("PIB : %f\n", PIB1);
    printf("Número de Pontos turísticos : %d\n", Numeropt2);

    printf("Estado :%s \n", Estado2);
    printf("Código da carta : %s\n", Codigodacarta2);
    printf("Nome da Cidade : %s\n", Nomedacidade2);
    printf("População : %d\n", População2);
    printf("Área : %f \n", Area2);
    printf("PIB : %f\n", PIB2);
    printf("Número de Pontos turísticos : %d\n", Numeropt2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
