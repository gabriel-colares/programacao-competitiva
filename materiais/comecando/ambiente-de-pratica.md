# Ambiente para praticar de verdade

O editor serve para escrever o arquivo. Compilar, executar e testar fazem parte
do aprendizado e devem ser compreendidos separadamente.

## Editores recomendados

### Visual Studio Code

O [Visual Studio Code](https://code.visualstudio.com/) possui terminal integrado
e suporte para C++ e Python. Para os treinos, crie um perfil sem extensões de IA
e sem execução automática.

Use estas configurações para reduzir sugestões automáticas:

```json
{
  "editor.quickSuggestions": false,
  "editor.suggestOnTriggerCharacters": false,
  "editor.inlineSuggest.enabled": false,
  "editor.parameterHints.enabled": false
}
```

Desative GitHub Copilot, outras ferramentas de IA e extensões como Code Runner
durante a prática. Destaque de sintaxe, numeração de linhas e indentação
automática podem continuar ativos.

### Sublime Text

O [Sublime Text](https://www.sublimetext.com/) é rápido, leve e está disponível
para Linux, Windows e macOS. Ele pode ser avaliado gratuitamente, mas é um
software proprietário com licença paga.

Para praticar sem completar código automaticamente, abra `Preferences`, depois
`Settings`, e adicione:

```json
{
  "auto_complete": false
}
```

### Geany

O [Geany](https://www.geany.org/) é leve, funciona em Linux, Windows e macOS e
oferece edição com destaque de sintaxe sem exigir uma configuração complexa. É
uma boa escolha para quem está começando.

### Kate

O [Kate](https://kate-editor.org/) é um editor livre para Linux, Windows e
macOS. Possui destaque de sintaxe e terminal integrado. Nos treinos, mantenha o
plugin de LSP e outros recursos de autocompletar desativados.

### Notepad++

O [Notepad++](https://notepad-plus-plus.org/) é livre, pequeno e rápido, mas
está disponível somente para Windows. É adequado para editar arquivos simples
enquanto compilação e execução são feitas em um terminal separado.

O ambiente permitido varia entre competições. Mesmo quando algum recurso de
completar código está disponível, o participante não deve depender dele para
lembrar estruturas básicas, compilar ou diagnosticar erros.

## C++ pelo terminal

Compile mostrando avisos e utilizando C++17:

```bash
g++ -Wall -Wextra -pedantic -std=c++17 solucao.cpp -o solucao
```

Execute normalmente:

```bash
./solucao
```

Use um arquivo como entrada:

```bash
./solucao < entrada.in
```

Guarde a resposta e compare com a saída esperada:

```bash
./solucao < entrada.in > saida-obtida.out
diff -u saida-esperada.out saida-obtida.out
```

## Python pelo terminal

Python não possui a etapa de compilação com `g++`, mas a execução e o
redirecionamento seguem a mesma ideia:

```bash
python3 solucao.py < entrada.in
python3 solucao.py < entrada.in > saida-obtida.out
diff -u saida-esperada.out saida-obtida.out
```

## O ciclo que precisa virar hábito

1. Salve o arquivo.
2. Compile pelo terminal quando estiver usando C++.
3. Leia e corrija todos os erros e avisos do compilador.
4. Execute com um caso pequeno.
5. Teste limites e casos especiais.
6. Compare exatamente a saída obtida com a esperada.
7. Só então envie para a plataforma.

Não use apenas o botão de “Play”. Ele esconde o comando executado, dificulta a
compreensão das mensagens do compilador e cria uma dependência que pode atrapalhar
em laboratórios, seletivas e competições.
