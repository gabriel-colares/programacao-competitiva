# Condicionais em C++

Condicionais escolhem qual bloco executar a partir de uma expressão booleana.

```cpp
if (valor > 0)
{
  cout << "positivo" << endl;
}
else if (valor < 0)
{
  cout << "negativo" << endl;
}
else
{
  cout << "zero" << endl;
}
```

Operadores comuns:

| Operador | Significado |
| --- | --- |
| `==` | igual |
| `!=` | diferente |
| `<`, `<=`, `>`, `>=` | comparações de ordem |
| `&&` | e lógico |
| `||` | ou lógico |
| `!` | negação |

Use parênteses para deixar explícita a ordem quando uma expressão combinar
várias condições.
