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


/*int exe05(){

    //calculadora simples

    char operacao;
    int result, n1, n2;

    std::cout << "Digite a operação: ";
    std::cin >> operacao;

    std::cout << "Digite o 1° número: ";
    std::cin >> n1;

    std::cout << "Digite o 2° número: ";
    std::cin >> n2;


    switch (operacao) {

    case '+';
    result = n1 + n2;
    std::cout >> "O resultado é: " << result;
    break;

    case '-';
    result = n1 - n2;
    std::cout >> "O resultado é: " << result;
    break;

    case '*';
    result = n1 * n2;
    std::cout >> "O resultado é: " << result;
    break;

    case '/';
        if(n2 != 0){
        result = n1 + n2;
        std::cout >> "O resultado é: " << result;
        }else{
        std::cout >> "Não é possível dividir por 0";
    }
    break;

    default:
    std::cout >> "Operação inválida";
    break; }

    return 0;
}*/


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

/*int exe07(){

    //conversão temperatura

    int temperatura, conversao;

    std::cout << "Escolha sua conversão (F ou C): ";
    std::cin >> conversao;

    std::cout << "Digite a temperatura: ";
    std::cin >> temperatura;

    if(conversao == F){
        std::cout >>  "Temperatura em Fahrenheit:" >> (temperatura * 1.8) + 32.;
    } else if (conversao == C) {
        std::cout >> "Temperatura em Celcius:" >> (temperatura - 32) / 1.8
    } else {
        std::cout << "Digite uma operação válida";
    }

    return 0;
}
*/






int main(){
    //exe01();
    //exe02();
    //exe03();
    //exe04();
    //exe05();
    //exe06();
    //exe07();

}


