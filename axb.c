#include <stdio.h>
int multiplication(int a, int b){
    int produit=0;
    for(int i=0; i<b; i++){
        for(int j=0; j<a; j++){
            produit +=1;
        }
    }
    return produit;
}

int main(){
    int a, b;
    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);
    printf("%d X %d= %d\n", a, b, multiplication(a,b));
    return 0;
}