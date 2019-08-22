//
//  main.c
//  BioConverter
//
//  Created by Kirill on 8/16/19.
//  Copyright © 2019 Kirill. All rights reserved.
//
#include <stdio.h>

int biomarker[11] = {
    0, // Insulin
    1, // Glucose
    2, // Cholesterol, low-density (LDL) (high level)
    3, // Cholesterol, high-density (HDL) (low level)
    4, // Triglycerides (TG)
    5, // CRP (C-reactive protein)
    6, // Homocysteine
    7, // Thyrotropin
    8, // Vitamin D
    9, // Zinc
    10 // Ferritin
};

double insulin_units[15] = { // index access 0
    0,         // mmol/l
    0,         // µmol/L
    0,         // nmol/L
    6.945,     // pmol/L
    0.0347,    // mg/mL
    0.347,     // mg/dL
    3.47,      // mg/L
    0,         //µg/mL
    0,         //µg/dL
    0,         //µg/L
    0,         //ng/mL
    0.0000347, // g
    1,         // IU
    1,         // µIU/mL
    1          // mIU/L
};

double glucose_units[15] = { // index access 1
    1,          // mmol/l // 0
    1000,       // µmol/L // 1
    1000000,    // nmol/L // 2
    1000000000, // pmol/L // 3
    0.180156,   // mg/mL  // 4
    18.0156,    // mg/dL  // 5
    180.156,    // mg/L   // 6
    180.156,    // µg/mL  // 7
    18015.6,    // µg/dL  // 8
    180156,     // µg/L   // 9
    180156,     // ng/mL  // 10
    0,          // g      // 11
    0,          // IU     // 12
    0,          // µIU/mL // 13
    0           // mIU/L  // 14
};

double ldl_units[15] = { // index access 2
    0.0259,     // mmol/l // 0
    0,          // µmol/L // 1
    0,          // nmol/L // 2
    0,          // pmol/L // 3
    0.1,        // mg/mL  // 4
    1,          // mg/dL  // 5
    10,         // mg/L   // 6
    0,          // µg/mL  // 7
    0,          // µg/dL  // 8
    0,          // µg/L   // 9
    0,          // ng/mL  // 10
    0,          // g      // 11
    0,          // IU     // 12
    0,          // µIU/mL // 13
    0           // mIU/L  // 14
};

double hdl_units[15] = { // index access 3
    0.0259,     // mmol/l // 0
    0,          // µmol/L // 1
    0,          // nmol/L // 2
    0,          // pmol/L // 3
    0.1,        // mg/mL  // 4
    1,          // mg/dL  // 5
    10,         // mg/L   // 6
    0,          // µg/mL  // 7
    0,          // µg/dL  // 8
    0,          // µg/L   // 9
    0,          // ng/mL  // 10
    0,          // g      // 11
    0,          // IU     // 12
    0,          // µIU/mL // 13
    0           // mIU/L  // 14
};

double triglycerides_units[15] = { // index access 4
    0.0113,     // mmol/l // 0
    11.2994,    // µmol/L // 1
    0,          // nmol/L // 2
    0,          // pmol/L // 3
    0.1,        // mg/mL  // 4
    1,          // mg/dL  // 5
    10,         // mg/L   // 6
    0,          // µg/mL  // 7
    0,          // µg/dL  // 8
    0,          // µg/L   // 9
    0,          // ng/mL  // 10
    0,          // g      // 11
    0,          // IU     // 12
    0,          // µIU/mL // 13
    0           // mIU/L  // 14
};

double crp_units[15] = { // index access 5
    0,          // mmol/l // 0
    0,          // µmol/L // 1
    9.524,      // nmol/L // 2
    0,          // pmol/L // 3
    0,          // mg/mL  // 4
    0,          // mg/dL  // 5
    1,          // mg/L   // 6
    0,          // µg/mL  // 7
    0,          // µg/dL  // 8
    0,          // µg/L   // 9
    0,          // ng/mL  // 10
    0,          // g      // 11
    0,          // IU     // 12
    0,          // µIU/mL // 13
    0           // mIU/L  // 14
};

double convert(int16_t indexOfBiomarker, int16_t convertFrom, int16_t convertTo, double value) {
    switch(biomarker[indexOfBiomarker]) {
        case 0 :
            printf("Insulin!\n" );
            return value * insulin_units[convertTo] / insulin_units[convertFrom];;
            break;
            
        case 1 :
            printf("Glucose!\n" );
            return value * glucose_units[convertTo] / glucose_units[convertFrom];;
            break;
            
        case 2 :
            printf("Cholesterol, low-density (LDL) (high level)!\n" );
            return value * ldl_units[convertTo] / ldl_units[convertFrom];;
            break;
            
        case 3 :
            printf("Cholesterol, high-density (HDL) (low level)!\n" );
            return value * hdl_units[convertTo] / hdl_units[convertFrom];;
            break;
        
        case 4 :
            printf("Triglycerides!\n" );
            return value * triglycerides_units[convertTo] / triglycerides_units[convertFrom];;
            break;
            
        case 5 :
            printf("Triglycerides!\n" );
            return value * crp_units[convertTo] / crp_units[convertFrom];;
            break;
            
        default:
            printf("Incorrect biomarker!\n" );
    }
    return 0;
};

int main(int argc, char *argv[]) {
   printf("Значение result: %.3f\n", convert(2,5,0,160));
    return 0;
};

/*
//Insulin
(0,3,13,14) = 2.016
(0,13,3,2.016) = 13.890
 
//Glucose
(1,0,5,5) = 90.078
(1,0,5,90.078) = 4.996
 
 //Cholesterol, low-density (LDL) (high level)
 (2,0,5,5.15) = 198.842
 (2,5,0,198.842) = 5.150
 (2,5,0,160) = 4.144
 */
