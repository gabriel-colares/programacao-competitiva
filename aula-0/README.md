# Aula 0: Introdução e Ad-Hoc

Encontro de abertura do grupo, dedicado a entender como funciona a programação
competitiva e como transformar um enunciado em uma sequência de passos.

## Materiais

- [Slides da aula em PDF](programacao_competitiva_ifam.pdf)
- [Slides navegáveis em HTML](index.html)
- [Caderno da OBI 2026, nível Sênior, fase 1](ProvaOBI2026_f1ps.pdf)

Para usar os slides HTML, abra `index.html` no navegador e navegue com as setas
do teclado, `Page Up`, `Page Down`, `Home` ou `End`.

## Conteúdo do encontro

- o que é programação competitiva;
- como ler entrada, saída e restrições;
- o que caracteriza um problema Ad-Hoc;
- testes de mesa antes da implementação;
- compilação e execução pelo terminal;
- primeiros passos no problema **Elevador**, da OBI 2026.

## Problema: Elevador

O elevador visita `N` andares em uma ordem conhecida. Como leva um segundo para
percorrer um andar, precisamos somar a distância entre cada par de paradas
consecutivas.

Antes de programar, responda:

1. Quais dados precisam ser lidos?
2. Qual é a distância entre os andares 9 e 5?
3. Por que usamos o valor absoluto da diferença?
4. Quantas diferenças existem para `N` paradas?

### Exemplo

```text
Entrada
3
1 9 5

Saída
12
```

O percurso leva `|9 - 1| + |5 - 9| = 8 + 4 = 12` segundos.

## Prática

Tente resolver o problema antes de abrir `solucoes/`.

```bash
# C++
g++ -Wall -Wextra -std=c++17 solucoes/elevador.cpp -o elevador
./elevador < testes/elevador-1.in

# Python
python3 solucoes/elevador.py < testes/elevador-1.in
```

Compare o resultado com o arquivo esperado:

```bash
./elevador < testes/elevador-1.in > minha-saida.out
diff testes/elevador-1.out minha-saida.out
```

## Próximo passo

Crie novos casos de teste. Inclua trajetos que apenas sobem, que alternam entre
subidas e descidas e que visitam andares bem distantes.
