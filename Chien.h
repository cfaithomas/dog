//
// Created by eric on 31/08/2021.
//

#ifndef DOG_CHIEN_H
#define DOG_CHIEN_H

#include <string>

using namespace std;
class Chien {

    /*************************attributs*******************/
public:
    string race;
    string couleur;
    int taille;
    string nom;
    /************************constructeur******************/
    Chien(string race,string couleur,int taille,string nom);
    /*************************méthodes*********************/
    void aboyer();
    void manger();
    void rongerOs();


};


#endif //DOG_CHIEN_H
