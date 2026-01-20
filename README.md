# Batalha Naval

Projeto do desafio de programação em C - Ní­vel Mestre

## Descrição

Este é um programa em C que cria um tabuleiro de batalha naval e posiciona quatro navios nele. Dois navios são colocados de forma tradicional (horizontal e vertical) e dois navios são posicionados na diagonal.

No nível mestre, o programa foi incrementado com habilidades especiais (com área de efeito), que são exibidas no tabuleiro usando um valor diferente, sem precisar implementar dano (é só visualização).

## Como Funciona

O programa cria um tabuleiro 10x10 usando uma matriz. Cada posição pode ter:
- 0 = água
- 3 = navio
- 5 = área afetada por uma habilidade

Quatro navios de tamanho 3 são posicionados:
- Navio 1: horizontal, linha 2, começando na coluna 1
- Navio 2: vertical, coluna 7, começando na linha 5
- Navio 3: diagonal descendente, começando na posição (0,5)
- Navio 4: diagonal ascendente, começando na posição (9,0)

## Ní­vel Mestre (Habilidades)

Foram adicionadas 3 habilidades, cada uma representada por uma matriz (7x7) com:
- 1 = posição afetada
- 0 = posiÃ§Ã£o não afetada

Habilidades implementadas:
- Cone (formato que se abre para baixo)
- Cruz (formato de cruz com origem no centro)
- Octaedro (formato de losango com origem no centro)

Para cada habilidade:
- É definida uma origem (linha e coluna) no tabuleiro
- A matriz da habilidade é "sobreposta" no tabuleiro marcando as posições com valor 5
- O código verifica os limites para não sair do tabuleiro 10x10
- Se existir um navio (valor 3) na posição, ele não é sobrescrito
- O programa imprime um tabuleiro para cada habilidade (cone, cruz e octaedro)

## Compilação e Execução

Para compilar o programa:

```bash
gcc batalha_naval.c -o batalha_naval
```

Para executar:

```bash
./batalha_naval
```

## Requisitos

- Compilador GCC
- Sistema operacional Linux, macOS ou Windows com MinGW

## Exemplo de Saí­da (Mestre)

```
Tabuleiro de Batalha Naval:

0 0 0 0 0 3 0 0 0 0 
0 0 0 0 0 0 3 0 0 0 
0 3 3 3 0 0 0 3 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 3 0 0 
0 0 3 0 0 0 0 3 0 0 
0 3 0 0 0 0 0 0 0 0 
3 0 0 0 0 0 0 0 0 0 

Legenda: 0 = água | 3 = Navio
```

## Estrutura do Código

O programa utiliza:
- Matriz bidimensional `tabuleiro[TAM][TAM]` para representar o campo de jogo
- Constantes definidas com `#define` (TAM, AGUA, NAVIO)
- Loops aninhados para inicialização e exibição
- Posicionamento manual dos navios
- Matrizes extras (7x7) para representar as habilidades do ní­vel mestre
- Regras simples para marcar a área da habilidade no tabuleiro (valor 5)

## Conceitos Utilizados

- Matrizes bidimensionais
- Loops for aninhados
- Uso de constantes com `#define`
- Posicionamento diagonal em matrizes
- Manipulação de í­ndices de arrays
- Sobreposição de uma matriz menor (habilidade) dentro da matriz do tabuleiro, validando limites

## Diferenciais do Ní­vel Aventureiro

- Implementação de navios na diagonal
- Tabuleiro completo 10x10
- Quatro navios simultâneos sem sobreposição
- Posicionamento em múltiplas direções

## Diferenciais do Ní­vel Mestre

- Implementação de habilidades especiais com áreas de efeito diferentes (cone, cruz e octaedro)
- Representação das habilidades com matrizes 0/1 e aplicação no tabuleiro
- Exibição da área afetada usando o valor 5, sem sobrescrever navios
- Impressão do tabuleiro para cada habilidade

## Autor

- Felipe de Lima

*Desenvolvido como parte do desafio de programação em C*