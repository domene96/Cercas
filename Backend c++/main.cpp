/*
Cercas Centurion - Cotizacion
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
#include "Clases.h"
#include "LinkedList.h"
LinkedList<Producto> *Cercas = new LinkedList<Producto>;

void leeInventario (string sArch) {
    fstream archIn;
    archIn.open (sArch.c_str ());

    Producto *tmp;
    string sNom;
    double dA, dL, dP;
    int i=0, k;
    if (sArch=="Inventario/Cercas.txt") {
        while (getline (archIn,sNom)) {
            cout <<sNom <<endl;
            if (isdigit (archIn.peek ())) { //checa que el siguiente input sea un numero
                while (archIn >>dA >>dL >>dP) {
                    cout <<i <<" " <<dA <<" " <<dL <<" " <<dP <<endl;

                    //guarda info de cercas en lista encadenada
                    tmp = new Producto (sNom,dA,dL,dP);
                    Cercas->addLast (tmp);

                    i++;
                    if (!isdigit (archIn.peek ())) //si el sig input no es numero se regresa a leer el nombre
                        break;
                }
            }
        }
    }
    archIn.close ();
}

int main() {
    leeInventario ("Inventario/Cercas.txt");
    Cercas->print ();

    return 0;
}
