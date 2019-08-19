//
//  main.c
//  BioConverter
//
//  Created by Kirill on 8/16/19.
//  Copyright © 2019 Kirill. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

char *biomarker[2] = {
    "Insulin", //0
    "Glucose", //1
};

int insulin_units[15] = { // 0
    1, //mmol/l
    1000,
    1000000,
    1000000000,
    0.180156,
    18.0156, //mg/dl
    180.156,
    180.156
};

int glucose_units[15] = { // 1
    1, //mmol/l
    1000,
    1000000,
    1000000000,
    0.180156,
    18.0156, //mg/dl
    180.156,
    180.156
};

double convert(int16_t indexOfBiomarker, int16_t convertFrom, int16_t convertTo, int value) {
    printf("%s\n", biomarker[indexOfBiomarker]);
    printf("%d\n", glucose_units[convertFrom]);
    printf("%d\n", glucose_units[convertTo]);
    
    double result = value * glucose_units[convertTo]/glucose_units[convertFrom];
    return result;
}

int main(int argc, char *argv[]) {
    printf("Значение result: %f\n", convert(0, 0, 1, 5) );
    return 0;
}

//typedef struct Converter {
// int value;
// struct {
// int id;
// char *name;
// } make;
// char *name;
// } DB;
