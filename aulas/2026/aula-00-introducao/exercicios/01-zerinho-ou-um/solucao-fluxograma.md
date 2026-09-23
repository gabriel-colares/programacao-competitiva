# Resolução visual - Zerinho ou Um

O fluxograma representa as mesmas decisões das soluções em C++ e Python, mas
não exige conhecimento prévio de programação.

```mermaid
flowchart TD
    I([Início]) --> L[/Ler A, B, C/]
    L --> A{"A != B && B == C?"}
    A -- Sim --> SA[/Escrever A/]
    A -- Não --> B{"B != A && A == C?"}
    B -- Sim --> SB[/Escrever B/]
    B -- Não --> C{"C != A && A == B?"}
    C -- Sim --> SC[/Escrever C/]
    C -- Não --> SN[/Escrever */]
    SA --> P{EOF?}
    SB --> P
    SC --> P
    SN --> P
    P -- Não --> L
    P -- Sim --> F([Fim])
```

## Leitura em palavras

1. Compare o valor de Alice com os outros dois.
2. Se somente Alice for diferente, a resposta é `A`.
3. Caso contrário, faça a mesma verificação para Beto e depois para Clara.
4. Se ninguém for o único diferente, a resposta é `*`.
5. Repita enquanto houver outro caso na entrada.
