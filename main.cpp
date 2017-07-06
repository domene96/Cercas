/*
Cercas Centurion - Cotizacion
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
#include "Clases.h"
Producto Cercas[33];

void leeInventario (string sArch) {
    fstream archIn;
    archIn.open (sArch.c_str ());

    string sNom;
    double dA, dL, dP;
    int i, k;
    if (sArch=="Inventario/Cercas.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            cout <<sNom <<endl;
            if (isdigit (archIn.peek ())) {
                while (archIn >>dA >>dL >>dP) {
                    //cout <<i <<" " <<dA <<" " <<dL <<" " <<dP <<endl;
                    /*
                    Cercas[i] = new Producto (sNom,dA,dL,dP);
                    cout <<Cercas[i].getNom () <<"\t"
                    <<Cercas[i].getAltura () <<"\t"
                    <<Cercas[i].getLargo () <<"\t"
                    <<Cercas[i].getPrecio () <<endl;
                    */
                    i++;
                }
            }
        }
    }
    archIn.close ();
}

int main() {
    leeInventario ("Inventario/Cercas.txt");

    return 0;
}
