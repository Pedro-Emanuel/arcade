# L2 - Competição de @pesca

## Motivação

Em uma pequena cidade à beira-mar, está acontecendo o tão aguardado torneio de pesca anual. Dois amigos, João e Pedro, decidiram participar da competição para mostrar suas habilidades como pescadores. Durante o dia inteiro, eles pescaram pacientemente em seus barcos, cada um determinado a pegar o maior peixe e ganhar o troféu de campeão do torneio.

Ao final do dia, João e Pedro retornaram ao cais com seus barcos carregados de peixes. Agora, eles querem determinar qual deles conseguiu capturar o maior peixe e se tornar o vencedor do torneio.

## Ação

Implemente a função torneio_pesca() para ajudar João e Pedro a determinar o vencedor do torneio. A função recebe dois vetores de inteiros, pescador1 e pescador2, cada um contendo os tamanhos dos peixes capturados por João e Pedro.

```c
char* torneio_pesca(int* pescador1, int* tam1, int* pescador2, int* tam2);
```

## Entrada

- Um inteiro representando o número de peixes capturados por João, seguido por uma linha contendo os tamanhos dos peixes capturados por João.
- Um inteiro representando o número de peixes capturados por Pedro, seguido por uma linha contendo os tamanhos dos peixes capturados por Pedro.

## Saída

- A função deve retornar o nome do pescador que capturou o maior peixe. Se os dois pescadores capturaram peixes do mesmo tamanho, a função deve retornar a string "Empate".

## Exemplos

``` txt
>>>>>>>>
3
10 20 30
3
15 25 35
========
Pedro
<<<<<<<<
