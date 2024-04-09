#include <iostream>


int exe01(){


    //num par

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Esse número é par! \n");
    } else {
        printf("Esse número é impar! \n");
    }


    return 0;
}

int exe02(){
 
    //num positivo 

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n > 0){
        printf("Positivo! \n");
    } else {
        printf("Negativo! \n");
    }

    return 0;
}


int exe03(){

    // multiplo 3 e 5

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(n % 3 == 0 && n % 5 == 0){
        printf("Multiplo de 3 e 5! \n");
    } else {
        printf("Não é multiplo de 3 e 5! \n");
    }


    return 0;
}

int exe04(){

    //classifcação triangulo

    int n1, n2, n3;

    printf("Digite o lado 1: ");
    scanf("%d", &n1);

    printf("Digite o lado 2: ");
    scanf("%d", &n2);

    printf("Digite o lado 3: ");
    scanf("%d", &n3);


    if(n1 == n2 && n2 == n3){
        printf("Equilátero \n");
    } else if (n1 != n2 && n2 != n3 && n3 != n1){
        printf("Escaleno \n");
    } else {
        printf("Isóscele \n");
    }

    return 0;
}


int exe05(){

    //calculadora simples

    char operacao;
    double n1, n2, resultado;
    
    printf("Escolha a operação (+, -, * ou /): ");
    scanf("%c", &operacao);

    printf("Digite o 1° número: ");
    scanf("%lf", &n1);

    printf("Digite o 2° número: ");
    scanf("%lf", &n2);


    switch(operacao){
        case '+':
        resultado = n1 + n2;
        printf("Resultado: %.2lf\n", resultado);
        break;
        case '-':
        resultado = n1 - n2;
        printf("Resultado: %.2lf\n", resultado);
        break;
        case '*':
        resultado = n1 * n2;
        printf("Resultado: %.2lf\n", resultado);
        break;
        case '/':
        if(n2 != 0){
        resultado = n1 / n2;
        printf("Resultado: %.2lf \n", resultado);
        } else {
            printf("Não é possível fazer divisão por zero!");
        }
        break;
        default:
        printf("Operação inválida.");
        break;
    }


    return 0;
}


int exe06(){

    //ano bissexto

    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if(ano % 4 == 0 || ano % 400 == 0 && ano % 100 != 0){
        printf("Ano bissexto! \n");
    } else {
        printf("Não bissexto! \n");
    }

    return 0;
}

int exe07(){

    //conversão temperatura

    char conversao;
    double temperatura, resultado;

    printf("Escolha a conversão (C ou F): ");
    scanf("%c", &conversao);

    printf("Digite a temperatura: ");
    scanf("%lf", &temperatura);

    switch(conversao){
        case 'C':
        resultado = (temperatura-32)/1.8;
        printf("Resultado da conversão: %.2lf\n", resultado);
        break;
        case 'F':
        resultado = (temperatura * 1.8)+32;
        printf("Resultado da conversão: %.2lf\n", resultado);
        break;
    }


    return 0;
}



int exe08(){

    //imc

    float peso, altura, imc;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu imc é: %2.f\n", imc);

    if(imc < 18.5){
        printf("Abaixo do peso. \n"); 
    } else if (imc >= 18.5 && imc < 25){
        printf("Peso normal. \n");
    }else if (imc >= 25 && imc < 30){
        printf("Acima do peso. \n");
    }else{
        printf("Obesidade. \n");
    }

    return 0;
}

int exe09(){
    
    int x, y;

    printf("Insira a coorenada x: ");
    scanf("%d", &x);

    printf("Insira a coorenada y: ");
    scanf("%d", &y);

    if(x > 0 && y > 0){
        printf("O ponto (%d, %d) está no primeiro quadrante. \n", x, y);
    }else if(x < 0 && y < 0){
        printf("O ponto (%d, %d) está no segundo quadrante. \n", x, y);
    }else if(x > 0 && y < 0){
        printf("O ponto (%d, %d) está no terceiro quadrante. \n", x, y);
    }else if(x == 0 && y == 0){
        printf("O ponto está na origem. \n");
    }

    return 0;
}

int exe10(){

    double saldo, retirar, saldoFinal;

    saldo = 100;
    saldoFinal = saldo - retirar;

    printf("Qual quantia deseja retirar? ");
    scanf("%lf", &retirar);

    saldoFinal = saldo - retirar;

    if(saldo >= retirar){
        printf("Pode fazer uma retirada! O valor restante será de: %lf - %lf == %2.lf \n", saldo, retirar, saldoFinal);
    } else{
        printf("Saldo insulficiente! \n");
    }


    return 0;
}



int main(){
    //exe01();
    //exe02();
    //exe03();
    //exe04();
    //exe05();
    //exe06();
    //exe07();
    //exe08();
    //exe09();
    exe10();
    //exe11();
    //exe12();
    //exe13();

}


