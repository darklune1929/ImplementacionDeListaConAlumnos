/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Virtual.cpp
 * Author: Darklune
 * 
 * Created on 27 de junio de 2023, 12:00 PM
 */

#include "Virtual.h"
#include <cstring>
#include <iomanip>
Virtual::Virtual() {
    total = 0;
    licencia =nullptr;
}

Virtual::Virtual(const Virtual& orig) {
}

Virtual::~Virtual() {
}

void Virtual::SetTotal(double total) {
    this->total = total;
}

double Virtual::GetTotal() const {
    return total;
}

void Virtual::SetLicencia(char* cad) {
    if(licencia!=nullptr) delete licencia;
    licencia = new char[strlen(cad)+1];
    strcpy(licencia,cad);
}

void Virtual::GetLicencia(char *cad) const {
    strcpy(cad,licencia);
}
void Virtual::lee(ifstream &arch){
    char lic[20];
    Alumno::lee(arch);
    arch.getline(lic,20,'\n');
    SetLicencia(lic);
}
void Virtual::actualiza(double precio){
    Alumno::actualiza(precio);
    total = 100;
    Alumno::SetTotal(Alumno::GetTotal()+total);
}
void Virtual::imprime(ofstream &arch){
    char lic[15];
    Alumno::imprime(arch);
    GetLicencia(lic);
    arch << setw(15)<<lic << Alumno::GetTotal()<< " "<< GetTotal()<<endl;    
}
