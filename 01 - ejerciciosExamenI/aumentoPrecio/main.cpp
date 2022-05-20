#include <stdio.h>

#include <iostream>
using namespace std;
int main( ) {

    float precioOriginal, porcentajeAumento;

    cout << "Ingresa el precio original: ";

    cin>>precioOriginal;

    cout<<"Ingresa el porcentaje de aumento: ";

    cin>>porcentajeAumento;
    float aumento = precioOriginal * (porcentajeAumento / 100);

    float precioConAumento = precioOriginal + aumento;

    cout<<"Precio con aumento: " << precioConAumento;

    return 0;

}