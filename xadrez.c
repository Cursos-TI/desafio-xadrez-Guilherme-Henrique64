#include <stdio.h>

void movimentoBispo (bispo){
    for (bispo = 0; bispo < 5; bispo++){
        printf("Cima\n");
        printf("Direita\n");    
    }
}

void movimentoTorre (torre){
    for (torre = 0; torre < 5; torre++){
        printf("Direita ");
    }
}

void movimentoRainha (rainha){
    for (rainha = 0; rainha < 8; rainha++){
        printf("Esquerda ");
    }
}

void movimentoCavalo (cavalo, cavalo2){
    for (cavalo = 0; cavalo < 1; cavalo++){
        printf("    Direita \n");
        for (cavalo2 = 0; cavalo2 < 2; cavalo2++){           
            printf("Cima\n");
    }   }
}

int main() {
    int opcao, opcao2 = -1;
    int bispoo, torree, rainhaa, cavaloo;


    printf("       ==============================================\n");
    printf("        ### Bem vindo ao jogo Xadrez - MateCheck ###\n");
    printf("            ====================================\n\n");



    printf("Escolha uma opção:\n");
    printf("1. Jogar\n");
    printf("2. Sair\n");
    printf("Digite: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\n      Você escolheu jogar!");
        while (opcao2 != 0){
            printf("\nEscolha qual peça deseja mover:\n");
    
            printf("1. Bispo\n");
            printf("2. Torre\n");
            printf("3. Rainha\n");
            printf("4. Cavalo\n");
            printf("Ou digite 0 para sair!\n");
            printf("Digite: ");
            scanf("%d", &opcao2);
            printf("\n");
            
            switch (opcao2) {
                case 1:
                printf("Você escolheu mover o Bispo!\n");
                movimentoBispo(bispoo);
                    break;
                case 2:
                    printf("Você escolheu mover a Torre!\n");
                    movimentoTorre(torree);
                    printf("\n");
                    break;
                case 3:
                    printf("Você escolheu mover a Rainha!\n");
                    movimentoRainha(rainhaa);
                    printf("\n");
                    break;
                case 4:
                    printf("Você escolheu mover o Cavalo!\n");
                    movimentoCavalo(cavaloo);
                    break;
                    printf("\n");
                    
                case 0:
                    printf("Saindo...\n\n");
                    return 0;
                    break;
                default:
                    printf("Opção inválida!\n");
                    break;
            }
    
    }
    }else if (opcao == 2) {
        printf("Saindo...!\n");
    }else {
        printf("Opção inválida!\n");
    }
    
    


    printf("\n");
    printf("\n");

    return 0;
}



    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.