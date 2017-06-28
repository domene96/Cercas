/*
Cercas Centurion - Cotizacion
*/

#include <iostream>
#include <fstream>
using namespace std;
struct Producto {
    string sNom;
    double dA, dL, dP;
};

struct Poste {
    string sNom;
    double dA, dP;
};

Producto Cercas[11][6];
Producto Portones[6][32];
Producto Fortacera[16][2];
Poste Postes[4][6];

void leeInventario (string sFile) {
    ifstream archIn;
    archIn.open (sFile);

    string sNom;
    double dA, dL, dP;
    int i,k;
    if (sFile=="Cercas.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            k=0;
            while (archIn >>dA >>dL >>dP) {
                Cercas[i][k] = new Producto (sNom, dA, dL, dP);
            }
        }
    }
    else if (sFile=="Portones.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            k=0;
            while (archIn >>dA >>dL >>dP) {
                Portones[i][k] = new Producto (sNom, dA, dL, dP);
            }
        }
    }
    else if (sFile=="Fortacera.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            k=0;
            while (archIn >>dA >>dL >>dP) {
                Fortacera[i][k] = new Producto (sNom, dA, dL, dP);
            }
        }
    }
    else if (sFile=="Postes.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            k=0;
            while (archIn >>dA >>dP) {
                Postes[i][k] = new Poste (sNom, dA, dP);
            }
        }
    }

    archIn.close ();
}

void muestraInventario () {
    int i,k;
    for (i=0; i<11; i++) { //11 es el # de tipos de cercas
        for (k=0; k<6; k++) { //6 es la cerca mas variada
            cout <<Cercas[i][k] <<"\t" <<endl;
        }
    }
}

int main() {
    leeInventario ("Cercas.txt");
    leeInventario ("Portones.txt");
    leeInventario ("Fortacera.txt");
    leeInventario ("Postes.txt");
    muestraInventario ();
    return 0;
}
