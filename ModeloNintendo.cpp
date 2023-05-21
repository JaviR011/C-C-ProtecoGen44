#include "ModeloNintendo.h"
#include <iostream>
#include <string>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <thread> 
ModeloNintendo::ModeloNintendo(std::string nombre, std::string color, int edad, int salud, bool esHumano) {
    this->nombre = nombre;
    this->color = color;
    this->edad = edad;
    this->salud = salud;
    this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
    std::cout << "Murió" << "\n";
}

void ModeloNintendo::saludar(std::string nombre) {
    std::cout << "Hola " << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
    std::cout << "yuha";
}

void ModeloNintendo::agacharse(char tecla) {
    std::cout << "oig";
}

int ModeloNintendo::avanzar(char tecla) {
    std::cout << "tac tac tac";
    return 0;
}

void ModeloNintendo::danio(std::string grito) {
    std::cout << "Mamamia";
}

void ModeloNintendo::habilidadesEspeciales(std::string combinacionTeclas) {
    std::cout << "Hola" << combinacionTeclas;
}

void ModeloNintendo::trucos(std::string combinacionTeclas) {
    std::cout << "Hola";
}

void ModeloNintendo::revelarSecretos(std::string combinacionTeclas) {
    std::cout << "Hola";
}
// Implementación de los getters
std::string ModeloNintendo::getNombre() const {
    return nombre;
}

std::string ModeloNintendo::getColor() const {
    return color;
}

int ModeloNintendo::getEdad() const {
    return edad;
}

bool ModeloNintendo::getEsHumano() const {
    return esHumano;
}

char ModeloNintendo::getLetraInicial() const {
    return letraInicial;
}

// Implementación de los setters
void ModeloNintendo::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void ModeloNintendo::setColor(const std::string& color) {
    this->color = color;
}

void ModeloNintendo::setEdad(int edad) {
    this->edad = edad;
}

void ModeloNintendo::setEsHumano(bool esHumano) {
    this->esHumano = esHumano;
}

void ModeloNintendo::setLetraInicial(char letraInicial) {
    this->letraInicial = letraInicial;
}
void setColor(int color) {
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
int main() {
    system("CLS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD originalConsoleColor;

    // Guarda el color original
    if (GetConsoleScreenBufferInfo(hConsole, &consoleInfo)) {
        originalConsoleColor = consoleInfo.wAttributes;
    }

setColor(1);
std::cout << R"(TO)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("CLS");

setColor(2);
std::cout << R"(TOAD)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("CLS");

setColor(3);
std::cout << R"(TOAD IN)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("CLS");

setColor(4);
std::cout << R"(TOAD INTE)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("CLS");

setColor(5);
std::cout << R"(TOAD INTERAC)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("CLS");

setColor(6);
std::cout << R"(TOAD INTERACTI)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("CLS");

setColor(5);
std::cout << R"(TOAD INTERACTIVO)" << '\n';
std::this_thread::sleep_for(std::chrono::milliseconds(200));
system("pause");
system("CLS");

    SetConsoleTextAttribute(hConsole, originalConsoleColor);
    
  ModeloNintendo toadcitoRojo = ModeloNintendo("Toad", "Rojo", 10, 100, false);
 std::string nombre;
std::cout << "Por favor, introduce tu nombre: ";
std::getline(std::cin, nombre); 
system("pause");
toadcitoRojo.saludar(nombre);
system("pause");
system("CLS");



        toadcitoRojo.agacharse('a');
        std::cout << R"()" << '\n';
        toadcitoRojo.avanzar('a');
           std::cout << R"()" << '\n';
        toadcitoRojo.danio("hola");
           std::cout << R"()" << '\n';
  return 0;
}
