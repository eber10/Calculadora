#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int opcion, a, b;
    bool salir=false;
    do{
        cout<<"BIENVENIDO AL SISTEMA DE CALCULOS"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"1. suma "<<endl;
        cout<<"2. resta "<<endl;
        cout<<"3. division "<<endl;
        cout<<"4. multiplicacion "<<endl;        
        cout<<"5. salir"<<endl;
        cout<<"OPCION: "; cin>>opcion;
        switch(opcion){
            case 1:
            	cout << "Ingrese el valor de A: "; cin >> a;
            	cout << "Ingrese el valor de B: "; cin >> b;
            	cout << "\nLa suma de A + B :  " << a + b << endl;
                break;
            case 2:
                cout<<"Ingrese el valor de A: "; cin>>a;
                cout<<"Ingrese el valor de B: "; cin>>b;
                cout<<"\n la resta de A - B: "<<a-b<<endl;
                break;
            case 3:
            	cout<<"Ingrese el valor de A: "; cin>>a;
                cout<<"Ingrese el valor de B: "; cin>>b;
                cout<<"\n La division de A / B: "<<a/b<<endl;
                break;
            case 4:
                cout<<"Ingrese el valor de A: "; cin>>a;
                cout<<"Ingrese el valor de B: "; cin>>b;
                cout<<"\n la resta de A x B: "<<a*b<<endl;
                break;
            case 5:
                cout<<"saliendo..."<<endl;
                salir=true;
                break;
            default:
            break;
        }

    }while(!salir);
    return 0;
}