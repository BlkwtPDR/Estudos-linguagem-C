#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
#include <stdbool.h>

char sexor[25][10];


int calculatmb(int l){

if



}




bool comparador(int l) {
    int i = 0;
    char masc[10] = "masculino";
    for (i = 0; sexor[l][i] != '\0'; i++) {
        if (sexor[l][i] != masc[i]) {
            return false;
        }
        if (sexor[l][i] == '\0' && masc[i] == '\0') {
            return true;
        }
    }
}

void minusculo(int l) {
    int n = 0;
    for (n = 0; n < strlen(sexor[l]); n++) {
        sexor[l][n] = tolower(sexor[l][n]);
    }
}

bool comparador2(int l) {
    comparador(l);

    int i = 0;
    char fem[10] = "feminino";
    for (i = 0; sexor[l][i] != '\0'; i++) {
        if (sexor[l][i] != fem[i]) {
            return false;
        }
        if (sexor[l][i] == '\0' && fem[i] == '\0') {
            return true;
        }
    }
}


int main() {
    int l;
    setlocale(LC_ALL, "");
    char nome[25][25];
    int m;

    printf("Digite quantos termos, voc� deseja que sua sequ�ncia exiba, lembrando que o m�nimo de termos 1 e o m�ximo 3\n");
    scanf("%d", &m);

    while (m <= 0 || m > 3) {
        printf("Voc� digitou uma quantidade inv�lida, por favor, digite um n�mero entre 1 e 3\n");
        scanf("%d", &m);
        printf("Pressione enter para continuar");
    }

    getchar();

    for (l = 0; l < m; l++) {
        printf("Digite o nome do usu�rio %d\n", l);
        scanf("%s", nome[l]);
        printf("Perfeito!\nAgora digite o sexo do usu�rio, lembrando que as op��es s�o apenas, Masculino, masculino, M, m e Feminino, feminino, F, f\n");
        scanf("%s", sexor[l]);

        minusculo(l);
        comparador(l);
        if (comparador(l)) {
            printf("masculino");
        } else {
            comparador2(l);
        }

        if (comparador2(l)) {
            printf("feminino");
        }

        printf("erro");
    }

    return 0;
}
