## #05_strings L2 - Gagueira V1 - Duplicar Palavras


![](__capa.jpg)

## Motivação

A disfemia, conhecida popularmente como gagueira ou gaguez, é a mais comum desordem de fluência da fala, atingindo cerca de 70 milhões de pessoas em todo o mundo (dois milhões no Brasil). Os sintomas mais evidentes da gagueira são a repetição de sílabas, os prolongamentos de sons e os bloqueios dos movimentos da fala, sobretudo na primeira sílaba, no momento em que o fluxo suave de movimentos da fala precisa ser iniciado.

[http://pt.wikipedia.org/wiki/Disfemia](http://pt.wikipedia.org/wiki/Disfemia)

## Ação

Faça um programa que receba uma frase(max 100 char) e imprima a mesma frase com as palavras repetidas.

### Entrada

*   A entrada é uma frase composta apenas de letras minúsculas e espaços. Não existem espaços no começo ou no final da entrada. Não aparecem dois espaços juntos.

### Saída

*   A frase com as palavras repetidas.

## Exemplos

```
>>>>>>>>
ola planeta terra
========
ola ola planeta planeta terra terra
<<<<<<<<

>>>>>>>>
gosto de tomate
========
gosto gosto de de tomate tomate
<<<<<<<<

>>>>>>>>
minha ufc
========
minha minha ufc ufc
<<<<<<<<

>>>>>>>>
sim eu vou
========
sim sim eu eu vou vou
<<<<<<<<
```
## Ajuda
#### Pseudocódigo
```
crie uma string frase com 100 espaços
leia frase até o /n
inicie um contador em 0;

crie um laço que inicia em i = 0 e continua enquanto i <= frase; i++){
  se(frase na posição i != ' ' e i <= frase - 1){
    mostre frase na posição i;
    cont++;
  }senão{
    mostre(" "); //espaço
    crie um laço onde: (a = i - cont; a < i; a++){
      mostre frase na posição a;
    }
    se(i != frase){
      mostre(" ");
    }
    cont = 0;
  }
}
```
#
