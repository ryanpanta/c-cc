#include <stdio.h>

int main () {

    int qntd;
    int peca;
    int ultima = 0;
    int tower = 0;

    scanf("%d", &qntd);
    while(qntd > 0) {

        scanf("%d", &peca);
        if (peca > ultima) {
            tower++;
            ultima = peca;
        }
        else{
            ultima = peca;
        }
        qntd--;
    } 
    printf("%d", tower);
}