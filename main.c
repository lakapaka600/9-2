#include <stdio.h>
float sconto(float prezzo,float scontato) {
    float sconto1=prezzo*(scontato/100);
    return prezzo - sconto1;
}
int main(void) {
  float prezzo;
    printf("Inserisci il prezzo del prodotto:")
    scanf("%f", &prezzo);
    float scontato;
    printf("Inserici lo sconto del prodotto:");
    scanf("%f", &scontato);
float prezzofinale = sconto(prezzo,scontato);
    printf("il prezzo finale risulta: %f", prezzofinale);
    return 0;
}
