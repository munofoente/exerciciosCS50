#include <stdio.h>

int main(void)
{
    char nome[30];

    printf("What's your name?\n");
    scanf("%s", nome);
    printf("Hello, %s\n", nome);
}
