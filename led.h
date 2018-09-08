#include <arduino.h>

class MyLed{
    public:
      //atributos publicos:
      int pin;
      
      //constructores: 
      MyLed(int p);
      MyLed(int p, int v);
                              
      //metodos:
      void init();
      void parpadear(int frecuencia, int tiempo);
    private:
      //atributos privados:
      int valorInicial = HIGH; // por defecto es 'HIGH'
      
};

