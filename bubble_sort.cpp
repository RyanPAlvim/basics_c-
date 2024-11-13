#include <iostream>

using namespace std;

int main()
{
    
    int int_array[5] = {}, num, temporary;

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite um numero: ";
        cin >> num;
        int_array[i] = num;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (int_array[j] > int_array[j + 1])
            {
                temporary = int_array[j];
                int_array[j] = int_array[j + 1];
                int_array[j + 1] = temporary;
            }
        }
    }

    cout << "Array ordenado: ";

    for (int i = 0; i < 5; i++)
    {
        cout << int_array[i];
        if (i != 4)
        {
            cout << ',';
        }
    }

    return 0;
}
