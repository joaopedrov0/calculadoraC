#include <stdio.h>

// operators: + - / * **

float calculate(float number1, float number2, int operatorID){
    if(operatorID == 1){
        //sum 
        return number1 + number2;
    } else if(operatorID == 2){
        // sub
        return number1 - number2;
    } else if(operatorID == 3){
        // div
        return number1 / number2;
    } else if(operatorID == 4){
        // multip
        return number1 * number2;
    } else if(operatorID == 5){
        // power
        int power = 1;
        int i;
        for(i = number2; i > 0; i--){
            power *= number1;
        }
        return power;
    }
    return 0;
}

int main() {
    float firstN;
    float secondN;
    int operatorID;
    int userCommand;
    float result;
    char * operatorDisplay = "+-/*e";

    while(1){
        printf("Bem vindo %c Calculadora\nO que voc%c deseja fazer?\nDigite [1] para fazer uma conta ou [0] para sair do programa!\n", 133, 136);
        scanf("%d", &userCommand);
        if(userCommand == 1){
            printf("Digite o primeiro n%cmero: ", 163);
            scanf("%f", &firstN);
            printf("%.2f ? x = ???\n\n", firstN);
            printf("Digite o segundo n%cmero: ", 163);
            scanf("%f", &secondN);
            printf("%.2f ? %.2f = ???\n\n", firstN, secondN);
            printf("Agora selecione o operador\nDigite o n%cmero do respectivo operador:\n[1] para soma\n[2] para subtra%c%co\n[3] para divis%co\n[4] para multiplica%c%co\n[5] para exponencia%c%co\n", 163, 135, 198, 198, 135, 198, 135, 198);
            scanf("%d", &operatorID);
            printf("%.2f %c %.2f = ???\n\n", firstN, operatorDisplay[operatorID - 1], secondN);
            result = calculate(firstN, secondN, operatorID);
            printf("%.2f %c %.2f = %.2f\n\n", firstN, operatorDisplay[operatorID - 1], secondN, result);
            printf("O resultado %c: %.2f\n\n", 130, result);
        } else {
            break;
        }
        continue;
    }
    return 0;
}