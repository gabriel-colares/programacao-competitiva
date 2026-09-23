# Dicas - Elevador

Abra uma dica por vez. Não é necessário conhecer uma linguagem de programação
para acompanhar o raciocínio.

<details>
<summary>Dica 1 - observe duas paradas</summary>

O tempo entre duas paradas depende apenas da distância entre os dois andares.
Desenhe os andares em uma reta e conte quantas posições separam as paradas.

</details>

<details>
<summary>Dica 2 - subindo ou descendo</summary>

A distância deve ser positiva tanto na subida quanto na descida. A distância
entre os andares 3 e 8 é a mesma nos dois sentidos.

</details>

<details>
<summary>Dica 3 - percurso completo</summary>

Analise cada par de paradas consecutivas e acumule as distâncias. Se existem
`N` paradas, quantos deslocamentos acontecem entre elas?

</details>

<details>
<summary>Dica 4 - guia visual</summary>

```mermaid
flowchart TD
    I([Início]) --> L[/Ler N, anterior/]
    L --> Z[total = 0; i = 1]
    Z --> P{"i < N?"}
    P -- Sim --> E[/Ler atual/]
    E --> D["d = abs(atual - anterior)"]
    D --> S[total = total + d]
    S --> A[anterior = atual; i = i + 1]
    A --> P
    P -- Não --> F[/Escrever total/]
    F --> T([Fim])
```

Em palavras: comece com total zero, percorra as paradas na ordem e some a
distância de cada deslocamento. Ao terminar, apresente o total.

</details>
