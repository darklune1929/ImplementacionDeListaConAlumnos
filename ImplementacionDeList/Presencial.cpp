/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Presencial.cpp
 * Author: Darklune
 * 
 * Created on 27 de junio de 2023, 12:00 PM
 */

#include "Presencial.h"

Presencial::Presencial() {
    recargo = 0;
    total = 0;
}

Presencial::Presencial(const Presencial& orig) {
}

Presencial::~Presencial() {
}

void Presencial::SetTotal(double total) {
    this->total = total;
}

double Presencial::GetTotal() const {
    return total;
}

void Presencial::SetRecargo(double recargo) {
    this->recargo = recargo;
}

double Presencial::GetRecargo() const {
    return recargo;
}

void Presencial::lee(ifstream &arch){
    Alumno::lee(arch);
    arch >> recargo;
}
void Presencial::actualiza(double precio){
    Alumno::actualiza(precio);
    total = Alumno::GetTotal()*recargo/100;
    Alumno::SetTotal(Alumno::GetTotal()+total);
}
void Presencial::imprime(ofstream &arch){
    Alumno::imprime(arch);
    for(int i=0;i<15;i++) arch << " ";
    arch << Alumno::GetTotal()<< " "<< GetTotal()<<endl;
}