#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Computadora{
    private:
        string os;
        string cpu;
        string ram;
        string gpu;

    public:
        Computadora();
        Computadora(string,string,string,string);

        //Setters
        void setOs(const string&);
        void setCpu(const string&);
        void setRam(const string&);
        void setGpu(const string&);

        //Getters
        string getOs();
        string getCpu();
        string getRam();
        string getGpu();

        bool operator == (const Computadora&) const;
        bool operator <(const Computadora &) const;
        friend ostream& operator << (ostream&, const Computadora&);
        friend istream& operator >> (istream&, Computadora&); 

};

#endif // COMPUTADORA_H
