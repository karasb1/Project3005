#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int full_col = 100;
    const int full_row = 100;
    int row, col;
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
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    float s = 0;
    float k = 0;
    int mn = arr[0][0];
    int mx = arr[0][0];
    cout << endl;
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (mn > arr[i][j])
            {
                mn = arr[i][j];
            }
            if (mx < arr[i][j])
            {
                mx = arr[i][j];
            }
            s += arr[i][j];
            k++;
        }
    }
    cout << "Amount: " << s << endl;
    cout << "Arithmetic mean: " << s/k << endl;
    cout << "Minimum value: " << mn << endl;
    cout << "Maximum value: " << mx << endl;


	return 0;
}