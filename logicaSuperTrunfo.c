#include <stdio.h>
#include <string.h>

int main() {

    //Declaração das Variáveis - Carta 1
    char id_1[20], state_name_1[20], city_name_1[20];
    unsigned long int popl_1;
    float area_size_1, pib_1, popl_dens_1, pib_pcap_1, spower_1;
    int tour_att_1;


    //Declaração das Variáveis - Carta 2
    char id_2[20], state_name_2[20], city_name_2[20];
    unsigned long int popl_2;
    float area_size_2, pib_2, popl_dens_2, pib_pcap_2, spower_2;
    int tour_att_2;


    //Menu
    printf("DESAFIO SUPER TRUNFO EM C\n");
    printf("----------------------------\n\n");

    //Coleta de Informações - Carta 1
    printf("POR FAVOR INSIRA AS INFORMAÇÕES DA CARTA 1\n\n");

    printf("Digite o Código da Carta:\n");
    scanf("%s", id_1);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite o Nome do Estado:\n");
    fgets(state_name_1, sizeof(state_name_1), stdin);
    state_name_1[strcspn(state_name_1, "\n")] = '\0'; // <-- Faz o tratamento da String para procurar o "\n" (do Enter) e substituir por "\0" (Vazio)

    printf("\nDigite o Nome da Cidade:\n");
    fgets(city_name_1, sizeof(city_name_1), stdin);
    city_name_1[strcspn(city_name_1, "\n")] = '\0'; // <-- Faz o tratamento da String para procurar o "\n" (do Enter) e substituir por "\0" (Vazio)

    printf("\nDigite a População da Cidade:\n");
    scanf("%ld", &popl_1);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite a Área em Km² da Cidade:\n");
    scanf("%f", &area_size_1);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite o PIB da Cidade:\n");
    scanf("%f", &pib_1);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite a quantidade de Pontos Turísticos da Cidade:\n");
    scanf("%d", &tour_att_1);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"


    //Coleta de Informações - Carta 2
    printf("\n\nPOR FAVOR INSIRA AS INFORMAÇÕES DA CARTA 2\n\n");

    printf("Digite o Código da Carta:\n");
    scanf("%s", id_2);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite o Nome do Estado:\n");
    fgets(state_name_2, sizeof(state_name_2), stdin);
    state_name_2[strcspn(state_name_2, "\n")] = '\0'; // <-- Faz o tratamento da String para procurar o "\n" (do Enter) e substituir por "\0" (Vazio)

    printf("\nDigite o Nome da Cidade:\n");
    fgets(city_name_2, sizeof(city_name_2), stdin);
    city_name_2[strcspn(city_name_2, "\n")] = '\0'; // <-- Faz o tratamento da String para procurar o "\n" (do Enter) e substituir por "\0" (Vazio)


    printf("\nDigite a População da Cidade:\n");
    scanf("%ld", &popl_2);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite a Área em Km² da Cidade:\n");
    scanf("%f", &area_size_2);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite o PIB da Cidade:\n");
    scanf("%f", &pib_2);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"

    printf("\nDigite a quantidade de Pontos Turísticos da Cidade:\n");
    scanf("%d", &tour_att_2);
    while (getchar() != '\n'); // <-- Limpa o Buffer, pois o ScanF armazena o "Enter" e entende como "\n"


    //Cálculo das Informações - Carta 1
    popl_dens_1 = (float) popl_1 / area_size_1;
    pib_pcap_1 = (float) pib_1 / popl_1;
    spower_1 = (float) popl_1 + area_size_1 + pib_1 + (float) tour_att_1 + popl_dens_1 + pib_pcap_1;
   
    //Cálculo das Informações - Carta 2
    popl_dens_2 = (float) popl_2 / area_size_2;
    pib_pcap_2 = (float) pib_2 / popl_2;
    spower_2 = (float) popl_2 + area_size_2 + pib_2 + (float) tour_att_2 + popl_dens_2 + pib_pcap_2;


    //Exibição das Informações - Carta 1
    printf("\n\nCARTA 1\n");
    printf("----------------------------\n");
    printf("Código: %s\n", id_1);
    printf("Estado: %s\n", state_name_1); 
    printf("Cidade: %s\n", city_name_1);
    printf("População da Cidade: %ld\n", popl_1);
    printf("Área da Cidade: %.2f", area_size_1); printf(" Km²\n");
    printf("PIB da Cidade: %.2f", pib_1); printf(" Bilhões de Reais\n");
    printf("Quantidade de Pontos Turísticos da Cidade: %d\n", tour_att_1);
    printf("Densidade Populacional: %.2f", popl_dens_1); printf(" Hab/Km²\n");
    printf("PIB per Capita: %.2f", pib_pcap_1); printf(" Reais\n");
    printf("Super Poder: %.2f\n\n", spower_1); 


    //Exibição das Informações - Carta 2
    printf("\n\nCARTA 2\n");
    printf("----------------------------\n");
    printf("Código: %s\n", id_2);
    printf("Estado: %s\n", state_name_2); 
    printf("Cidade: %s\n", city_name_2);
    printf("População da Cidade: %ld\n", popl_2);
    printf("Área da Cidade: %.2f", area_size_2); printf(" Km²\n");
    printf("PIB da Cidade: %.2f", pib_2); printf(" Bilhões de Reais\n");
    printf("Quantidade de Pontos Turísticos da Cidade: %d", tour_att_2);
    printf("Densidade Populacional: %.2f", popl_dens_2); printf(" Hab/Km²\n");
    printf("PIB per Capita: %.2f", pib_pcap_2); printf(" Reais\n");
    printf("Super Poder: %.2f\n\n", spower_2); 


    //Comparação das Cartas
    printf("\nCOMPARAÇÃO DAS CARTAS\n");
    printf("----------------------------\n");

    printf("População da Cidade:\n");
    printf("Carta 1 - %ld\n", popl_1); 
    printf("Carta 2 - %ld\n", popl_2);

    if(popl_1 > popl_2){
        printf("Resultado: Carta 1 venceu!\n");
    }
    else {
        if(popl_1 < popl_2){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n");

    printf("Área da Cidade:\n");
    printf("Carta 1 - %.2f", area_size_1); printf(" Km²\n");
    printf("Carta 2 - %.2f", area_size_2); printf(" Km²\n");

    if(area_size_1 > area_size_2){
        printf("Resultado: Carta 1 venceu!\n");
    }
    else {
        if(area_size_1 < area_size_2){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n");

    printf("PIB da Cidade:\n");
    printf("Carta 1 - %.2f", pib_1); printf(" Bilhões de Reais\n");
    printf("Carta 2 - %.2f", pib_2); printf(" Bilhões de Reais\n");

    if(pib_1 > pib_2){
        printf("Resultado: Carta 1 venceu!\n");
    }
    else {
        if(pib_1 < pib_2){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n");
    
    printf("Quantidade de Pontos Turísticos da Cidade:\n");
    printf("Carta 1 - %d\n", tour_att_1);
    printf("Carta 2 - %d\n", tour_att_2);

    if(tour_att_1 > tour_att_2){
        printf("Resultado: Carta 1 venceu!\n");
    }
    else {
        if(tour_att_1 < tour_att_2){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n");
        
    printf("Densidade Populacional:\n");
    printf("Carta 1 - %.2f", popl_dens_1); printf(" Hab/Km²\n");
    printf("Carta 2 - %.2f", popl_dens_2); printf(" Hab/Km²\n");

    if(popl_dens_1 > popl_dens_2){
        printf("Resultado: Carta 2 venceu!\n");
    }
    else {
        if(popl_dens_1 < popl_dens_2){
            printf("Resultado: Carta 1 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n");

    printf("PIB per Capita:\n");
    printf("Carta 1 - %.2f", pib_pcap_1); printf(" Reais\n");
    printf("Carta 2 - %.2f", pib_pcap_2); printf(" Reais\n");

    if(pib_pcap_1 > pib_pcap_2){
        printf("Resultado: Carta 1 venceu!\n");
    }
    else {
        if(pib_pcap_1 < pib_pcap_2){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n");
    
    printf("Super Poder:\n");
    printf("Carta 1 - %.2f\n", spower_1);
    printf("Carta 1 - %.2f\n", spower_2);

    if(spower_1 > spower_2){
        printf("Resultado: Carta 1 venceu!\n");
    }
    else {
        if(spower_1 < spower_2){
            printf("Resultado: Carta 2 venceu!\n");
        }
        else{
            printf("Resultado: Empate!\n");
        }
    };

    printf("----------------------------\n\n");
 
    return 0;
}
