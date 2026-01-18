# Batalha Naval

Projeto do desafio de programação em C - Ní­vel Aventureiro

## Descrição

Este é um programa em C que cria um tabuleiro de batalha naval e posiciona quatro navios nele. Dois navios são colocados de forma tradicional (horizontal e vertical) e dois navios são posicionados na diagonal.

## Como Funciona

O programa cria um tabuleiro 10x10 usando uma matriz. Cada posição pode ter:
- 0 = água
- 3 = navio

Quatro navios de tamanho 3 são posicionados:
- Navio 1: horizontal, linha 2, começando na coluna 1
- Navio 2: vertical, coluna 7, começando na linha 5
- Navio 3: diagonal descendente, começando na posição (0,5)
- Navio 4: diagonal ascendente, começando na posição (9,0)

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

## Exemplo de Saí­da

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

Legenda: 0 = Água | 3 = Navio
```

## Estrutura do Código

O programa utiliza:

- Matriz bidimensional `tabuleiro[TAM][TAM]` para representar o campo de jogo
- Constantes definidas com `#define` (TAM, AGUA, NAVIO)
- Loops aninhados para inicialização e exibição
- Posicionamento manual dos navios

## Conceitos Utilizados

- Matrizes bidimensionais
- Loops for aninhados
- Uso de constantes com define
- Posicionamento diagonal em matrizes
- Manipulação de í­ndices de arrays

## Diferenciais do Nível Aventureiro

- Implementação de navios na diagonal
- Tabuleiro completo 10x10
- Quatro navios simultâneos sem sobreposição
- Posicionamento em múltiplas direções

## Autor

- Felipe de Lima

*Desenvolvido como parte do desafio de programação em C - Ní­vel Aventureiro*