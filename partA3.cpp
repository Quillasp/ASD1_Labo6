#include "Mouchard.h"

using namespace std; 

int main() {
  
  Int* p = (Int*) ::operator new(4 * sizeof(Int));
  Int* truc = new(p) Int;
  Int* truc1 = new(p + 1) Int(5);
  Int* truc2 = new(p + 2) Int(*truc1);
  Int* truc3 = new(p + 3) Int(move(*truc2));
  
  *truc = *truc1;
  *truc1 = move(*truc3);
  
  for(int i = 3; i >= 0; i--) {
     (p + i)->::Int::~Int();
  }
  
  ::operator delete(p);
}
