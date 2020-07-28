## #04_vetores L3 - Mercantil V3 - Muitas rodadas


![](__capa.jpg)

## Motivação

## Descrição

- Pedro e João foram no Silvio Santos. Esse problema é diferente da versão V1 do Mercantil. 
- Nesse, cada produto tem um valor real que nenhum dos competidores conhece.
- O jogo funciona assim:
    - O primeiro competidor chuta um valor.
    - O segundo competidor chuta se acha que o valor real é maior ou menor que o valor chutado pelo primeiro competidor.
    - O primeiro jogador ganha se ele acertar o chute no valor exato ou se o segundo jogador chutar na direção errada.
    - O segundo jogador caso contrário.
- O jogo acontecerá em várias rodadas. Ganhará o jogo quem vencer mais rodadas. Acontecerá empate se ambos ganharem a mesma quantidade de rodadas.


### Entrada

*   1ª linha: a quantidade de rodadas.  
*   2ª linha: o valor dos produtos de todas as rodadas.
*   3ª linha: os chutes do primeiro (float) para todas as rodadas.
*   4ª linha: as escolhas do segundo (m para menor, M para maior) para todas as rodadas.  

### Saída

*   Resultado do jogo ("primeiro" ou "segundo" ou "empate").

## Exemplos  

```
>>>>>>>>
1  
1.0  
1.0  
M  
========
primeiro
<<<<<<<<

>>>>>>>>
2  
1.0 2.0  
1.0 2.1  
m m  
========
empate
<<<<<<<<

>>>>>>>>  
2
1.0 2.0
1.0 2.1
m M
========
primeiro
<<<<<<<<

>>>>>>>>
2
1.0 2.0
1.1 2.1
m M
========
empate
<<<<<<<<

>>>>>>>>
3
1.0 2.0 4.0
1.1 2.1 4.0
m M m
========
primeiro
<<<<<<<<

>>>>>>>>
3
1.0 2.0 4.02
1.1 2.1 4.1
M m m
========
segundo
<<<<<<<<
```


## Dicas

Você primeiro deve preencher 3 vetores, um vetor é de float, o segundo vetor é outro de float, e o último de char, eles tem o mesmo tamanho N, que é a primeira linha de entrada. Depois você pode criar duas variáveis, uma conta quantas vezes o jogador 1 venceu, e a outra quantas vezes o jogador 2 ganhou. Para verificar se um jogador ganhou, é só percorrer o vetor 1, depois olha o valor, do segundo vetor na mesma posição e por fim, verifica se o jogador 2 no terceiro vetor escolheu menor ou maior, caso ele tenha acertado, atribua + 1 na variável que criou para ele, caso não, atribua na outra variável do jogador 1. Por fim, compare quem tenha mais pontos e imprima o vencedor.	  
