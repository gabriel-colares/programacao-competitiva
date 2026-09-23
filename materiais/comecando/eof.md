# Leitura até EOF

EOF significa *end of file*, ou fim do arquivo. Alguns problemas não informam
quantos casos existem; nesses casos, tente ler um caso completo e continue
enquanto a leitura funcionar.

```cpp
int a;
int b;

while (cin >> a >> b)
{
  // Processa um caso completo.
}
```

Ao testar pelo terminal, encerre a entrada manual com `Ctrl+D` no Linux e no
macOS. Também é possível redirecionar um arquivo, cujo fim encerrará o laço:

```bash
./programa < entrada.in
```

Não use `while (!cin.eof())`: o fim só é detectado depois de uma tentativa
de leitura, o que pode fazer o programa processar dados inválidos ou repetidos.
