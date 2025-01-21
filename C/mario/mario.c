#include <stdio.h>

int main(){
    int h = 0;
    do
    {
        printf("Height: ");
        scanf("%i", &h);
    }
    while (h < 1 || h > 8);

        for (int y = 0; y < h; y++)       // primeiro bloco for: imprime na tela as linhas(y)
        {
            for (int space = 0; space < h - y - 1; space++) // bloco que imprime os espaços vazios na linha
            {                                               //os espaços são a relação de altura - largura - 1
                printf(" ");                                //(-1 para inserção do #)
            }
            for(int x = 0; x < y; x++)    //imprime # ao final dos espaços
            {
                printf("#");
            }
            printf("#\n");
        }

    return 0;
}
