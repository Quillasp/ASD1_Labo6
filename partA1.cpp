#include "Mouchard.h"

using namespace std; 

int main() {
  Int truc;
  Int truc1(5);
  Int truc2(truc1);
  Int truc3(std::move(truc2));
  truc = truc1;
  truc1 = std::move(truc3);
}