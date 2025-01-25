#include <stdio.h>

int main(){


    int populacao, pontoturistico;
    float area, pib;
    char estado, cidade[20], codigo[4];
        
		
    printf("Digite o estado: ");
    scanf("%c", &estado);

    printf("Digite o código da carta: ");
    scanf("%s", &codigo);
		
	printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico);


	printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontoturistico);
        
    return 0;
    

    }