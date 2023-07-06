/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Alumno.h
 * Author: Darklune
 *
 * Created on 27 de junio de 2023, 12:00 PM
 */

#ifndef ALUMNO_H
#define ALUMNO_H
#include <fstream>
using namespace std;
class Alumno {
public:
    Alumno();
    Alumno(const Alumno& orig);
    virtual ~Alumno();
    void SetTotal(double total);
    double GetTotal() const;
    void SetCreditos(double creditos);
    double GetCreditos() const;
    void SetEscala(int escala);
    int GetEscala() const;
    void SetNombre(char* nombre);
    void GetNombre(char *) const;
    void SetCodigo(int codigo);
    int GetCodigo() const;
    virtual void lee(ifstream &);
    virtual void actualiza(double );
    virtual void imprime(ofstream &);
    void operator =(const Alumno &);
    void leeAlumno(ifstream &);
    void imprimeALumno(ofstream &);
private:
    int codigo;
    char *nombre;
    int escala;
    double creditos;
    double total;
};

#endif /* ALUMNO_H */

