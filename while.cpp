#include <iostream>
using namespace std;

int main(){
int num;

cout<<"Ingrese un numero del 1 al 10."<<endl;
cin>>num;

while (num < 1 && num > 10)
{
         cout << "El numero: "<< num << " no esta entre 1 y 10, vuelve a interntarlo de nuevo."<<endl;
         cin>>num;
}
    

cout <<"El numero: " << num << " esta entre el 1 y 10 bien hecho";



    return 0;
}