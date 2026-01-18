# Batalha Naval

Projeto do desafio de programação em C - Ní­vel Novato

## Descrição

Este é um programa em C que cria um tabuleiro de batalha naval e posiciona dois navios nele. Um navio é colocado na horizontal e outro na vertical.

## Como Funciona

O programa cria um tabuleiro 10x10 usando uma matriz. Cada posição pode ter:
- 0 = água
- 3 = navio

Dois navios de tamanho 3 são posicionados:
- Navio 1: horizontal, linha 2, começando na coluna 3
- Navio 2: vertical, coluna 7, começando na linha 5

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

## Exemplo de Saída

```
====================================
   BATALHA NAVAL - NÍVEL INICIANTE  
====================================

Posicionando Navio 1 (Horizontal)...
Navio 1 posicionado com sucesso na linha 2, coluna 3 (Horizontal)

Posicionando Navio 2 (Vertical)...
Navio 2 posicionado com sucesso na linha 5, coluna 7 (Vertical)

=== TABULEIRO DO BATALHA NAVAL ===

    0  1  2  3  4  5  6  7  8  9 
 0  0  0  0  0  0  0  0  0  0  0 
 1  0  0  0  0  0  0  0  0  0  0 
 2  0  0  0  3  3  3  0  0  0  0 
 3  0  0  0  0  0  0  0  0  0  0 
 4  0  0  0  0  0  0  0  0  0  0 
 5  0  0  0  0  0  0  0  3  0  0 
 6  0  0  0  0  0  0  0  3  0  0 
 7  0  0  0  0  0  0  0  3  0  0 
 8  0  0  0  0  0  0  0  0  0  0 
 9  0  0  0  0  0  0  0  0  0  0 

Legenda: 0 = Áagua | 3 = Navio
```

## Estrutura do Código

O programa possui as seguintes funções principais:

- `inicializarTabuleiro()` - Preenche o tabuleiro com zeros
- `posicionarNavio()` - Coloca um navio no tabuleiro
- `posicaoValida()` - Verifica se o navio cabe no tabuleiro
- `verificarSobreposicao()` - Checa se há navios sobrepostos
- `exibirTabuleiro()` - Mostra o tabuleiro na tela
- `main()` - Funçõo principal que executa o programa

## Conceitos Utilizados

- Matrizes bidimensionais
- Loops for aninhados
- Funções com passagem de parÃ¢metros
- Validação de dados
- Uso de constantes com define

## Autor

- Felipe de Lima

*Desenvolvido como parte do desafio de programação em C*****
