#include "Enum.h"

void Enum::ingressos(int x){
    if(x == INTEIRA)qtdIngressos++;
    if(x == MEIA)qtdMeia++;
}

void Enum::inicPreco(float x){
    float precoInt =18.50,precoMeia=9.25;
    if(x == INTEIRA)preco = precoMeia;
    if(x == MEIA)preco = precoInt;
}

