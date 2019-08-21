//
//  main.c
//  BioConverter
//
//  Created by Kirill on 8/16/19.
//  Copyright © 2019 Kirill. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct BIO_BD
{
    int id;
    char name[50];
    struct BiomarkerInfo
    {
        int id;
        int value;
        char name[50];
    }unit;
}biomarkers;

//char *biomarker[2] = {
//    "Insulin", //0
//    "Glucose", //1
//};
//
//int insulin_units[15] = { // 0
//    1, //mmol/l
//    1000,
//    1000000,
//    1000000000,
//    0.180156,
//    18.0156, //mg/dl
//    180.156,
//    180.156
//};
//
//int glucose_units[15] = { // 1
//    1, //mmol/l
//    1000,
//    1000000,
//    1000000000,
//    0.180156,
//    18.0156, //mg/dl
//    180.156,
//    180.156
//};

double convert(int16_t indexOfBiomarker, int16_t convertFrom, int16_t convertTo, int value) {
    //printf("%s\n", biomarker[indexOfBiomarker]);
    //printf("%d\n", glucose_units[convertFrom]);
    //printf("%d\n", glucose_units[convertTo]);
    
    biomarkers.id=0; strcpy(biomarkers.name, "Insulin");
    biomarkers.unit.id=0; biomarkers.unit.value=0; strcpy(biomarkers.unit.name, "mmol/L");
    biomarkers.unit.id=1; biomarkers.unit.value=18.0156; strcpy(biomarkers.unit.name, "mg/dL");
    
    biomarkers.id=1; strcpy(biomarkers.name, "Glucose");
    
    biomarkers.unit.id=0; biomarkers.unit.value=0; strcpy(biomarkers.unit.name, "mmol/L");
    biomarkers.unit.id=1; biomarkers.unit.value=18.0156; strcpy(biomarkers.unit.name, "mg/dL");
    
  //  double result = value * glucose_units[convertTo]/glucose_units[convertFrom];
    return result;
}

int main(int argc, char *argv[]) {
    //printf("Значение result: %f\n", convert(0, 0, 1, 5) );


        
    //printing first BIO_BD information
    printf( "biomarker ID : %d\n", biomarkers.id);
    printf( "biomarker name : %s\n", biomarkers.name);
    printf( "BIO_BD BiomarkerInfo (value name) : %d %s\n", biomarkers.unit.value, biomarkers.unit.name);
    printf( "Значение 18.0156 (value name) : %d %s\n", biomarkers.unit.value, biomarkers.unit.name);
    

    
    return 0;
}
