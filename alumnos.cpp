#include "iostream"

using namespace std;

void alumnos()
{
    int estatura[25], suma = 0;
    float promedio;

    cout << "ingrese la estatura en centimetros" << endl;
    for (int i = 0; i < 25; i++)
    {
        cout << "ingrese la estatura " << i + 1 << endl;
        cin >> estatura[i];

        suma = suma + estatura[i];
    }
    promedio = 1.0 * suma / 25;

    cout << "el promedio es: ";
    cout << promedio << endl;

    cout << "los datos mayores son: " << endl;
    for (int i = 0; i < 25; i++)
    {
        if (estatura[i] > promedio)
        {
            cout << estatura[i] << endl;
        }
    }

    cout << "los datos menores son: " << endl;
    for (int i = 0; i < 25; i++)
    {
        if (estatura[i] < promedio)
        {
            cout << estatura[i] << endl;
        }
    }
}

int main()
{
    alumnos();

    return 0;
}