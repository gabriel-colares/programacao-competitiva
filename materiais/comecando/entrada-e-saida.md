# Entrada e saída

Em competições, o programa lê dados da entrada padrão e escreve somente a
resposta pedida na saída padrão. Não inclua mensagens interativas como
`Digite um valor:`.

## C++

```cpp
#include <iostream>

using namespace std;

int main()
{
  int a;
  int b;
  cin >> a >> b;
  cout << a + b << endl;
  return 0;
}
```

O operador `>>` ignora espaços e quebras de linha entre os valores. A quebra de
linha `endl` separa as respostas e descarrega o buffer de saída.

Sempre respeite a ordem e o formato especificados pelo enunciado.
