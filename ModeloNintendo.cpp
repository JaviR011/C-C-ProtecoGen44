#include "ModeloNintendo.h"
#include <iostream>
#include <thread> 
#include <string>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
ModeloNintendo::ModeloNintendo(std::string nombre, std::string color, int edad, int salud, bool esHumano) {
    this->nombre = nombre;
    this->color = color;
    this->edad = edad;
    this->salud = salud;
    this->esHumano = esHumano;
}

ModeloNintendo::~ModeloNintendo() {
    // std::cout << "Murio :(" << "\n";
}

void ModeloNintendo::saludar(std::string nombre) {
    std::cout << "Hola " << nombre << "\n";
}

void ModeloNintendo::saltar(char tecla) {
    std::cout << "yiha" << std::endl;
}

void ModeloNintendo::agacharse(char tecla) {
    std::cout << "oig" << std::endl;
}

int ModeloNintendo::avanzar(char tecla) {
    std::cout << "tac tac tac" << std::endl;
    return 0;
}

void ModeloNintendo::danio(std::string grito) {
    std::cout << "Mamamia" << std::endl;
    salud -= 25;
}

void ModeloNintendo::habilidadesEspeciales(std::string combinacionTeclas) {
    std::cout << "jaiya" << std::endl;
}

void ModeloNintendo::trucos(std::string combinacionTeclas) {
    std::cout << "Toad ha ganado una estrella" << std::endl;
}

void ModeloNintendo::revelarSecretos(std::string combinacionTeclas) {
    std::cout << "*desbloquea nivel secreto*";
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

int ModeloNintendo::getSalud() const {
    return salud;
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

void displayPersonaje(ModeloNintendo personaje)
{
    // Cambiar color dependiendo de la salud
    if (personaje.getSalud() > 50)
    {
        setColor(2);
    }
    else if (personaje.getSalud() > 25)
    {
        setColor(6);
    }
    else
    {
        setColor(4);
    }
    std::cout << "      -----\n      |   |\n      -----\n        |\n     -------\n        |\n       / \\\n\n";
}

void printColorGreetings() {
    setColor(1);
    std::cout << R"(TO)" << '\n';
    Sleep(200);
    system("CLS");

    setColor(2);
    std::cout << R"(TOAD)" << '\n';
    Sleep(200);
    system("CLS");

    setColor(3);
    std::cout << R"(TOAD IN)" << '\n';
    Sleep(200);
    system("CLS");

    setColor(4);
    std::cout << R"(TOAD INTE)" << '\n';
    Sleep(200);
    system("CLS");

    setColor(5);
    std::cout << R"(TOAD INTERAC)" << '\n';
    Sleep(200);
    system("CLS");

    setColor(6);
    std::cout << R"(TOAD INTERACTI)" << '\n';
    Sleep(200);
    system("CLS");

    setColor(5);
    std::cout << R"(TOAD INTERACTIVO)" << '\n';
    Sleep(200);
    system("pause");
    system("CLS");

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

    printColorGreetings();

    SetConsoleTextAttribute(hConsole, originalConsoleColor);

    ModeloNintendo toadcitoRojo = ModeloNintendo("Toad", "Rojo", 10, 100, false);
    std::string nombre;
    std::cout << "Por favor, introduce tu nombre: ";
    std::getline(std::cin, nombre); 
    system("pause");
    toadcitoRojo.saludar(nombre);
    system("pause");
    system("CLS");

    char opcion;
    // Repetir mientras toadcitoRojo tenga salud
    while(toadcitoRojo.getSalud() > 0){
        system("CLS");
        displayPersonaje(toadcitoRojo);
        SetConsoleTextAttribute(hConsole, originalConsoleColor);
        std::cout << "Salud: " << toadcitoRojo.getSalud() << "\n";
        std::cout << "Que quieres hacer? (a)gacharse, (s)altar, (d)anio, (f)avanzar: ";
        std::cin >> opcion;
        switch (opcion) {
            case 'a':
                toadcitoRojo.agacharse(opcion);
                break;
            case 's':
                toadcitoRojo.saltar(opcion);
                break;
            case 'd':
                toadcitoRojo.danio("si");
                break;
            case 'f':
                toadcitoRojo.avanzar(opcion);
                break;
            default:
                std::cout << "Opción inválida" << "\n";
                break;
        }
        system("pause");
    }
    system("CLS");
    std::cout << "Toad ha muerto :(" << "\n";
    system("pause");
    return 0;
}
