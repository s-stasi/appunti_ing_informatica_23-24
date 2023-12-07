
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// tipically class and struct names starts with uppercase
struct dati
{
  int inizio;
  int fine;
};

int main()
{

  ifstream cin("input.txt");
  ofstream cout("output.txt");
  int N, K;
  // should constrain 1 ≤ N ≤ 200 000
  cin >> N >> K; // 4 4

  // illegal action: dynamic arrays in c++ are pointers
  // if you compile this with a c++ only compiler it will throw an error
  // ok: "int* V = new int[N];"
  // if u use this method u should free the memory at the end of the code
  // by using "delete[] V;" to avoid memory leaks
  int V[N];

  for (int i = 0; i < N; i++)
    cin >> V[i]; // 1 2 3 1

  bool breakable = false;
  int k = 0;
  int tmp1;
  dati tmp2;
  for (int i = 0; i < N; i++)
    k = k + (N - i);

  // same as above
  // what the fuck is {0}?
  int A[k] = {0};
  
  // same as above
  dati B[K];
  int l = 0;

  while (1)
  {
    for (int i = 0; i < N; i++)
    {
      for (int j = i; j < N; j++)
      {
        if (i == j)
        {
          B[l].inizio = i;
          B[l].fine = j;
          A[l] = A[l] + V[i];
        }
        else
        {
          B[l].inizio = i;
          B[l].fine = j;
          A[l] = A[l] + V[i];
          for (int p = i; p < j; p++)
            A[l] = A[l] + V[p];
        }
        // cout << B[l].inizio <<" "<< B[l].fine<<" "<<A[l]<<endl;
        l++;
        if (j == N - 1 && i == N - 1)
        {
          breakable = true;
          break;
        }
      }
    }
    /*	for(int i=0;i<k;i++)
          cout << B[i].inizio <<" "<< B[i].fine<<endl;*/
    if (breakable == true)
      break;
  }

  for (int i = 0; i < N - 1; i++)
  {
    for (int j = 0; j < N - 1; j++)
    {
      if (A[j] > A[j + 1])
      {
        tmp1 = A[j + 1];
        A[j + 1] = A[j];
        A[j] = tmp1;

        tmp2 = B[j + 1];
        B[j + 1] = B[j];
        B[j] = tmp2;
      }
    }
  }

  cout << B[K - 1].inizio << " " << B[K - 1].fine;
}
