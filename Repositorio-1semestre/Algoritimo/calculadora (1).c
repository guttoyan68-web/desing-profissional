#include <stdio.h>
#include <math.h>

int main(){
    while (1) 
    {
    printf("=====CALCULADORA-CIENTIFICA=====\n");
    printf("Selecione a operação deseja: \n");
    printf("1) Soma\n");
    printf("2) Subtração\n");
    printf("3) Multiplicação\n");
    printf("4) Divisão\n");
    printf("5) Potenciação\n");
    printf("6) Radiciação\n");
    printf("7) Seno\n");
    printf("8) Cosseno\n");
    printf("9) Tangente\n");
    printf("10) Logaritmo\n");
    printf("11) Logaritmo base 10\n");
    printf("12) Hipotenusa\n");
    printf("13) Exponencial\n");
    printf("14) Porcentagem\n");
    printf("15) Modulo\n");
    printf("16) Valor absoluto\n");
    printf("17) Raiz cúbica\n");
    printf("18) Fatorial\n");
    printf("19) Delta\n");
    printf("20) Determinante 2x2\n");
    printf("0) Sair\n");

    int calculos;
    printf("Digite a operação desejada: ");
    scanf("%d", &calculos);
    if (calculos > 20 || calculos < 0)
    {
        printf("Operação inválida. Por favor, selecione uma operação entre 0 e 20.\n");
        continue; //nao conhecia, mas serve para voltar pro inicio do codigo 
    }
    
    switch (calculos)
    {
    case 0: {
        printf("Saindo da calculadora... Goodbye!");
        return 0;
    }
        
    case 1: {
        double num1, num2, resultado;

        printf("Digite o primeiro número: ");
        scanf("%lf", &num1);

        printf("Digite o segundo número: ");
        scanf("%lf", &num2);
        resultado = num1 + num2;
        printf("O resultado da soma é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
           
    } 
        break;
    case 2: {
        double num1, num2, resultado;

        printf("Digite o primeiro número: ");
        scanf("%lf", &num1);

        printf("Digite o segundo número: ");
        scanf("%lf", &num2);
        resultado = num1 - num2;
        printf("O resultado da subtração é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
    } 
        break;
    case 3: {
        double num1, num2, resultado;

        printf("Digite o primeiro número: ");
        scanf("%lf", &num1);

        printf("Digite o segundo número: ");
        scanf("%lf", &num2);
        resultado = num1 * num2;
        printf("O resultado da multiplicação é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
    } 
        break;
case 4: {
    double num1, num2, resultado;

    printf("Digite o primeiro número: ");
    scanf("%lf", &num1);

    printf("Digite o segundo número: ");
    scanf("%lf", &num2);
    if (num2 == 0.0) {
        printf("Erro: Divisão por zero não existe. BAKA\n");
    } else {
        resultado = num1 / num2;  
        printf("O resultado da divisão é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
    }
    break; 
}
    case 5: {
        double base, expoente, potencia;
        printf("Digite a base: \n");
        scanf("%lf", &base);

        printf("Digite o expoente: \n");
        scanf("%lf", &expoente);

        potencia = pow(base, expoente);
        printf("O resultado da potenciação é: %.2lf\n", potencia);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 6: { 
        double raiz, resultado;
        printf("Digite o número para calcular a raiz quadrada: \n");
        scanf("%lf", &raiz);
        resultado = sqrt(raiz);
        printf("O resultado da radiciação é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 7: { 
        double seno, converter, resultado;
        printf("Digite o valor do ângulo em Graus: \n");
        scanf("%lf", &seno);
        converter = seno * 3.14159265358979323846 / 180.0;
        resultado = sin(converter);
        printf("O seno do ângulo é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 8: { 
        double cosseno, converter, resultado;
        printf("Digite o valor do ângulo em Graus: \n");
        scanf("%lf", &cosseno);
        converter = cosseno * 3.14159265358979323846 / 180.0;
        resultado = cos(converter);
        printf("O cosseno do ângulo é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;

    }
    case 9: { 
        double tangente, converter, resultado;
        printf("Digite o valor do ângulo em Graus: \n");
        scanf("%lf", &tangente);
        converter = tangente * 3.14159265358979323846 / 180.0;
        resultado = tan(converter);
        printf("A tangente do ângulo é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 10: { 
        double logaritmo, resultado;
        printf("Digite o valor de x para o logaritmo de base e: \n");
        scanf("%lf", &logaritmo);
        resultado = log(logaritmo);
        printf("O resultado do log é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 11: {
        double logaritmo10, resultado;
        printf("Digite o valor de x no logaritmo de base 10: \n");
        scanf("%lf", &logaritmo10);
        resultado = log10(logaritmo10);
        printf("O resultado do log é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 12:{
            double cateto1, cateto2, hipotenusa;
            printf("Digite o valor do primeiro cateto: \n");
            scanf("%lf", &cateto1);
            printf("Digite o valor do segundo cateto: \n");
            scanf("%lf", &cateto2);
            hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
            printf("O valor da hipotenusa é: %.2lf\n", hipotenusa);
            printf("Deseja retornar ao menu? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            while (1)
            {
            if (resposta == 's' || resposta == 'S')
            {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
               printf("Saindo da calculadora... Goodbye!");
               return 0; 
            } else {
                printf("Resposta inválida, por favor digite somente s ou n");
                scanf(" %c", &resposta);
                continue;
            }
            }
            break;
    }
    case 13: {
            double expoente, resultado;
            printf("Digite o valor do expoente para calcular o exponencial: \n");
            scanf("%lf", &expoente);
            resultado = exp(expoente);
            printf("O resultado do exponencial é: %.2lf\n", resultado);
            printf("Deseja retornar ao menu? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            while (1)
            {
            if (resposta == 's' || resposta == 'S')
            {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
               printf("Saindo da calculadora... Goodbye!");
               return 0; 
            } else {
                printf("Resposta inválida, por favor digite somente s ou n");
                scanf(" %c", &resposta);
                continue;
            }
            }
            break;
    }
    case 14: {
            double percentual, resultado;
            printf("Digite o valor do percentual (sem o símbolo): \n");
            scanf("%lf", &percentual);
            resultado = percentual / 100.0; 
            printf("O valor em porcentagem é: %.2lf\n", resultado);
            printf("Deseja retornar ao menu? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            while (1)
            {
            if (resposta == 's' || resposta == 'S')
            {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
               printf("Saindo da calculadora... Goodbye!");
               return 0; 
            } else {
                printf("Resposta inválida, por favor digite somente s ou n");
                scanf(" %c", &resposta);
                continue;
            }
            }
            break;
    }
    case 15: {
            double numero1, numero2, resultado;
            printf("Digite o primeiro número para calcular o módulo da divisão: \n");
            scanf("%lf", &numero1);

            printf("Agora, digite o segundo número: \n");
            scanf("%lf", &numero2);
            resultado = fmod(numero1, numero2);
            printf("O valor do módulo é: %.2lf\n", resultado);
            printf("Deseja retornar ao menu? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            while (1)
            {
            if (resposta == 's' || resposta == 'S')
            {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
               printf("Saindo da calculadora... Goodbye!");
               return 0; 
            } else {
                printf("Resposta inválida, por favor digite somente s ou n");
                scanf(" %c", &resposta);
                continue;
            }
            }
            break;
    }
    case 16: {
            double valor, resultado;
            printf("Digite um número para calcular o valor absoluto: \n");
            scanf("%lf", &valor);
            resultado = fabs(valor);
            printf("O valor absoluto é: %.2lf\n", resultado);
            printf("Deseja retornar ao menu? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            while (1)
            {
            if (resposta == 's' || resposta == 'S')
            {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
               printf("Saindo da calculadora... Goodbye!");
               return 0; 
            } else {
                printf("Resposta inválida, por favor digite somente s ou n");
                scanf(" %c", &resposta);
                continue;
            }
            }
            break;
    }
    case 17: {
        double numero, resultado;
        printf("Digite um número para calcular a raiz cúbica: \n");
        scanf("%lf", &numero);
        resultado = cbrt(numero);
        printf("A raiz cúbica é: %.2lf\n", resultado);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
        }
        break;
    }
    case 18:{
        int numero;
        long long int fatorial = 1;
        printf("Digite um número inteiro de (0 a 20) para calcular o fatorial: \n");
        scanf("%d", &numero);
        if (numero < 0 || numero > 20) {
            printf("Erro: Número inválido para cálculo de fatorial. Por favor, insira um número entre 0 e 20.\n");
        } else {
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            printf("O fatorial de %d é: %lld\n", numero, fatorial);
            printf("Deseja retornar ao menu? (s/n): ");
            char resposta;
            scanf(" %c", &resposta);
            while (1)
            {
            if (resposta == 's' || resposta == 'S')
            {
                break;
            } else if (resposta == 'n' || resposta == 'N') {
               printf("Saindo da calculadora... Goodbye!");
               return 0; 
            } else {
                printf("Resposta inválida, por favor digite somente s ou n");
                scanf(" %c", &resposta);
                continue;
            }
            }
        }
        break;
    }
    case 19: {
        double a, b, c, delta;
        printf("===== Digite o valor de a, b e c da equação ax² + bx + c ===== \n");
        printf("Valor de a: \n");
        scanf("%lf", &a);
        printf("Valor de b: \n");
        scanf("%lf", &b);
        printf("Valor de c: \n");
        scanf("%lf", &c);
        delta = b * b - 4 * a * c;
        printf("O valor de delta é: %.2lf\n", delta);
        printf("Deseja retornar ao menu? (s/n): ");
        char resposta;
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
       }
       break;
    }
    case 20: {
        double a1, a2, a3, a4, determinante;
        printf("Digite os elementos da matriz 2x2:\n");
        printf("[ a11  a12 ]\n[ a21  a22 ]\n");

        printf("Valor do a11: \n");
        scanf("%lf", &a1);

        printf("Valor do a12): \n");
        scanf("%lf", &a2);

        printf("Valor do a21: \n");
        scanf("%lf", &a3);

        printf("Valor do a22): \n");
        scanf("%lf", &a4);

    determinante = a1*a4 - a2*a3;
    printf("O valor do determinante é: %.2lf\n", determinante);
    
    char resposta;
        printf("Deseja retornar ao menu? (s/n): ");
        scanf(" %c", &resposta);
        while (1)
        {
        if (resposta == 's' || resposta == 'S')
        {
            break;
        } else if (resposta == 'n' || resposta == 'N') {
           printf("Saindo da calculadora... Goodbye!");
           return 0; 
        } else {
            printf("Resposta inválida, por favor digite somente s ou n");
            scanf(" %c", &resposta);
            continue;
        }
       }
    break;
        }
    } 
    return 0;
   } 
}  

