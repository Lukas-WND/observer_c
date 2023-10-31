#include <iostream>

using namespace std;

int main()
{
  char c;
  FILE *req;

  req = fopen("comunicacao.txt", "w");

  cout << "Informe a letra: ";
  cin >> c;
  cin.ignore();

  fprintf(req, "a letra digitada foi: %c", c);

  fclose(req);

  return 0;
}
