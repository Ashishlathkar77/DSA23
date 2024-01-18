#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

  int n, m;
  cin>>n>>m;

  int matrix[n][m];
  for(int i=0; i<n; i++)
    {
      for(int j = 0; j < m; j++)
        {
          cin>>matrix[i][j];
        }
    }

  unordered_set<int> rows, cols;

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
        {
          if(matrix[i][j] == 0)
          {
            rows.insert(i);
            cols.insert(j);
          }
        }
    }

  for(int row : rows)
    {
      for(int j=0; j<m; j++)
        {
          matrix[row][j] = 0;
        }
    }

  for(int i=0; i<n; i++)
    {
      for(int col : cols)
        {
          matrix[i][col] = 0;
        }
    }

  for(int i=0; i<n; i++)
    {
      for(int j=0; j<m; j++)
        {
          cout<<matrix[i][j]<<" ";
        }
      cout<<endl;
    }

  return 0;
}
