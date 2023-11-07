#include <stdio.h>

int main() {
    float salario_bruto, desc_inss, desc_ir, salario_liquido;
    
    printf("\n Calculo de Salario Liquido com desconto do IR e INSS");
    printf("\n Digite seu salario bruto: ");
    scanf("%f", &salario_bruto);
    
    // Cálculo do desconto do INSS
    if (salario_bruto <= 1320.0) {
        desc_inss = salario_bruto * 0.075;
    } else if (salario_bruto <= 2571.29) {
        desc_inss = salario_bruto * 0.09;
    } else if (salario_bruto <= 3856.94) {
        desc_inss = salario_bruto * 0.12;
    } else {
        desc_inss = salario_bruto * 0.14;
    }
    
    // Cálculo do desconto do IR
    if (salario_bruto <= 1903.98) {
        desc_ir = 0;
    } else if (salario_bruto <= 2826.65) {
        desc_ir = salario_bruto * 0.075 - 158.40;
    } else if (salario_bruto <= 3751.05) {
        desc_ir = salario_bruto * 0.15 - 370.40;
    } else if (salario_bruto <= 4664.68) {
        desc_ir = salario_bruto * 0.225 - 651.73;
    } else {
        desc_ir = salario_bruto * 0.275 - 884.96;
    }

    salario_liquido = salario_bruto - desc_inss - desc_ir;
    
    printf( "\n Desconto INSS: R$ %.2f", desc_inss);
    printf( "\n Desconto IR: R$ %.2f", desc_ir);
    printf( "\n Salario liquido: R$ %.2f", salario_liquido);

    return 0;
}