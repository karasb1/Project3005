#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    SetConsoleOutputCP(1251);
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    const int full_col = 100;
    const int full_row = 100;
    int row;
    int col;
    int s = 0;
    int k = 0;
    do
    {
        cout << "Enter the number of columns: ";
        cin >> row;
    } while (row < 1 || row > 100);
    do
    {
        cout << "Enter the number of rows: ";
        cin >> col;
    } while (col < 1 || col > 100);
    cout << endl;
    int arr[full_col][full_row];
    int arr1[full_col];
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    for (size_t i = 0; i < col; i++)
    {
        SetConsoleTextAttribute(hConsole, 0x05);
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
            s += arr[i][j];
            if (i == 0) {
                k += 2;
            }
        }
        SetConsoleTextAttribute(hConsole, 0x0D);
        cout << "| ";
        SetConsoleTextAttribute(hConsole, 0x05);
        cout << s;
        arr1[i] = s;
        cout << endl;
        s = 0;
    }
    SetConsoleTextAttribute(hConsole, 0x0F);
    k += 4;
    for (size_t  i = 0; i < k; i++)
    {
        cout << "-";
    }
    int k1 = 0;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 0x05);
    for (size_t j = 0; j < row; j++)
    {
        for (size_t i = 0; i < col; i++)
        {
            k1 += arr[i][j];
        }
        cout << k1 << " ";
        k1 = 0;
    }
    SetConsoleTextAttribute(hConsole, 0x0D);
    cout << "| ";
    SetConsoleTextAttribute(hConsole, 0x05);
    int l = 0;
    for (size_t i = 0; i < col; i++)
    {
        l += arr1[i];
    }
    cout << l << endl;

    SetConsoleTextAttribute(hConsole, 0x0F);
    return 0;
}