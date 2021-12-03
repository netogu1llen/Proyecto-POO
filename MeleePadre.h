/*
Ernesto Guillén Guerrero A01704967 */
#ifndef MeleePadre_H_
#define MeleePadre_H_
#include<iostream>
#include <string>
#include "Proyectiles.h"

using namespace std;

//creacion de la clase padre, 
class Melee{
  protected:
    string objeto;
    int danio;
    float precioVenta;
  public:
    Melee();
    Melee(string obj, int dani, float precio);
    string get_objeto();
    int get_danio();
    float get_precioVenta();
  

    void set_objeto(string);
    void set_danio(int);
    void set_precioVenta(float);
  
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Melee
 */
Melee::Melee(){
  objeto = " ";
  danio = 0;
  precioVenta = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param string obj: el nombre del objeto, int dani: el nivel del personaje, float precio: precio del objeto
 * @return Objeto Melee
*/
Melee::Melee(string obj, int dani, float precio){
  objeto = obj;
  danio = dani;
  precioVenta = precio;
}

//Getter del nombre del Melee
/* getter objeto
*
* @param
* @return string: objeto
*/
string Melee::get_objeto(){
  return objeto;
}

//Getter del danio del Melee
/* getter objeto
*
* @param
* @return int: danio
*/
int Melee::get_danio(){
  return danio;
}

//Getter del danio del Melee
/* getter objeto
*
* @param
* @return float: Melee
*/
float Melee::get_precioVenta(){
  return precioVenta;
}

//Setter del objeto del Melee
/* Setter objeto
*
* @param
* @return
*/
void Melee::set_objeto(string obj){
  objeto=obj;
}

//Setter del danio del Melee
/*
* @param
* @return
*/
void Melee::set_danio(int dani){
  danio=dani;
}

//Setter del precioVenta del Melee
/*
* @param
* @return
*/
void Melee::set_precioVenta(float precio){
  precioVenta=precio;
}


//creacion de una de las clases hijas, espada de hierro
class EspadaHierro: public Melee{
  protected:
    int tiempoSangrado;
    int lingotes;
  public: 
    EspadaHierro();
    EspadaHierro(string obj, int dani, float precio, int tiempo, int lingot);
    int get_tiempoSangrado();
    int get_lingotes();

    void set_tiempoSangrado(int);
    void set_lingotes(int);
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto EspadaHierro
 */
EspadaHierro::EspadaHierro(){
  objeto = " ";
  danio = 0;
  precioVenta = 0.0;
  tiempoSangrado = 0;
  lingotes = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param 
 * @return Objeto Espada de Hierro
*/
EspadaHierro::EspadaHierro(string obj, int dani, float precio, int tiempo, int lingot){
  objeto = obj;
  danio = dani;
  precioVenta = precio;
  tiempoSangrado = tiempo;
  lingotes = lingot;
}

//Getter del tiempo Sagrado del Melee
/* getter Sagrado del Melee
*
* @param
* @return int: Tiempo Sangrado
*/
int EspadaHierro::get_tiempoSangrado(){
  return tiempoSangrado;
}

//Getter del tiempo Sagrado del Melee
/* getter Lingote
*
* @param
* @return int: Lingotes
*/
int EspadaHierro::get_lingotes(){
  return lingotes;
}

//Setter del tiempo Sangrado del Melee
/* setter tiempo Sangrado
*
* @param int:tiempo de la Espada de Hierro
* @return 
*/
void EspadaHierro::set_tiempoSangrado(int tiempo){
  tiempoSangrado=tiempo;
}

//Setter de Lingotes del Melee
/* setter Lingotes
*
* @param int:lingotes de los Lingotes de Hierro
* @return 
*/
void EspadaHierro::set_lingotes(int lingot){
  lingotes=lingot;
}

class Semillera: public Melee{
  protected:
    int numeroExplosiones;
    int plantaSemilla;
  public:
    Semillera();
    Semillera(string obj, int dani, float precio, int numero, int planta);
    int get_numeroExplosiones();
    int get_plantaSemilla();

    void set_numeroExplosiones(int);
    void set_plantaSemilla(int);  
};

Semillera::Semillera(){
  objeto = " ";
  danio = 0;
  precioVenta = 0.0;
  numeroExplosiones=0;
  plantaSemilla=0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param 
 * @return Objeto Semillera
*/
Semillera::Semillera(string obj, int dani, float precio,int numero, int planta){
  objeto = obj;
  danio = dani;
  precioVenta = precio;
  numeroExplosiones=numero;
  plantaSemilla=planta;
}

//Getter del Numero de Explosiones Semillera
/* getter Numero de Explosiones
*
* @param
* @return int: Numero de Explosiones
*/
int Semillera::get_numeroExplosiones(){
  return numeroExplosiones;
}

//Getter del Planta Semilla Semillera
/* getter Planta Semilla
*
* @param
* @return int: Planta Semilla
*/
int Semillera::get_plantaSemilla(){
  return plantaSemilla;
}

//Setter del Numero de Explosiones de Semillera
/* setter Numero de Explosiones
*
* @param int:set_numeroExplosiones Numero de Explosiones de Semillera
* @return 
*/
void Semillera::set_numeroExplosiones(int numero){
  numeroExplosiones=numero;
}

//Setter de Planta Explosiones de Semillera
/* setter  Planta Explosiones
*
* @param int:set_plantaSemilla  Planta Explosiones de Semillera
* @return 
*/
void Semillera::set_plantaSemilla(int planta){
  plantaSemilla=planta;
}

//Clase Hija TerraBlade de Melee
class TerraBlade: public Melee{
  protected:
    int tiempoQuemadura;
    ProyectilesDisparados proye;
  public:
    TerraBlade();
    TerraBlade(string obj, int dani, float precio, int tiempoQ, ProyectilesDisparados pro);
    int get_tiempoQuemadura();
    void set_tiempoQuemadura(int);
    void obtenerDatos();
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto TerraBlade
 */
TerraBlade::TerraBlade(){
  objeto = " ";
  danio = 0;
  precioVenta = 0.0;
  tiempoQuemadura = 0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param 
 * @return Objeto TerraBlade
*/
TerraBlade::TerraBlade(string obj, int dani, float precio,int tiempoQ, ProyectilesDisparados pro){
  objeto = obj;
  danio = dani;
  precioVenta = precio;
  tiempoQuemadura=tiempoQ;
  proye=pro;
}

//Getter Tiempo de Quemadura de TerraBlade
/* getter Tiempo de Quemadura
*
* @param
* @return int: Tiempo de Quemadura
*/
int TerraBlade::get_tiempoQuemadura(){
  return tiempoQuemadura;
}

//Setter del tiempo Quemadura de TerraBlade
/* Setter tiempo Quemadura
*
* @param
* @return
*/
void TerraBlade::set_tiempoQuemadura(int tiempoQ){
  tiempoQuemadura=tiempoQ;
};

void TerraBlade::obtenerDatos(){
  cout<<"La espada terrablade da "<<proye.print()<<endl;
}
#endif