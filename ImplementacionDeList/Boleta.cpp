/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Boleta.cpp
 * Author: james
 * 
 * Created on June 30, 2023, 10:36 AM
 */

#include "Boleta.h"
#include "Presencial.h"
#include "Semipresencial.h"
#include "Virtual.h"
Boleta::Boleta() {
    dboleta = nullptr;
}

Boleta::Boleta(const Boleta& orig) {
}

Boleta::~Boleta() {
}
void Boleta::lee(char mod,ifstream &arch){
    if(mod=='P') dboleta = new Presencial;
    if(mod=='S') dboleta = new Semipresencial;
    if(mod=='V') dboleta = new Virtual;
    dboleta->lee(arch);
}
int Boleta::conseguirCod(){
    return dboleta->GetCodigo();
}
int Boleta::conseguirEscala(){
    return dboleta->GetEscala();
}
void Boleta::actualizaTotal(double precio){
    dboleta->actualiza(precio);
}
void Boleta::imprimeBoleta(ofstream &arch){ 
    dboleta->imprime(arch);
}

