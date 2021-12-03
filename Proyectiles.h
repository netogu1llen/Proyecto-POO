/*
Ernesto Guillén Guerrero A01704967 */
#ifndef Proyectiles_H_
#define Proyectiles_H_
#include <sstream>
#include<iostream>
#include <string>

using namespace std;


class ProyectilesDisparados{
  private: 
    int golpes;
    int alcance;
  public:
    ProyectilesDisparados();
    ProyectilesDisparados(int golp, int alcan);
    int get_golpes();
    int get_alcance();

    void set_golpes(int);
    void set_alcance(int);
    string print();   
};

/**
 * Constructor por default
 *
 * @param
 * @return Objeto Proyectiles Disparados
 */
ProyectilesDisparados::ProyectilesDisparados(){
  golpes=0;
  alcance=0;
}

/**
 * Constructor donde recibe valores para llenar las variables de instancia
 *
 * @param 
 * @return Objeto Proyectiles Disparados
*/
ProyectilesDisparados::ProyectilesDisparados(int golp, int alcan){
  golpes=golp;
  alcance=alcan;
}

//Getter de golpes de Proyectiles disparados 
/* getter golpes
*
* @param
* @return int: golpes
*/
int ProyectilesDisparados::get_golpes(){
  return golpes;
}

//Getter del Alcance de Proyectiles Disparado  
/* getter Alcance
*
* @param
* @return int: Alcance
*/
int ProyectilesDisparados::get_alcance(){
  return alcance;
}

//Setter de golpes de ProyectilesDisparados
/* setter golpes
*
* @param int:golp Golpes
* @return 
*/
void ProyectilesDisparados::set_golpes(int golp){
  golpes=golp;  
}

//Setter de Alcance de ProyectilesDisparados
/* setter Alcance
*
* @param int:alcan Alcance
* @return 
*/
void ProyectilesDisparados::set_alcance(int alcan){
  alcance=alcan;
}

string ProyectilesDisparados::print(){
  stringstream aux;
  aux << golpes <<" golpes con un alcance de " <<alcance<<" bloques.";
  return aux.str();
}

#endif