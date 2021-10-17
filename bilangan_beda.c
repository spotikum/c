#include <stdio.h>

void Random(int bilangan[], int i){
    if(i >= 0){
        int tmp = bilangan[i];
        int z = 0;
        for(int x = 4; x >= 0; x--){
            if(bilangan[i] == bilangan[x]){
                z += 1;
            }
        }
        if(z == 1){
            printf(" %d,",tmp);
        }
        Random(bilangan, i-1);
    }
}

int main() {
    int i = 4;
    int values[5];

    printf("Masukkan 5 bilangan:\n");
    for(int i = 0; i < 5; ++i) {
        scanf("%d", &values[i]);
    }

    printf("\n");
    printf("Bilangan beda =");
    Random(values, i);

    return 0;
}
