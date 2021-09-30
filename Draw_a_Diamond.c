#include <stdio.h>

int n,k;
int main(){
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

            for(k = 1; k<=n-i;k++){
                printf("  ");
            }

            for(k = 1;k<=i*2-1;k++){
                printf("* ");
            }
        printf("\n");
    }

    for(int i=n-1;i>=1;i--){

            for(k = n-1; k>=i;k--){
                printf("  ");
            }

            for(k = 1;k<=i*2-1;k++){
                printf("* ");
            }
        printf("\n");
    }
}
