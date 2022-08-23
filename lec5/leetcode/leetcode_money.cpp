#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int week = n / 7;
  int min = week * 28;
  int left = n - min;
  int i = 0;
  int sum = 0;
  int total=0;
  for (int i = week + 1; i < left; i++)
  {

    sum += i;
  }
  cout << sum;
  total = week + sum;
  cout << total;
}