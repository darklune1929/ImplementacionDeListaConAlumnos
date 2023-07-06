/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Boleta.h
 * Author: james
 *
 * Created on June 30, 2023, 10:36 AM
 */

#ifndef BOLETA_H
#define BOLETA_H
#include "Alumno.h"
class Boleta {
public:
    Boleta();
    Boleta(const Boleta& orig);
    virtual ~Boleta();
    void lee(char ,ifstream &);
    int conseguirCod();
    int conseguirEscala();
    void actualizaTotal(double );
    void imprimeBoleta(ofstream &);
private:
    Alumno *dboleta;
};

#endif /* BOLETA_H */

