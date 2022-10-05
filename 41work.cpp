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
  cin >> line;
  cout << endl << line << endl;
  const string fileName = "numbers.txt";
  ofstream fif(fileName);
  for (i = 0; i <= 9; i++) {
    cout << "¬ведите " << i + 1 << " число" << endl;
    cin >> num;
    fif << num << endl;
  }
  fif.close();

  sum = 0;
  ifstream fof(fileName);
  while (getline(fof, line)) {
    cout << line << endl;
    sum += stoi(line);
  };

  cout << "—умма:" << sum << endl;

  fof.close();
}