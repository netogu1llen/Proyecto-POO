/*
Ernesto Guillén Guerrero A01704967 */
#include <string>

using namespace std;

class Ranger{
private:
  string objeto;
  int daño;
  float precioVenta;
  int ammoCapacity;
  float rangoMaximo; 
public:
  Ranger():objeto(""),daño(0),precioVenta(0.0),ammoCapacity(0),rangoMaximo(0.0){};

  Ranger(string obj,int dañ,float precio,int ammo,float rango):objeto(obj),daño(dañ),precioVenta(precio),ammoCapacity(ammo),rangoMaximo(rango){};

  string get_objeto();
  int get_daño();
  float get_precioVenta();
  int get_ammoCapacity();
  float get_rangoMaximo();

  void set_objeto(string);
  void set_daño(int);
  void set_precioVenta(float);
  void set_ammoCapacity(int);
  void set_rangoMaximo(float);
};

string Ranger::get_objeto(){
  return objeto;
}
int Ranger::get_daño(){
  return daño;
}
float Ranger::get_precioVenta(){
  return precioVenta;
}
int Ranger::get_ammoCapacity(){
  return ammoCapacity;
}
float Ranger::get_rangoMaximo(){
  return rangoMaximo;
}

void Ranger::set_objeto(string obj){
  objeto=obj;
}
void Ranger::set_daño(int dañ){
  daño=dañ;
}
void Ranger::set_precioVenta(float precio){
  precioVenta=precio;
}
void Ranger::set_ammoCapacity(int ammo){
  ammoCapacity=ammo;
}
void Ranger::set_rangoMaximo(float rango){
  rangoMaximo=rango;
}

  

  

  

  

  
  
  
  
