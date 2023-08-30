#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int ouro,prata,bronze;
}Atleta;
void troca(Atleta *a, Atleta *b);
void metodo_bolha(Atleta [], int);

int main(void){
    printf("--------------------------\n");
    printf("\tcadastro\n");
    printf("--------------------------\n");
    printf("Numero de atletas: ");
    int numero;
    scanf("%d", &numero);
    Atleta atleta[numero];
    for(int i = 0;i < 4;i++){
        printf("Nome: ");
        scanf("%s",  &atleta[i].nome);
        printf("Ouro: ");
        scanf("%d", &atleta[i].ouro);
        printf("Prata: ");
        scanf("%d", &atleta[i].prata);
        printf("Bronze: ");
        scanf("%d", &atleta[i].bronze);
        printf("--------------------------\n");
    };
    metodo_bolha(atleta, numero);
    system("cls");
    for (int i=0;i<numero;i++){
        printf ("%s\n", atleta[i].nome);
    }
    return 0;
}
void troca(Atleta *a, Atleta *b){
    int *aux = a;
    *a = *b;
    *b = *a;
}
void metodo_bolha(Atleta atleta[], int num){
    for (int i=0;i<num-1;i++){
        for (int j=0;j<num-1-i;j++){
            if (atleta[j].ouro>atleta[j+1].ouro){
                troca(&atleta[j], &atleta[j+1]);
            }
            if (atleta[j].ouro==atleta[j+1].ouro){
                if (atleta[j].prata>atleta[j+1].prata){
                        troca(&atleta[j], &atleta[j+1]);
                }
                if (atleta[j].prata==atleta[j+1].prata){
                        if(atleta[j].bronze>atleta[j+1].bronze){
                             troca(&atleta[j], &atleta[j+1]);
                        }
                }
            }
        }
    }
}
