#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "computadora.h"

class Laboratorio{
    private:
        vector<Computadora> equipos;

    public:
        Laboratorio();
        void agregarFinal(const Computadora&);
        void mostrar();
        void respaldar_tabla();
        void respaldar();
        void recuperar();

        int size();
        void insertar(const Computadora&, const int&);
        void inicializar(const Computadora&, const int&);
        void eliminar(const int&);
        void eliminar_ultimo();
        void ordenar();
        Computadora* buscar(const Computadora&);

        friend Laboratorio& operator << (Laboratorio&, const Computadora&);
};

#endif // LABORATORIO_H
