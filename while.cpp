#include <iostream>
using namespace std;

int main(){
int num;


do
{
    cout<<"Ingrese un numero del 1 al 10."<<endl;
cin>>num;
if (num <1 || num > 10){

    cout << "El numero: "<< num << " no esta entre 1 y 10, vuelve a interntarlo de nuevo."<<endl;
}
} while (num <1 || num > 10);
    

cout <<"El numero: " << num << " esta entre el 1 y 10 bien hecho";



    return 0;
}