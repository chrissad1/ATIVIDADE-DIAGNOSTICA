
int main() {
    float salarioB, valorH, horasE, salarioF;

    printf("Qual o seu salario Base: ");
    scanf("%f", &salarioB);

    printf("Qual o valor da hora extra: ");
    scanf("%f", &valorH);

    printf("Qual a quantidade de horas extras: ");
    scanf("%f", &horasE);
    
    
    salarioF = salarioB +(valorH * horasE);

    printf("O salario final é: %.2f\n", salarioF);

    return 0;
}