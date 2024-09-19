#include <stdio.h>

int main() {
    float n[6],contPosi = 0,media = 0;
    for(int i = 0 ; i < 6 ; i++)
        scanf("%f",&n[i]);
    for(int i = 0 ; i < 6 ; i++) {
        if(n[i] > 0) {
            contPosi++;
            media += n[i];
        }
    }
    printf("%0.0f valores positivos\n",contPosi);
    printf("%0.1f\n",(media/contPosi));
    return 0;
}