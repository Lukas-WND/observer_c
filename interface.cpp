#include <iostream>
#include <stdarg.h>

#define path "D:\\SALVE SEUS ARQUIVOS AQUI\\Lukas\\teste\\comunicacao"
#define CMD_MAX (1024)

using namespace std;

int systemf(const char *format, ...)
{
  va_list args;
  char cmd[CMD_MAX + 1];

  va_start(args, format);
  vsnprintf(cmd, CMD_MAX + 1, format, args);
  va_end(args);

  return system(cmd);
}

int main()
{
  char c;
  FILE *req;

  systemf("start processamento.exe \"%s\"", path);

  cout << "Informe a letra: ";
  cin >> c;
  cin.ignore();

  req = fopen("./../comunicacao/req.txt", "w");

  fprintf(req, "a letra digitada foi: %c", c);

  fclose(req);

  return 0;
}
