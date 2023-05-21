#include <iostream>
#include <string>
#include <thread>

using namespace std;

class ModeloNintendo {
   public:
      string nombre;
      string color;
      int edad;
      bool esHumano;
      char letraInicial;      

      ModeloNintendo(string nombre, string color, int edad, int salud, bool esHumano = false);
      ~ModeloNintendo();
      
      void saludar(string nombre);
      void saltar(char tecla);
      void agacharse(char tecla = 'C');
      int avanzar(char tecla);
      void danio(string grito);

    // Getters
    std::string getNombre() const;
    std::string getColor() const;
    int getEdad() const;
    bool getEsHumano() const;
    char getLetraInicial() const;
    int getSalud() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setColor(const std::string& color);
    void setEdad(int edad);
    void setEsHumano(bool esHumano);
    void setLetraInicial(char letraInicial);

   protected:
      string nombreClave;
      int salud;
      char combinacionHabilidades[10];
      void habilidadesEspeciales(string combinacionTeclas);
   
   private:
      string nombreSecreto;
      char combinacionTrucos[10];
      char combinacionSecretos[10];
      void trucos(string combinacionTeclas);
      void revelarSecretos(string combinacionTeclas);

      
};