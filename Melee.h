
#include <string>

using namespace std;

class Melee{
private:
  string objeto;
  int daño;
  float precioVenta;
  int usosRestantes; 
public:
  Melee(): objeto(""),daño(0),precioVenta(0.0),usosRestantes(0){};
  
  Melee(string obj, int dañ, float precio, int usos):objeto(obj),daño(dañ),precioVenta(precio),usosRestantes(usos){};

  string get_objeto();
  int get_daño();
  float get_precioVenta();
  int get_usosRestantes();

  void set_objeto(string);
  void set_daño(int);
  void set_precioVenta(float);
  void set_usosRestantes(int); 
};

string Melee::get_objeto(){
  return objeto;
}
int Melee::get_daño(){
  return daño;
}
float Melee::get_precioVenta(){
  return precioVenta;
}
int Melee::get_usosRestantes(){
  return usosRestantes;
}


void Melee::set_objeto(string obj){
  objeto=obj;
}
void Melee::set_daño(int dañ){
  daño=dañ;
}
void Melee::set_precioVenta(float precio){
  precioVenta=precio;
}
void Melee::set_usosRestantes(int usos){
  usosRestantes=usos;
}


