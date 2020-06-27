#include "iostream"
#include <string>
using namespace std;

int x;
float califinal;
string nombre, apellido;
double nota1, nota2, nota3, nota4, nota5;

void calcular()
{

    cout << "**********************************************" << endl;
    cout << "nombre del estudiante: " << nombre << endl;

    cout << "apellido del estudiante: " << apellido << endl;

    cout << "primera nota: " << nota1 << endl;

    cout << "segunda nota: " << nota2 << endl;

    cout << "tercera nota: " << nota3 << endl;

    cout << "cuarta nota: " << nota4 << endl;

    cout << "quinta nota: " << nota5 << endl;

    cout << "calificacion final: " << califinal << endl;

    if (califinal < 5)
    {
        cout << "reprobado" << endl;
    }
    else
    {
        cout << "aprobado" << endl;
    }
    cout << "**********************************************" << endl;
}

void notas()
{
    cout << "ingrese cuantos alumnos son: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cout << "nombre del estudiante" << endl;
        cin >> nombre;

        cout << "apellido del estudiante" << endl;
        cin >> apellido;

        cout << "primera nota" << endl;
        cin >> nota1;

        cout << "segunda nota" << endl;
        cin >> nota2;

        cout << "tercera nota" << endl;
        cin >> nota3;

        cout << "cuarta nota" << endl;
        cin >> nota4;

        cout << "quinta nota" << endl;
        cin >> nota5;

        califinal = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

        calcular();
    }
}



int main()
{
    notas();

    return 0;
}