# Compilação em C++

Para compilar um arquivo com C++17 e avisos úteis:

```bash
g++ -Wall -Wextra -pedantic -std=c++17 programa.cpp -o programa
```

Se a compilação terminar sem erros, execute com:

```bash
./programa
```

Ou use um arquivo como entrada:

```bash
./programa < entrada.in
```

Os avisos não impedem necessariamente a compilação, mas frequentemente revelam
variáveis não usadas, conversões perigosas e outros indícios de erro. Corrija-os
antes de submeter.

Consulte também o guia completo de
[ambiente para prática](../comecando/ambiente-de-pratica.md).
