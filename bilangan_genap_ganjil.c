#include <stdio.h>

void Genap(int bilangan[], int i){
	if(i >= 0){
         if(bilangan[i] % 2 == 0){
             printf(" %d,",bilangan[i]);
         }
        Genap(bilangan, i-1);
    }
}

void Ganjil(int bilangan[], int i){
	if(i >= 0){
         if(bilangan[i] % 2 == 1){
             printf(" %d,",bilangan[i]);
         }
        Ganjil(bilangan, i-1);
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
    printf("Bilangan Genap =");
    Genap(values, i);

    printf("\n");
    printf("Bilangan Ganjil =");
    Ganjil(values, i);
    return 0;
}
