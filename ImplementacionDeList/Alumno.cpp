/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alumno.cpp
 * Author: Darklune
 * 
 * Created on 27 de junio de 2023, 12:00 PM
 */

#include "Alumno.h"
#include <cstring>
#include <iomanip>
Alumno::Alumno() {
    nombre =nullptr;
    total = 0;
    creditos =0;
    escala =0;
    codigo =0;
}

Alumno::Alumno(const Alumno& orig) {
   *this = orig;
}

Alumno::~Alumno() {
}

void Alumno::SetTotal(double total) {
    this->total = total;
}

double Alumno::GetTotal() const {
    return total;
}

void Alumno::SetCreditos(double creditos) {
    this->creditos = creditos;
}

double Alumno::GetCreditos() const {
    return creditos;
}

void Alumno::SetEscala(int escala) {
    this->escala = escala;
}

int Alumno::GetEscala() const {
    return escala;
}

void Alumno::SetNombre(char* cad) {
    if(nombre!=nullptr) delete nombre;
    nombre = new char[strlen(cad)+1];
    strcpy(nombre,cad);
    
}

void Alumno::GetNombre(char *cad) const {
    strcpy(cad,nombre);
}

void Alumno::SetCodigo(int codigo) {
    this->codigo = codigo;
}

int Alumno::GetCodigo() const {
    return codigo;
}

void Alumno::lee(ifstream &arch){
    char c,nom[100];
    arch >> codigo;
    if(arch.eof()) return;
    arch >> c;
    arch.getline(nom,100,',');
    SetNombre(nom);
    arch >> escala >> c >> creditos >> c;
}
void Alumno::actualiza(double precio){
    total = precio * creditos;
}
void Alumno::imprime(ofstream &arch){
    char nom[100];
    GetNombre(nom);
    arch << left << setprecision(2)<< fixed<<setw(15)<<codigo<<setw(70)<<nom 
            << setw(7)<< escala << setw(8)<<creditos;    
}
void Alumno::operator =(const Alumno &alu){
    char nom[50];
    alu.GetNombre(nom);
    SetNombre(nom);
    total = alu.total;
    creditos =alu.creditos;
    escala =alu.escala;
    codigo =alu.codigo;
}
void Alumno::leeAlumno(ifstream &arch){
    char c,nom[100];
    arch >> codigo;
    if(arch.eof()) return;
    arch >> c;
    arch.getline(nom,100,',');
    SetNombre(nom);
    arch >> escala >> c >> creditos >> c;
    arch.getline(nom,100,'\n');
}
void Alumno::imprimeALumno(ofstream &arch){
    char nom[100];
    GetNombre(nom);
    arch << left << setprecision(2)<< fixed<<setw(15)<<codigo<<setw(70)<<nom 
            << setw(7)<< escala << setw(8)<<creditos<<endl;  
}