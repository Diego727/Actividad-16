#include <iostream>
#include "laboratorio.h"
#include "computadora.h"

using namespace std;

int main(){
    Laboratorio l;
    Computadora cmp;
    Computadora* ptr;
    int op = 1;
    int temp;

    while(op != 0){
        cout<<endl;
        cout<<"1.- Agregar"<<endl;
        cout<<"2.- Mostrar"<<endl;
        cout<<"3.- Respaldar"<<endl;
        cout<<"4.- Recuperar"<<endl;
        cout<<"5.- Insertar"<<endl;
        cout<<"6.- Inicializar"<<endl;
        cout<<"7.- Eliminar"<<endl;
        cout<<"8.- Eliminar ultimo"<<endl;
        cout<<"9.- Ordenar por CPU"<<endl;
        cout<<"10.- Buscar"<<endl;
        cout<<"0.- Salir"<<endl;
        cin>>op;
        cin.ignore();
        cout<<endl;

        switch (op)
        {
        case 1:
            cin>>cmp;
            l.agregarFinal(cmp);
            break;
        case 2:
            l.mostrar();
            break;

        case 3:
            l.respaldar();
            break;

        case 4:
            l.recuperar();
            break;

        case 5:
            cin>>cmp;
            cout<<"Ingrese una posicion:";
            cin>>temp;
            cin.ignore();
            l.insertar(cmp,temp);
            break;

        case 6:
            cin>>cmp;
            cout<<"n: ";
            cin>>temp;
            cin.ignore();
            l.inicializar(cmp,temp);
            break;

        case 7:
            cout<<"Ingrese una posicion: ";
            cin>>temp;
            cin.ignore();
            l.eliminar(temp);
            break;
        case 8:
            l.eliminar_ultimo();
            break;
        case 9:
            l.ordenar();
            break;
        case 10:
            cin>>cmp;
            ptr = l.buscar(cmp);
            if(ptr == nullptr)
                cout<<"No se ha encontrado el elemento";
            else{
                cout<<"Se ha encontrado el elemento a buscar:"<<endl;
                cout<< *ptr;
            }

            break;

        case 0:
            cout<<"Hasta luego"<<endl;
            break;
        
        default:
            cout<<"Opcion no valida :("<<endl;
            break;
        }
    }


    return 0;
}