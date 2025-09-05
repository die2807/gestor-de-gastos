#pragma once
#include <string>
using namespace std;
 
class Transaccion {

    int id; 
    string fecha;
    string categoria;
    double monto;
    string descripcion;
    int necesidad; // necesidad: 1-5

    public:
        Transaccion(); // contructor por defecto
        Transaccion( int id_, string fecha_, string categoria_, double monto_, string descripcion_, int necesidad_ ); // constructor con parametros

        // getters
        int getId() const;
        const string& getFecha() const;
        const string& getCategoria() const;
        double getMonto() const;
        const string& getDescripcion() const;
        int getNecesidad() const;

        //setters
        void setId(int nuevoId);
        void setFecha(const string& nuevaFecha);
        void setCategoria(const string& nuevaCategoria);
        void setMonto(double nuevoMonto);
        void setDescripcion(const string& nuevaDescripcion);
        void setNecesidad(int nuevaNecesidad);
        
};
