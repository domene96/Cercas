#ifndef Cotizar_h
#define Cotizar_h
#include "Padre.h"

class Cotizar {
public:
    //Constructores
    Cotizar ();
    Cotizar (string,double,double,double);
    //metodos de modificacion
    void setNombre(string sN) {sNombre = sN;};
    void setPrecio(double dP) {dPrecio = dP;};
    void setAltura(double dA) {dAltura = dA;};
    void setAnchura(double dB) {dAnchura = dB;};
    //metodos de acceso
    string getNombre() {return sNombre;};
    double getPrecio() {return dPrecio;};
    double getAltura() {return dAltura;};
    double getAnchura() {return dAnchura;};
    //metodos
private:
    string sNombre;
    double dPrecio, dAltura, dAnchura;
};

Clase::Clase () {
    sNombre = "";
    dPrecio = 0;
    dAltura = 0;
    dAnchura = 0;
}

Clase::Clase (string sN, double dP, double dA, double dB) {
    sNombre = sN;
    dPrecio = dP;
    dAltura = dA;
    dAnchura = dB;
}

#endif
