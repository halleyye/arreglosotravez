#include <iostream>
using namespace std;

void struct1()
{
    struct productConico
    {
        string nombredispositivo;
        int fechalanzamiento;
        float precio;
    };

    productConico celular = {"Samsung A51", 2018, 300};
    productConico smartTv = {"LG", 2020, 800};
    productConico tablet = {"Ipad Pro9", 2021, 950};
    productConico laptop = {"HP xyz6478", 2022, 990};

    cout << "Nombre: " << celular.nombredispositivo << endl;
    cout << "fecha de lanzamiento: " << celular.fechalanzamiento << endl;
    cout << "Precio: $" << celular.precio << endl;

    cout << endl;

    cout << "Nombre: " << tablet.nombredispositivo << endl;
    cout << "fecha de lanzamiento: " << tablet.fechalanzamiento << endl;
    cout << "Precio: $" << tablet.precio << endl;

    cout << endl;

    cout << "Nombre: " << smartTv.nombredispositivo << endl;
    cout << "fecha de lanzamiento: " << smartTv.fechalanzamiento << endl;
    cout << "Precio: $" << smartTv.precio << endl;

    cout << endl;

    cout << "Nombre: " << laptop.nombredispositivo << endl;
    cout << "fecha de lanzamiento: " << laptop.fechalanzamiento << endl;
    cout << "Precio: $" << laptop.precio << endl;
    cout << endl;
}

void struct2()
{
    struct estudiantes
    {
        string nombre;
        string carrera;
        string uni;
        int fechanacimiento;
        int edad;
        float promedio;
    };
    estudiantes estudiante1 = {"Mayerling Adriana", "Ingenieria en Sistemas", "UCA", 2005, 17, 90.5};
    estudiantes estudiante2 = {"Natalie Mairena", "Ingenieria en Sistemas", "UCA", 2006, 17, 84.6};
    estudiantes estudiante3 = {"Francini Fitoria", "Ingenieria en Sistemas", "UCA", 2007, 16, 85.2};

    cout << "Nombre: " << estudiante1.nombre << endl;
    cout << "Carrera: " << estudiante1.carrera << endl;
    cout << "Universad: " << estudiante1.uni << endl;
    cout << "Fecha de nacimiento: " << estudiante1.fechanacimiento << endl;
    cout << "edad: " << estudiante1.edad << endl;
    cout << "promedio: " << estudiante1.promedio << endl;

    cout << endl;

    cout << "Nombre: " << estudiante2.nombre << endl;
    cout << "Carrera: " << estudiante2.carrera << endl;
    cout << "Universad: " << estudiante2.uni << endl;
    cout << "Fecha de nacimiento: " << estudiante2.fechanacimiento << endl;
    cout << "edad: " << estudiante2.edad << endl;
    cout << "promedio: " << estudiante2.promedio << endl;

    cout << endl;

    cout << "Nombre: " << estudiante3.nombre << endl;
    cout << "Carrera: " << estudiante3.carrera << endl;
    cout << "Universad: " << estudiante3.uni << endl;
    cout << "Fecha de nacimiento: " << estudiante3.fechanacimiento << endl;
    cout << "edad: " << estudiante3.edad << endl;
    cout << "promedio: " << estudiante3.promedio << endl;

    cout << endl;
}

void struct3()
{
    struct atletas
    {
         string nombre;
        string liga;
        int fechanacimiento;
        int edad;
    };

    atletas atleta1 = {"Rosalia Castro", "NBA", 1994, 29};
    atletas atleta2 = {"Vicente Fernandez", "NBA", 1999, 24};
    atletas atleta3 = {"Alex Turner", "NBA", 2000, 23};
    atletas atleta4 = {"Belen Navarro", "NBA", 2000, 23};
    atletas atleta5 = {"Jenni Rivera", "NBA", 1992, 31};

     cout << "Nombre: " << atleta1.nombre << endl;
    cout << "Liga: " << atleta1.liga << endl;
    cout << "Fecha nacimiento: " << atleta1.fechanacimiento << endl;
    cout << "edad: " << atleta1.edad << endl;

    cout << endl;

   cout << "Nombre: " << atleta2.nombre << endl;
    cout << "Liga: " << atleta2.liga << endl;
    cout << "Fecha nacimiento: " << atleta2.fechanacimiento << endl;
    cout << "edad: " << atleta2.edad << endl;

    cout << endl;

  cout << "Nombre: " << atleta3.nombre << endl;
    cout << "Liga: " << atleta3.liga << endl;
    cout << "Fecha nacimiento: " << atleta3.fechanacimiento << endl;
    cout << "edad: " << atleta3.edad << endl;

    cout << endl;

     cout << "Nombre: " << atleta4.nombre << endl;
    cout << "Liga: " << atleta4.liga << endl;
    cout << "Fecha nacimiento: " << atleta4.fechanacimiento << endl;
    cout << "edad: " << atleta4.edad << endl;

    cout<<endl;

     cout << "Nombre: " << atleta5.nombre << endl;
    cout << "Liga: " << atleta5.liga << endl;
    cout << "Fecha nacimiento: " << atleta5.fechanacimiento << endl;
    cout << "edad: " << atleta5.edad << endl;

}

int main()
{
    struct1();
    struct2();
    struct3();
    return 0;
}
