#include <iostream>
using namespace std;

int main() {
  int a = 5;
  int* p = &a;
  int** ptr = &p;
  
  **ptr = **ptr + 1;
  cout<<**ptr;


  return 0;
}