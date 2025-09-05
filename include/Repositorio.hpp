#pragma once
#include "Transaccion.hpp"
#include <vector>
#include <string>
using namespace std;

class Repositorio {
    private:
        string rutas;
        vector<Transaccion> transacciones;
        int nxt; // siguiente id disponible

        bool existeArchivo(const string& ruta);


    public:
    // constructor 
        explicit Repositorio(const string& rutaArchivo);

    //entrada y salida de datos (CVS)
    
    bool cargarDesdeArchivo();
    bool guardarEnArchivo() const;
    
    // operaciones con transacciones
        void agregarTransaccion(const Transaccion& transaccion);
        bool eliminarTransaccion(int id);

    // Acceso a los datos
        const vector<Transaccion>& obtenerTodas() const;
        vector <Transaccion>&  obtenerTodasEditables();

    // utilidad
        int obtenerSiguienteId() const; // devuelve el siguiente id disponible

};