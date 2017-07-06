/*
Cercas Centurion - Cotizacion
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
#include "Clases.h"
Producto Cercas[32];

void leeInventario (string sArch) {
    fstream archIn;
    archIn.open (sArch.c_str ());

    string sNom;
    double dA, dL, dP;
    int i=0, k;
    if (sArch=="Inventario/Cercas.txt") {
        while (getline (archIn,sNom)) {
            cout <<sNom <<endl;
            //cout <<archIn.peek () <<" " <<isdigit (archIn.peek ()) <<endl;
            if (isdigit (archIn.peek ())) {
                while (archIn >>dA >>dL >>dP) {
                    cout <<i <<" " <<dA <<" " <<dL <<" " <<dP <<endl;
                    i++;
                    //cout <<archIn.peek () <<" " <<isdigit (archIn.peek ()) <<endl;
                    if (!isdigit (archIn.peek ()))
                        break;
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
