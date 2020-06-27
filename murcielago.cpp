#include "iostream"

using namespace std;

void murcielago()
{
    char clave[] = {'m', 'u', 'r', 'c', 'i', 'e', 'l', 'a', 'g', 'o'};
    char dato[30];
    int i=0;

    cout << "ingrese la frase:" << endl;
    cin.getline(dato,30,'\n');
    cout <<endl;
    cout << "el codigo es:" <<endl;
    for (int i = 0; i < 30; i++)
    {
        if (dato[i] == 'm')
        {
            cout << 0;
        }else if (dato[i] == 'u')
        {
            cout << 1;
        }else if (dato[i] == 'r')
        {
            cout << 2;
        }else if (dato[i] == 'c')
        {
            cout << 3;
        }else if (dato[i] == 'i')
        {
            cout << 4;
        }else if (dato[i] == 'e')
        {
            cout << 5;
        }else if (dato[i] == 'l')
        {
            cout << 6;
        }else if (dato[i] == 'a')
        {
            cout << 7;
        }else if (dato[i] == 'g')
        {
            cout << 8;
        }else if (dato[i] == 'o')
        {
            cout << 9;
        }else
        {
            cout<< dato[i];
        }
    }
}

int main()
{
    murcielago();

    return 0;

}