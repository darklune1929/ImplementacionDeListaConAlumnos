/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escala.cpp
 * Author: Darklune
 * 
 * Created on 27 de junio de 2023, 11:59 AM
 */

#include "Escala.h"

Escala::Escala() {
    precio =0;
    codigo=0;
}

Escala::Escala(const Escala& orig) {
}

Escala::~Escala() {
}

void Escala::SetPrecio(double precio) {
    this->precio = precio;
}

double Escala::GetPrecio() const {
    return precio;
}

void Escala::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int Escala::GetCodigo() const {
    return codigo;
}
void Escala::leeEscala(ifstream &arch){
    int esc;
    char c;
    arch >> esc;
    if(arch.eof()) return;
    SetCodigo(esc);
    arch >> c >> precio;
}

