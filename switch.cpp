#include <iostream>
using namespace std;

int main(){

int opcion;
double USD, resultado, EUR = 1.20, JPY = 0.50, GBP = 2;

cout <<"Ingresa los USD que quieres convertir: "<<endl;
cin>>USD;

cout <<"Hola, a que moneda deseas convertir?"<<endl;
cout<<"--1.USD a EUR--"<<endl;
cout<<"--2.USD a JPY--"<<endl;
cout<<"--3.USD a GBP--"<<endl;
cin>>opcion;

switch (opcion)
{
case 1:

resultado = USD * 1.20;

cout << "La conversion de: " << USD << " USD a "<< EUR << " Euros es: " << resultado <<endl;
    
    break;

    case 2:

    resultado = USD * 0.50;
    cout << "La conversion de: " << USD << " USD a "<< JPY << "  JPY es: " << resultado <<endl;

    break;

    case 3:

    resultado = USD * 2;
    cout << "La conversion de: " << USD << " USD a "<< GBP << " GBP es: " << resultado <<endl;

break;

default:

cout <<"Esa no es una opcion !"<<endl;
    break;
}

cout <<"Gracias por utilizar el programa (;"<<endl;



    return 0;
}