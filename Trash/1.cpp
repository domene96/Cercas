/*
Cercas Centurion - Cotizacion
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Clases.h"
/*
struct Producto {
    string sNom;
    double dA, dL, dP;
};
struct Poste {
    string sNom;
    double dA, dP;
};
*/

//no tienen que ser matrices, pueden ser arreglos
/*
Producto Cercas[11][6];
Producto Portones[6][32];
Producto Fortacera[16][2];
Poste Poste[4][6];
*/
Producto Cercas[30];

void leeInventario (string sArch) {
    fstream archIn;
    archIn.open (sArch.c_str ());

    string sNom;
    double dA, dL, dP;
    int i, k;
    if (sArch=="Cercas.txt") {
        cout <<1 <<endl;
        i=0;
        do {
            getline (archIn,sNom);
            cout <<sNom <<endl;
            while (archIn >>dA >>dL >>dP) {
                cout <<dA <<dL <<dP <<endl;
                //Cercas[i] = new Producto (sNom,dA,dL,dP);
                cout <<Cercas[i].getNom () <<" "
                <<Cercas[i].getAltura () <<" "
                <<Cercas[i].getLargo () <<" "
                <<Cercas[i].getPrecio () <<endl;
                i++;
            }
        } while (i<10); //# de tipos de cercas en Cercas.txt
    }
/*
    else if (sArch=="Portones.txt") {
        i=0;
        do {
            getline (archIn,sNom);
            //create object
            Cercas[i] = new Producto (sNom);
            while (archIn >>dA >>dL >>dP) {
                //set variables
                Cercas[i].setAltura(dA);
                Cercas[i].setLargo(dL);
                Cercas[i].setPrecio(dP);
            }
            i++;
        } while (i<11);
    }
    else if (sArch=="Fortacera.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            k=0;
            while (archIn >>dA >>dL >>dP) {
                Fortacera[i][k] = sNom;
                Fortacera[i][k+1] = dA;
                Fortacera[i][k+2] = dL;
                Fortacera[i][k+3] = dP;
                k+=4;
            }
            i++;
        }
    }
    else if (sArch=="Poste.txt") {
        i=0;
        while (getline (archIn,sNom)) {
            k=0;
            while (archIn >>dA >>dP) {
                Poste[i][k] = sNom;
                Poste[i][k+1] = dA;
                Poste[i][k+2] = dP;
                k+=3;
            }
            i++;
        }
    }
*/
    archIn.close ();
}

void muestraInventario () {
/*
    int i,k;
    for (i=0; i<11; i++) { //11 es el # de tipos de cercas TOTAL
        cout <<Cercas[i].getNom () <<"\t" <<Cercas[i].getAltura ()
        <<"\t" <<Cercas[i].getLargo () <<"\t" <<Cercas[i].getPrecio ()
        <<endl;
    }
*/
}

int main() {
    leeInventario ("Cercas.txt");
    leeInventario ("Portones.txt");
    leeInventario ("Fortacera.txt");
    leeInventario ("Poste.txt");
    muestraInventario ();

    return 0;
}
