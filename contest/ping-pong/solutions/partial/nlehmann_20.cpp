/*
 * -----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <nlehmann@dcc.uchile.cl> wrote this file. As long as you retain this notice
 * you can do whatever you want with this stuff. If we meet some day, and you
 * think this stuff is worth it, you can buy me a beer in return Nicolás Lehmann
 * -----------------------------------------------------------------------------
 */

#include <iostream>
using namespace std;

int main () {
  int N, P, A, B;
  cin >> N >> P >> A >> B;

  if (A == 0)
    cout << 2 << endl;
  else
    cout << (N%2==0 ? 2 : 1) << endl;

  return 0;
}
