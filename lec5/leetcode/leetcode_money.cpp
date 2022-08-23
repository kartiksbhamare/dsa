#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int week = n / 7;
  int total;
  int i;
  if (week == 0){
    for (i = 0; i <= n; i++)
    {
      total = total + i;
    }
  }

  else{
  int min = week * 28;
  int dj = week * 7;
  int start = n - dj;
  int sim = week + 1;
  int add = (week - 1) * 7;
  int to = (sim + start) - 1;
  int last = 0;
  for (int i = sim; i <= to; i++)
    {
      last = last + i;
    }
    total = min + last + add;
  }
  cout << total;
}
