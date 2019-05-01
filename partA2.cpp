#include "Mouchard.h"

using namespace std; 

int main() {
  auto truc = new Int;
  auto truc1 = new Int(5);
  auto truc2 = new Int(*truc1);
  auto truc3 = new Int(10);
  
  truc = truc1;
  //truc1 = std::move(truc3);
  
  delete truc3;
  delete truc2;
  delete truc1;
  delete truc;
}