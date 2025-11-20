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

    //Declaração das Variáveis do Menu
    int main_menu;
    int data_submenu;
    int comp_submenu;

    //Declaração das Variáveis do Resultado
    char res_1[20], res_2[20]

    printf("DESAFIO SUPER TRUNFO EM C\n");
    printf("----------------------------");

    do
    {
        //Menu
        printf("\n\nSELECIONE UMA OPÇÃO:\n");
        printf("----------------------------\n\n");
        printf("1. Inserir Dados das Cartas\n");
        printf("2. Comparar Dados\n");
        printf("3. Exibir Cartas\n");
        printf("4. Sair\n\n");
        printf("----------------------------\n\n");
        scanf("%d", &main_menu);


        switch (main_menu)
        {
        case 1:
            printf("\n\nSELECIONE A CARTA PARA INSERIR OS DADOS:\n");
            printf("----------------------------\n\n");
            printf("1. Carta 1\n");
            printf("2. Carta 2\n");
            printf("3. Voltar ao Menu Anterior\n\n");
            printf("----------------------------\n\n");


            do
            {
                scanf("%d", &data_submenu);

                switch (data_submenu)
                {
                case 1:
                    //Coleta de Informações - Carta 1
                    printf("POR FAVOR INSIRA AS INFORMAÇÕES DA CARTA 1\n\n");
                    printf("----------------------------\n\n");

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
                    
                    //Cálculo das Informações - Carta 1
                    popl_dens_1 = (float) popl_1 / area_size_1;
                    pib_pcap_1 = (float) pib_1 / popl_1;
                    spower_1 = (float) popl_1 + area_size_1 + pib_1 + (float) tour_att_1 + popl_dens_1 + pib_pcap_1;
                    
                    printf("\n\nDados Armazenados com sucesso!\n");

                    printf("\n\nSELECIONE A CARTA PARA INSERIR OS DADOS:\n");
                    printf("----------------------------\n\n");
                    printf("1. Carta 1\n");
                    printf("2. Carta 2\n");
                    printf("3. Voltar ao Menu Anterior\n\n");
                    printf("----------------------------\n\n");

                break;
                case 2:
                    //Coleta de Informações - Carta 2
                    printf("\n\nPOR FAVOR INSIRA AS INFORMAÇÕES DA CARTA 2\n");
                    printf("----------------------------\n\n");

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

                    //Cálculo das Informações - Carta 2
                    popl_dens_2 = (float) popl_2 / area_size_2;
                    pib_pcap_2 = (float) pib_2 / popl_2;
                    spower_2 = (float) popl_2 + area_size_2 + pib_2 + (float) tour_att_2 + popl_dens_2 + pib_pcap_2;


                    printf("\n\nDados Armazenados com sucesso!\n");

                    printf("\n\nSELECIONE A CARTA PARA INSERIR OS DADOS:\n");
                    printf("----------------------------\n\n");
                    printf("1. Carta 1\n");
                    printf("2. Carta 2\n");
                    printf("3. Voltar ao Menu Anterior\n\n");
                    printf("----------------------------\n\n");

                break;

                case 3:
                break;

                default:
                printf("\nOpção Inválida!!!\n");
                printf("\n\nSELECIONE A CARTA PARA INSERIR OS DADOS:\n");
                printf("----------------------------\n\n");
                printf("1. Carta 1\n");
                printf("2. Carta 2\n");
                printf("3. Voltar ao Menu Anterior\n\n");
                printf("----------------------------\n\n");

                break;
                }
                
            } while (data_submenu != 3);
                            
        break;

        case 2:
            printf("\n\nSELECIONE O DADO QUE DESEJA COMPARAR:\n");
            printf("----------------------------\n\n");
            printf("1. Código\n");
            printf("2. Estado\n");
            printf("3. Cidade\n");
            printf("4. População da Cidade\n");
            printf("5. Área da Cidade\n");
            printf("6. PIB da Cidade\n");        
            printf("7. Quantidade de Pontos Turísticos da Cidade\n");
            printf("8. Densidade Populacional\n");
            printf("9. PIB per Capita\n");
            printf("10. Super Poder\n");
            printf("11. Voltar ao Menu Anterior\n");
            printf("----------------------------\n\n");


            do
            {
                scanf("%d", &comp_submenu);

                switch (comp_submenu)
                {
                case 1:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
                    printf("Código:\n");
                    printf("Carta 1 - %s\n", id_1); 
                    printf("Carta 2 - %s\n", id_2);
                    printf("----------------------------\n\n");

                break;

                case 2:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
                    printf("Estado:\n");
                    printf("Carta 1 - %s\n", state_name_1); 
                    printf("Carta 2 - %s\n", state_name_2);
                    printf("----------------------------\n\n");


                break;
                
                case 3:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
                    printf("Cidade:\n");
                    printf("Carta 1 - %s\n", city_name_1); 
                    printf("Carta 2 - %s\n", city_name_2);
                    printf("----------------------------\n\n");
                    

                break;        

                case 4:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
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
                    

                break;

                case 5:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
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


                break;   
                
                case 6:       
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
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


                break;    

                case 7:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
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
                    //CÓDIGO DE REPETIR O MENU

                break;

                case 8:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
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
                    //CÓDIGO DE REPETIR O MENU

                break;     
                
                case 9:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
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
                    //CÓDIGO DE REPETIR O MENU

                break;
                
                case 10:
                    printf("\nCOMPARAÇÃO DAS CARTAS\n");
                    printf("----------------------------\n\n");
                    printf("Super Poder:\n");
                    printf("Carta 1 - %.2f\n", spower_1);
                    printf("Carta 2 - %.2f\n", spower_2);

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

                break;

                case 11:
                break;

                default:
                    printf("\nOpção Inválida!!!\n");
                    printf("\n\nSELECIONE O DADO QUE DESEJA COMPARAR:\n");
                    printf("----------------------------\n\n");
                    printf("1. Código\n");
                    printf("2. Estado\n");
                    printf("3. Cidade\n");
                    printf("4. População da Cidade\n");
                    printf("5. Área da Cidade\n");
                    printf("6. PIB da Cidade\n");        
                    printf("7. Quantidade de Pontos Turísticos da Cidade\n");
                    printf("8. Densidade Populacional\n");
                    printf("9. PIB per Capita\n");
                    printf("10. Super Poder\n");
                    printf("11. Voltar ao Menu Anterior\n");
                    printf("----------------------------\n\n");
                break;

                }
            
            } while (comp_submenu != 11);

        break;

        case 3:
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
            
            printf("\n\nSELECIONE UMA OPÇÃO:\n");
            printf("----------------------------\n\n");
            printf("1. Inserir Dados das Cartas\n");
            printf("2. Comparar Dados\n");
            printf("3. Exibir Cartas\n");
            printf("4. Sair\n\n");
            printf("----------------------------\n\n");

        break;

        case 4:
        break;
        
        default:
        printf("\nOpção Inválida!!!\n");

        printf("\n\nSELECIONE UMA OPÇÃO:\n");
        printf("----------------------------\n\n");
        printf("1. Inserir Dados das Cartas\n");
        printf("2. Comparar Dados\n");
        printf("3. Exibir Cartas\n");
        printf("4. Sair\n\n");
        printf("----------------------------\n\n");

        break;

    }

    } while (main_menu != 4);
    
    return 0;
}
