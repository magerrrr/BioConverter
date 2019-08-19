//
//  main.c
//  BioConverter
//
//  Created by Kirill on 8/16/19.
//  Copyright © 2019 Kirill. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
    int16_t biomarker;
    int16_t convertFrom;
    int16_t convertTo;
    double value;
    
    float glucose_mg_dl = 18.0156;
    printf("Биоконвертер: \n");
    printf("\nВведите число для выполнения операции: \n");
    printf("Перевод Ммоль/Л в Мг/дЛ: 1\n");
    printf("Перевод Мг/дЛ в Ммоль/Л: 2\n");
    int number = 0;
    float val = 0.0;
    double result = 0.0;
    scanf("%d", &number);
    printf("Введите сумму: \n");
    scanf("%f", &val);
    switch (number) {
        case 1:
            result = val * glucose_mg_dl;
            printf("Значение в мг/дл: %.2f\n", result);
            break;
        case 2:
            result = val / glucose_mg_dl;
            printf("Значение в Ммоль/л: %.2f\n", result);
            break;
        default:
            printf("Вы ввели не корректное число!");
            break;
    }
    return 0;
}

// ФУНКЦИЯ В СИ:
// ТипВозвращаемогоЗначения ИмяФункции(СписокФормальныхАргументов)
// {
//    ТелоФункции;
//    ...
//    return(ВозвращаемоеЗначение);
// }
