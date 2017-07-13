#ifndef Clases_h
#define Clases_h

/////CERCAS/////PORTONES/////FORTACERA//////
class Producto {
    public:
        Producto () {
            sNom="";
            dA=0;
            dL=0;
            dP=0;
        }
        Producto (string n, double a, double b, double c) {
            sNom=n;
            dA=a;
            dL=b;
            dP=c;
        }
        void setNom (string n) {sNom=n;};
        void setAltura (double a) {dA=a;};
        void setLargo (double b) {dL=b;};
        void setPrecio (double c) {dP=c;};
        string getNom () {return sNom;};
        double getAltura () {return dA;};
        double getLargo () {return dL;};
        double getPrecio () {return dP;};
        void operator= (Producto);
    private:
        string sNom;
        double dA, dL, dP;
};

void Producto::operator= (Producto a) {
    this->sNom = a.sNom;
    this->dA = a.dA;
    this->dL = a.dL;
    this->dP = a.dP;
}

///////////////////POSTE////////////////////
class Poste {
    public:
        Poste () {
            sNom="";
            dA=0;
            dP=0;
        }
        Poste (string n, double a, double b) {
            sNom=n;
            dA=a;
            dP=b;
        }
        void setNom (string n) {sNom=n;};
        void setAltura (double a) {dA=a;};
        void setLargo (double b) {dP=b;};
        string getNom () {return sNom;};
        double getAltura () {return dA;};
        double getPrecio () {return dP;};
    private:
        string sNom;
        double dA, dP;
};

#endif
