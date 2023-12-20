#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{

  int n, m;
  cin >> n >> m;

  int blocks[n];
  for (int i = 0; i < n; i++)
    cin >> blocks[i];

  sort(blocks, blocks + n);

  int queries[m];

  for (int i = 0; i < m; i++)
    cin >> queries[i];

  int positions[m];

  for (int i = 0; i < m; i++)
  {
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {

      int mid = (left + right) / 2;

      if (blocks[mid] == queries[i])
      {
        positions[i] = mid + 1;
        break;
      }
      else if (blocks[mid] < queries[i])
        left = mid + 1;
      else
        right = mid - 1;
    }
    if (left > right)
      positions[i] = -1;
  }

  for (int i: positions)
    cout << i << " ";
  cout << endl;

  return 0;

}
