#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
    const int full_col = 5;
    const int full_row = 10;
    int row, col;
    cout << endl;
    int arr[full_col][full_row];
    for (int i = 0; i < full_col; i++)
    {
        for (int j = 0; j < full_row; j++)
        {
            arr[i][j] = rand() % 50;
        }
    }
    for (int i = 0; i < full_col; i++)
    {
        for (int j = 0; j < full_row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int arr2[full_col][full_col];
    for (int i = 0; i < full_col; i++)
    {
        for (int j = 0; j < full_col; j++)
        {
            int index1 = j * 2;
            int index2 = j * 2 + 1;
            arr2[i][j] = arr[i][index1] + arr[i][index2];
        }
    }
    for (int i = 0; i < full_col; i++)
    {
        for (int j = 0; j < full_col; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
	return 0;
}