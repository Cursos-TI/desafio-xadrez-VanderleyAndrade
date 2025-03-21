

    #include <stdio.h>

    
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    int main() {
        int torre = 1,bispo = 1,rainha =1,cavalo=1;
        printf("Movimento da rainha \n");
        //Código para simular movimento da rainha utilizando do while
    do
    {
      printf("esquerda \n");
    rainha++;
    } while (rainha <=8);
    
     printf("Movimento do Bispo \n");
     
    //Código para simular movimento do bispo utilizando while
     while (bispo <=5)
     {
    
        printf("Cima_Direita \n");
    bispo++;
    
    
    }
    //Código para simular movimento da torre utilizando for
    printf("Movimento da torre \n");
    
    for ( torre = 1; torre <= 5; torre++)
    {
        printf("Direita \n");
    }
    printf("Movimento do cavalo \n");
    while (cavalo --)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo \n");
        }
        printf("esquerda \n");
    }
    





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

    return 0;
}
