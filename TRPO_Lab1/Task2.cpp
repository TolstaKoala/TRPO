#include <stdafx.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    
    int ans[20];
    int h = 0;
    int arr[20];
    int key;
    
    srand(time(NULL));
    for (int i = 0; i < 20; i++)
    {
        arr[i] = 1 + rand() % 20;
        cout << arr[i] << " ";
        if (i==9)
        {
            cout << endl;
        }
    }
    
    cout << endl << endl << "Введите элемент:" ;
    cin >> key;
    
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == key)
        {
            ans[h++] = i;
        }
    }
    if (h != 0)
    {
        for (int i = 0; i < h; i++)
        {
            cout << "Элемент " << key << " находится в ячейке " << ans[i] << endl;
        }
    }
    else 
    {
        cout << "Мы не нашли элемент" << key << "в массиве" << endl;
    }
    
    system("pause");
    return 0;
}
