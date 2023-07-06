/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Semipresencial.cpp
 * Author: Darklune
 * 
 * Created on 27 de junio de 2023, 12:00 PM
 */

#include "Semipresencial.h"

Semipresencial::Semipresencial() {
    total = 0;
    descuento =0;
}

Semipresencial::Semipresencial(const Semipresencial& orig) {
}

Semipresencial::~Semipresencial() {
}

void Semipresencial::SetTotal(double total) {
    this->total = total;
}

double Semipresencial::GetTotal() const {
    return total;
}

void Semipresencial::SetDescuento(double descuento) {
    this->descuento = descuento;
}

double Semipresencial::GetDescuento() const {
    return descuento;
}
void Semipresencial::lee(ifstream &arch){
    Alumno::lee(arch);
    arch >> descuento;
}
void Semipresencial::actualiza(double precio){
    Alumno::actualiza(precio);
    total = Alumno::GetTotal()*descuento/100;
    Alumno::SetTotal(Alumno::GetTotal()-total);
}
void Semipresencial::imprime(ofstream &arch){
    Alumno::imprime(arch);
    for(int i=0;i<15;i++) arch << " ";
    arch << Alumno::GetTotal() << " "<< GetTotal()<<endl;
}
