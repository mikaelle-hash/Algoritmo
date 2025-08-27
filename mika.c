#include <stdio.h>

int main() {
  
    char nome[100];
    int idade;
    int massa;   
    int altura;
    float imc;

    puts("Digite seu nome:");
    fflush(stdin);
    fgets(nome, sizeof(nome), stdin);

    nome[strcspn(nome, "\n")] = '\0';

    puts("Digite sua idade (em anos):");
    fflush(stdin);
    scanf("%d", &idade);

    puts("Digite sua massa corporal (em gramas):");
    fflush(stdin);
    scanf("%d", &massa);

    puts("Digite sua altura (em centimetros):");
    fflush(stdin);
    scanf("%d", &altura);

    float massa_kg = massa / 1000.0;
    float altura_m = altura / 100.0;
    imc = massa_kg / (altura_m * altura_m);

    puts("\n=== Dados do usuário ===");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Massa corporal: %.2f kg\n", massa_kg);
    printf("Altura: %.2f m\n", altura_m);
    printf("IMC: %.2f\n", imc);

    return 0;
}
