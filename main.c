#include <stdio.h>

int main() {

    int i, j, k;
    int maior = 0;
    int count;

    while(scanf("%d %d", &i, &j) != EOF) {

        maior = 0;
        for(int n = i; n <= j; n++) {

            count = 1;
            k = n;  

            while (k != 1) {

                if ((k % 2) == 0) 
                    k = k/2;
                
                else 
                    k = (3*k)+1;
                
                count++;
            }

            if (count > maior)
                maior = count;

        }

        printf("%d %d %d \n", i, j, maior);

    }
}