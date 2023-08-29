#include <stdio.h>
#include <string.h>

int main () {

    int vol = 7;
    int qntd;
    char entrada[50];
  

    scanf("%d", &qntd);

    while(qntd > 0 ) {
        scanf (" %[^\n]", entrada);
        if (strcmp(entrada, "Skru op!") == 0 && vol < 10)
            vol++;
        else if (strcmp(entrada, "Skru ned!") == 0 && vol > 0)
            vol--;
        qntd--;
    }
    printf("%d ", vol);
    printf("\n");

}
