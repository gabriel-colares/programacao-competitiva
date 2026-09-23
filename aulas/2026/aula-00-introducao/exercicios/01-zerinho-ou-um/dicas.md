# Dicas - Zerinho ou Um

Abra uma dica por vez e tente novamente antes de continuar.

<details>
<summary>Dica 1</summary>

O vencedor precisa possuir um valor diferente dos outros dois.

</details>

<details>
<summary>Dica 2</summary>

Para Alice vencer, uma condição possível é:

```cpp
alice != beto && beto == clara
```

Pense nas condições equivalentes para Beto e Clara.

</details>

<details>
<summary>Dica 3 - EOF</summary>

Em C++, continue lendo enquanto um caso completo estiver disponível:

```cpp
while (cin >> alice >> beto >> clara)
{
  // Resolva este caso.
}
```

Em Python, percorra as linhas da entrada padrão:

```python
import sys

for linha in sys.stdin:
  alice, beto, clara = map(int, linha.split())
  # Resolva este caso.
```

</details>

<details>
<summary>Dica 4 - casos sem vencedor</summary>

Se os três valores forem iguais, ninguém escolheu um valor diferente. Depois de
testar as condições de vitória de Alice, Beto e Clara, trate o caso restante
como `*`.

</details>
