//
// Created by eric on 31/08/2021.
//

#include <iostream>
#include "Chien.h"

Chien::Chien(string race, string couleur, int taille, string nom) {
    this->race=race;
    this->couleur=couleur;
    this->taille=taille;
    this->nom=nom;
}

void Chien::aboyer() {
cout<<"OUAFF OUAFF"<<endl;
}

void Chien::manger() {
cout<<"MIAM MIAM"<<endl;
}

void Chien::rongerOs() {
cout<<"CROC CROC"<<endl;
}
