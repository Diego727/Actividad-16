#include "computadora.h"

using namespace std;

Computadora::Computadora(){}

Computadora::Computadora(string _os, string _cpu, string _ram, string _gpu){
    this->os = _os;
    this->cpu = _cpu;
    this->ram = _ram;
    this->gpu = _gpu;
}

void Computadora::setOs(const string &_os){
    os = _os;
}

void Computadora::setCpu(const string &_cpu){
    cpu = _cpu;
}

void Computadora::setRam(const string &_ram){
    ram = _ram;
}

void Computadora::setGpu(const string &_gpu){
    gpu = _gpu;
}

string Computadora::getOs(){
    return os;
}

string Computadora::getCpu(){
    return cpu;
}

string Computadora::getRam(){
    return ram;
}

string Computadora::getGpu(){
    return gpu;
}

bool Computadora::operator == (const Computadora&c) const {
    return cpu == c.cpu;
}

bool Computadora::operator < (const Computadora&c) const {
    return cpu < c.cpu;
}

ostream& operator << (ostream &out, const Computadora &c){
    out << left;
    out << setw(15) << c.os;
    out << setw(15) << c.cpu;
    out << setw(10) << c.ram;
    out << setw(10) << c.gpu;
    out << endl;
    return out;
}

istream& operator >> (istream &in, Computadora &c){
    
    cout << "Sistema operativo: ";
    getline(cin, c.os);
    cout << "Procesador: ";
    getline(cin,c.cpu);
    cout<< "RAM: ";
    getline(cin, c.ram);
    cout<< "Tarjeta grafica: ";
    getline(cin, c.gpu);
    cout<<endl;

    return in;
}
