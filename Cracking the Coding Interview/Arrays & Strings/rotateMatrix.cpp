#include <iostream>
#include <algorithm>  
using namespace std;

void rotateMatrix(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++) 
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + m); 
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) 
        {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    int matrix[100][100]; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    rotateMatrix(matrix, n, m);
    return 0;
}
