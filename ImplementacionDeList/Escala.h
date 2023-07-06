/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Escala.h
 * Author: Darklune
 *
 * Created on 27 de junio de 2023, 11:59 AM
 */

#ifndef ESCALA_H
#define ESCALA_H
#include <fstream>
using namespace std;
class Escala {
public:
    Escala();
    Escala(const Escala& orig);
    virtual ~Escala();
    void SetPrecio(double precio);
    double GetPrecio() const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    void leeEscala(ifstream &);
private:
    int codigo;
    double precio;
};

#endif /* ESCALA_H */

