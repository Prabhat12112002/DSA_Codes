#include <iostream>
using namespace std;
void rowSumArray(int arr[][3], int row, int col)
{

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout <<"The sum is: "<< sum << endl;
    }
}
int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    cout<<"enter row and colomn: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    rowSumArray(arr, row, col);
}