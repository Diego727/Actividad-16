#include "laboratorio.h"

using namespace  std;

Laboratorio::Laboratorio(){}

void Laboratorio::agregarFinal(const Computadora &c){
    equipos.push_back(c);
}

void Laboratorio::mostrar(){
    cout<< left;
    cout<<setw(15)<<"OS";
    cout<<setw(15)<<"CPU";
    cout<<setw(10)<<"RAM";
    cout<<setw(10)<<"GPU";
    cout<<endl;
    
    for(int i = 0; i<equipos.size(); i++){
        cout << equipos[i];
    }

}

Laboratorio& operator << (Laboratorio &l, const Computadora &c){
    l.agregarFinal(c);
    return l;
}

void Laboratorio::respaldar_tabla(){
    ofstream archivo("equipos_tabla.txt");
        if(archivo.is_open()){
            archivo<< left;
            archivo<<setw(15)<<"OS";
            archivo<<setw(15)<<"CPU";
            archivo<<setw(10)<<"RAM";
            archivo<<setw(10)<<"GPU";
            archivo<<endl;
            for(int i = 0; i<equipos.size(); i++){
            archivo << equipos[i];
        }
    }

    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("equipos.txt");
        if(archivo.is_open()){
            for(int i = 0; i<equipos.size(); i++){
            archivo << equipos[i].getOs() <<endl ;
            archivo << equipos[i].getCpu() <<endl;
            archivo << equipos[i].getRam() <<endl;
            archivo << equipos[i].getGpu() <<endl;
        }
    }

    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("equipos.txt");
    if(archivo.is_open()){
        string aux;
        Computadora c;

        while(true){
            getline(archivo, aux);
            
            if(archivo.eof())
                break;

            c.setOs(aux);

            getline(archivo, aux);
            c.setCpu(aux);

            getline(archivo, aux);
            c.setRam(aux);

            getline(archivo, aux);
            c.setGpu(aux);

            agregarFinal(c);
        }
    }
    archivo.close();
}

int Laboratorio::size(){
    return equipos.size();
} 
 
void Laboratorio::insertar(const Computadora &c, const int &pos){
    if(pos >= size() or pos < 0)
        cout<<"Posicion no valida :("<<endl;
    else
        equipos.insert(equipos.begin()+pos,c);
    
}

void  Laboratorio::inicializar(const Computadora &c, const int &n){
    equipos = vector<Computadora>(n,c);
}

void Laboratorio::eliminar(const int &pos){
    if(pos >= size()or pos < 0)
        cout<<"Posicion no valida :("<<endl;
    else
        equipos.erase(equipos.begin()+pos);
}

void Laboratorio::eliminar_ultimo(){
    equipos.pop_back();
}

void Laboratorio::ordenar(){
    sort(equipos.begin(), equipos.end());
}

Computadora* Laboratorio::buscar(const Computadora& c){
    //vector <Computadora>::iterator
    auto it = find(equipos.begin(), equipos.end(), c);

    if(it == equipos.end())
        return nullptr;
    else
        return &(*it);
    
}



