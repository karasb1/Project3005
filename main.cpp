#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    const int full_col = 100;
    const int full_row = 100;
    int row, col;
    int number;
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
    cout << "Enter the number: ";
    cin >> number;
    cout << endl;
    int arr[full_col][full_row];
    arr[0][0] = number;
    for (int _ = 1; _ < row; _++)
    {
        arr[0][_] = arr[0][_ - 1] * 2;
    }
    for (int i = 1; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if (j == 0)
            {
                arr[i][j] = arr[i-1][row-1] * 2;
            }
            else
            {
                arr[i][j] = arr[i][j - 1] * 2;
            }
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
	return 0;
}