#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PesoPacoteMaior, pesoPacote;
    int i;

    for(i = 1; i <= 10; i++){
        printf("\nInforme o peso do %d pacote: ", i);
        scanf("%f", &pesoPacote);
        if(pesoPacote > PesoPacoteMaior){
            PesoPacoteMaior = pesoPacote;
        }
    }
    printf("\nO pacote mais pesado e %.2f\n", PesoPacoteMaior);
    return 0;
}
