# Teste local

Compile o programa com avisos habilitados:

```bash
g++ -Wall -Wextra -pedantic -std=c++17 programa.cpp -o programa
```

Execute digitando a entrada no terminal ou redirecionando um arquivo:

```bash
./programa < entrada.in
```

Para comparar automaticamente com uma saída esperada:

```bash
./programa < entrada.in > obtida.out
diff -u esperada.out obtida.out
```

Se `diff` não mostrar nada, os arquivos são iguais. Isso confirma apenas os
casos testados; ainda é necessário pensar em limites e casos especiais.
