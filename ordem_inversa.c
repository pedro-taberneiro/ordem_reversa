#include <stdio.h>
int main(){
   /*Dada uma sequencia de 0<n<100 numeros inteiros, imprimi-la na ordem inversa  a da leitura. */
    int n,i;
    printf("entre com o número n de valores da sequencia;");
    scanf("%d", &n);

    int v[100];

    if(n>100) printf("larga de bobera rapaz");
    else{
        printf("fala a sequencia");
        for(i=0;i<=n-1;i++)
        scanf("%d", &v[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d ", v[i]);

    }
        }
