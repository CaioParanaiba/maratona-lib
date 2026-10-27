# maratona-lib

Minha biblioteca de maratona de programação: códigos-base, um por arquivo, que eu confio para usar na prova.
O caderno impresso (book) é gerado a partir daqui.

## Pastas

| Pasta | O que vai |
|---|---|
| `estruturas/` | DSU, BIT, segtree, sparse table... |
| `grafos/` | BFS/DFS, Dijkstra, LCA, SCC, fluxo... |
| `strings/` | KMP, Z, hashing, trie... |
| `matematica/` | crivo, exponenciação modular, combinatória... |
| `geometria/` | pontos, vetores, envoltória convexa... |
| `dp/` | técnicas de DP reaproveitáveis |
| `caderno/` | o que monta o PDF para a prova |

`template.cpp` é o cabeçalho padrão de prova. `MODELO.cpp` é o cabeçalho que todo arquivo da lib leva.

## Fluxo de um tópico

1. Estudar o tópico.
2. Escrever a base aqui com `Status: rascunho`.
3. Testar a base num problema puro ([Library Checker](https://judge.yosupo.jp), [CSES](https://cses.fi/problemset/)).
   Passou → `Status: testado` e o link entra no "Testado em".
4. Fazer exercícios usando a base; cada AC vira mais um link no "Testado em".

## Regras

- **Só é `testado` o que já levou AC.**
- **A lib guarda a base; a adaptação de cada problema fica na solução dele**, fora daqui.
- **Mexeu só nos encaixes** (operação, tipo, o que fazer com a resposta) → mesmo arquivo, só soma o link.
- **Achou bug na base** → corrige aqui (commit `fix <arquivo>: ...`) e só conta como testado após o AC com a correção.
- **A mesma mudança de lógica apareceu em 2–3 problemas** → vira variante: arquivo próprio ao lado da base,
  com o nome dela na frente (`segtree.cpp`, `segtree_lazy.cpp`), com status e testes próprios.
- **Cada arquivo funciona sozinho**: sem `#include` de outro arquivo da lib (na prova se copia um bloco só).
- **Curto e no meu estilo**: vai ser digitado do papel.
