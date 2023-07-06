/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Virtual.h
 * Author: Darklune
 *
 * Created on 27 de junio de 2023, 12:00 PM
 */

#ifndef VIRTUAL_H
#define VIRTUAL_H
#include "Alumno.h"
class Virtual:public Alumno{
public:
    Virtual();
    Virtual(const Virtual& orig);
    virtual ~Virtual();
    void SetTotal(double total);
    double GetTotal() const;
    void SetLicencia(char* licencia);
    void GetLicencia(char *) const;
    void lee(ifstream &);
    void actualiza(double precio);
    void imprime(ofstream &);
private:
    char *licencia;
    double total;
};

#endif /* VIRTUAL_H */

