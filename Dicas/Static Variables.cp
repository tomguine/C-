#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v) { // desse modo não precia criar ponteiro e a função recebe diretamente o endereço de v
  for (auto num:v)
    cout << num << endl;
}

int main() {
  vector<int> data {1,2,3,4,5};
  print(data);
  return 0;
}
