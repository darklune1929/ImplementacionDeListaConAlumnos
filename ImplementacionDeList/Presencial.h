/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Presencial.h
 * Author: Darklune
 *
 * Created on 27 de junio de 2023, 12:00 PM
 */

#ifndef PRESENCIAL_H
#define PRESENCIAL_H
#include "Alumno.h"
class Presencial:public Alumno{
public:
    Presencial();
    Presencial(const Presencial& orig);
    virtual ~Presencial();
    void SetTotal(double total);
    double GetTotal() const;
    void SetRecargo(double recargo);
    double GetRecargo() const;
    void lee(ifstream &);
    void actualiza(double );
    void imprime(ofstream &);
private:
    double recargo;
    double total;
};

#endif /* PRESENCIAL_H */

