//
// Created by MARIA HILDA BERMEJO RIOS on 10/21/20.
//

#ifndef CADENAS_VECTOR_UFUNCIONES_H
#define CADENAS_VECTOR_UFUNCIONES_H

#include <iostream>
#include <vector>
using namespace std;

using tvPalabras=vector<string>;

void   Imprimir(const tvPalabras &vec);
bool Esta(string &pal, tvPalabras &v);
tvPalabras SinRepetidos(tvPalabras & vec);

#endif //CADENAS_VECTOR_UFUNCIONES_H
