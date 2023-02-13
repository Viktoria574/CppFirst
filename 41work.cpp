#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main() {
  system("chcp 1251");
  setlocale(LC_ALL, "Russian");
  int i, sum, num;
  string line;
  const string fileName = "numbers.txt";
  ofstream fif(fileName);
  for (i = 0; i <= 9; i++) {
    cin >> num;
    fif << num << endl;
  }
  fif.close();

  sum = 0;
  ifstream fof(fileName);
  while (getline(fof, line)) {
    sum += stoi(line);
  };

  cout<< sum << endl;

  fof.close();
}