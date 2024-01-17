#include <iostream>
#include <algorithm>  // Include algorithm for reverse function
using namespace std;

void rotateMatrix(int matrix[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < m; j++) // Fix the loop limit to m
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i], matrix[i] + m); // Use reverse on the entire row
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) // Fix the loop limit to m
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
    int matrix[100][100]; // Adjust the size accordingly
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
