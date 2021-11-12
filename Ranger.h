#include <string>

using namespace std;

class Melee{
private:
  string objeto;
  float daño;
  float precioVenta;
  int ammoCapacity;
  float rangoMaximo; 
public:
  Ranger():objeto(""),daño(0.0),precioVenta(0.0),ammoCapacity(0),rangoMaximo(0.0){};

  Ranger(string obj,float dañ,float precio,int ammo,float rango):objeto(obj),daño(dañ),precioVenta(precio),ammoCapacity(ammo),rangoMaximo(rango){};

  string get_objeto();
  float get_daño();
  float get_precioVenta();
  int get_ammoCapacity();
  float rangoMaximo();

  void objeto(string);
  void daño(float);
  void precioVenta(float);
  void ammoCapacity(int);
  void rangoMaximo(float);
};
  

  

  

  

  
  
  
  
