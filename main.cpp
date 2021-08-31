#include <iostream>
#include "Chien.h"

int main() {
    /******************création des chiens*************/
    Chien medor=Chien("Berger","Beige",50,"medor");
    Chien toto=Chien("cocker","marron",50,"toto");
    /***************Appel des méthodes*****************/
    medor.aboyer();
    toto.rongerOs();
    medor.manger();
    /*****************affichage ses attributs**************/
    cout<<medor.taille<<endl;
    cout<<medor.taille;

    return 0;
}
