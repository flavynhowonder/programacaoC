#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    // DADOS DA CARTA 1

    char Estado1[50];               // Armazenar o nome do estado 1
    char codigo_carta1[10];         // Armazenar o código da carta 1
    char nome_cidade1[50];          // Armazenar o nome da cidade 1
    int populacao1;                 // Armazenar a população 1
    float area1;                    // Armazenar a área em km² 1
    float PIB1;                     // Armazenar o PIB 1
    int numero_de_pontos_turisticos1; // Armazenar o número de pontos turísticos 1
    
    // DADOS DA CARTA 2
    
    char Estado2[50];               // Armazenar o nome do estado 2
    char codigo_carta2[10];         // Armazenar o código da carta 2
    char nome_cidade2[50];          // Armazenar o nome da cidade 2
    int populacao2;                 // Armazenar a população 2
    float area2;                    // Armazenar a área em km² 2
    float PIB2;                     // Armazenar o PIB 2
    int numero_de_pontos_turisticos2; // Armazenar o número de pontos turísticos 2
    
    // Abaixo código imprimir a mensagem para salvar os dados digitados
    
    // CARTA 01
    
    printf("Digite o Estado: \n");
    scanf("%s", Estado1);
    
    printf("Digite o Código da carta: Ex: A01, B03: \n");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: \n");
    getchar();  // Para limpar o '\n' do buffer (caso tenha ficado após o último scanf)
    scanf("%[^\n]", nome_cidade1);  // Lê até o caractere de nova linha (ou seja, até o Enter)
    
    printf("Digite a População: \n");
    scanf("%d", &populacao1);  // Usando %d e o operador & para ler inteiro
    
    printf("Digite a Área em km²: \n");
    scanf("%f", &area1);  // Usando %f e o operador & para ler número float
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);  // Usando %f para ler número float
    
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);  // Usando %d e o operador & para ler inteiro
    
    // CARTA 02

    printf("Digite o Estado: \n");
    scanf("%s", Estado2);
    
    printf("Digite o Código da carta: Ex: A01, B03: \n");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: \n");
    getchar();  // Para limpar o '\n' do buffer (caso tenha ficado após o último scanf)
    scanf("%[^\n]", nome_cidade2);  // Lê até o caractere de nova linha (ou seja, até o Enter)
    
    printf("Digite a População: \n");
    scanf("%d", &populacao2);  // Usando %d e o operador & para ler inteiro
    
    printf("Digite a Área em km²: \n");
    scanf("%f", &area2);  // Usando %f e o operador & para ler número float
    
    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);  // Usando %f para ler número float
    
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);  // Usando %d e o operador & para ler inteiro
    
    // Imprime o que foi digitado
    
    printf("\n\n");
    printf("DADOS DA CARTA 01\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);  // Usando %d para imprimir inteiro
    printf("Área em km²: %.2f km²\n", area1);  // Usando %.2f para imprimir float com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", PIB1);  // Usando %.2f para imprimir float com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n\n", numero_de_pontos_turisticos1);  // Usando %d para imprimir inteiro

    printf("DADOS DA CARTA 02\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);  // Usando %d para imprimir inteiro
    printf("Área em km²: %.2f km²\n", area2);  // Usando %.2f para imprimir float com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", PIB2);  // Usando %.2f para imprimir float com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);  // Usando %d para imprimir inteiro
    
    /*
    %d: Imprime um inteiro no formato decimal.
 
    %i: Equivalente a %d.
 
    %f: Imprime um número de ponto flutuante no formato padrão.
 
    %e: Imprime um número de ponto flutuante na notação científica.
 
    %c: Imprime um único caractere.
 
    %s: Imprime uma cadeia (string) de caracteres.
    */
    
    return 0;
}
