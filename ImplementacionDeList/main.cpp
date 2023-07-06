/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: james
 *
 * Created on July 5, 2023, 7:54 PM
 */


#include <list>
#include <iterator>
#include <fstream>
#include <iostream>
#include "Boleta.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    list<Alumno> lstAlumnos;
    ifstream arch("Alumnos.csv",ios::in);
    if(!arch){
        cout << "No se pudo abrir el archivo Alumnos.csv";
        exit(1);
    }
    ofstream archi("Prueba.txt",ios::out);
    if(!archi){
        cout << "No se pudo abrir el archivo prueba.csv";
        exit(1);
    }
    char mod;
    Alumno alu;
    list<Alumno>::iterator it = lstAlumnos.begin();
    while(1){
        arch>>mod;
        if(arch.eof()) break;
        arch.get();
        alu.leeAlumno(arch);
        lstAlumnos.push_back(alu);
        cout << "Hola"<<endl;
        archi<< lstAlumnos.size()<<endl; // he creado 2 funciones simples que lean e impriman los datos de alumno.csv
        // y añadan a la lista de class Alumno solo para probar el push_back pero me encontre con el problema de que
        // no parecian añadirse a la lista pero al implementar una impresion de un iterador parece correr correctamente
        (*it).imprimeALumno(archi); // si se borra esta linea se cae el programa tras 5 iteraciones
        it++;                       // he intentado buscar motivos por los cuales no se ejecute adecuadamente el push_back
                                    // he confirmado que se carga adecuadamente la variable alu
    }
    // prueba de impresion de los datos cargados
    for(list<Alumno>::iterator it = lstAlumnos.begin(); it!= lstAlumnos.end();it++)
        (*it).imprimeALumno(archi);
    
    
    return 0;
}

