int main() {
    float ValorI,ValorF, desconto ;

    printf("Qual o valor do protuto: ");
    scanf("%f", &ValorI);

    printf("Qual o desconto do produto: ");
    scanf("%f", &desconto);
    
    
    ValorF = ValorI - (ValorI * desconto/100);
    
  

    printf("O valor final do produto é : %.2f\n", ValorF);
    
    return 0;
}