#include <stdio.h>



void movertorre(int casas){
   // Imprimi mensagem inicia movimento torre 
    
    if(casas > 0){ 
    
        printf("Direita \n");
        movertorre(casas -1);
}


}

void moverbispo(int casas){
   
   
    if(casas >0){
        printf("Diagonal Direita Cima \n");
        moverbispo(casas -1);
    }

}


void moverrainha(int casas){
    if(casas >0){
        printf("Esquerda \n");
        moverrainha(casas -1);
    }

}

int main(){
printf("Inicia movimento da torre \n");
movertorre (5);

printf("Inicia movimento do bispo \n");
moverbispo(5);

printf("Inicia movimento da rainha \n");
moverrainha(8);

printf("Inicia movimento do cavalo \n");

for (int i = 0; i < 2; i++)
{
    printf("Baixo \n");
}
printf("esquerda \n");


return 0;



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

   

