#include <iostream>
using namespace std;

void arreglo1()
{
    char arreglo[] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};
    cout << "valores almacenados: " << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << arreglo[i] << " " << endl;
    }
}

void arreglo2()
{
    float arreglo[] = {95.75, 87.91, 85.7};
    cout << "valores almacenados: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arreglo[i] << endl;
    }
}

void arreglo3()
{

    char arreglo[5][10] = {{'L', 'a', 'p', 'i', 'z'},
                           {'B', 'o', 'r', 'r', 'a', 'd', 'o', 'r'},
                           {'R', 'e', 'g', 'l', 'a'},
                           {'T', 'a', 'j', 'a', 'd', 'o', 'r'},
                           {'M', 'o', 'c', 'h', 'i', 'l', 'a'}};

    cout << "valores almacenados: " << endl;
    for (int i = 0; i < 5; i++)
    {
        {
            cout << arreglo[i] << " " << endl;
        }
        cout << endl;
    }
}

int main()
{

    arreglo1();
    arreglo2();
    arreglo3();
    return 0;
}
