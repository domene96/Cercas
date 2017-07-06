/*
José Domene
Cercas Centurion - Cotizacion
*/

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
#include "Producto.h"
void cotiza (double dMetros, string sProducto, double dAltura) {
    double dAnchura, dCant, dCantPostes, dAlturaPostes, dCantAbrazaderas;
    double dTotal, dIva=0.168, dCostoUnidad=1016.71, dCostoPostes=330.84,
    dCostoAbrazaderas=28.03, dCostoInstalacion=65;
    if (sProducto=="Tradicional") {
        //Constantes
        dAnchura = 2.5;
        //Cantidades
        dCant = dMetros/dAnchura;
        dCantPostes = dCant+1;
        dAlturaPostes = dAltura+0.5;
        dCantAbrazaderas = dCantPostes*((dAlturaPostes-0.5)/0.5);
        //Costos
        dTotal += dCostoUnidad * dCant;
        dTotal += dCostoPostes * dCantPostes;
        dTotal += dCostoAbrazaderas * dCantAbrazaderas;
        dTotal += dCostoInstalacion * dMetros;
        //Total
        cout <<dCant <<"\t" <<sProducto <<"\t" <<dCostoUnidad
        <<"\t" <<dCant*dCostoUnidad <<endl
        <<dCantPostes <<"\t" <<"Postes" <<"\t" <<"\t" <<dCostoPostes
        <<"\t" <<dCantPostes*dCostoPostes <<endl
        <<dCantAbrazaderas <<"\t" <<"Abrazaderas" <<"\t" <<dCostoAbrazaderas
        <<"\t" <<dCantAbrazaderas*dCostoAbrazaderas <<endl
        <<dMetros <<"\t" <<"Instalacion" <<"\t" <<dCostoInstalacion
        <<"\t" <<dMetros*dCostoInstalacion <<endl
        <<"\t" <<"\t" <<"Subtotal: " <<dTotal+3407 <<endl
        <<"\t" <<"\t" <<"Iva: " <<dTotal*dIva <<endl
        <<"\t" <<"\t" <<"Total: " <<dTotal+3407+dTotal*dIva <<endl;
    }
}

void leeInventario () {
    string sProducto;
    double dPrecio;
    ifstream archInv;
    archInv.open("Inventario.txt");
    do {
        archInv >>sProducto >>dPrecio;
    }
}

int main() {
    double dMetros;
    cout <<"Metros: ";
    cin >>dMetros;

    string sProducto;
    cout <<"Producto: ";
    cin >>sProducto;

    double dAltura;
    cout <<"Altura: ";
    cin >>dAltura;

    cotiza (dMetros,sProducto,dAltura);

    return 0;
}
