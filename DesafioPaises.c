#include <stdio.h>

int main(){


        int populacao;
        float area;
        char estado, cidade[20];
        char codigo[3];
        
		
		
        printf("Digite o estado: ");
        scanf("%c", &estado);

        printf("Digite o código da carta: ");
        scanf("%s", &codigo);
		
		printf("Digite o nome da cidade: ");
        scanf("%s", &cidade);

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área: ");
        scanf("%d", &area);

		printf("Estado: %c\n", estado);
        printf("Código da Carta: %s\n", codigo);
        printf("Nome da Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        
        

        return 0;
    



    }