## ©02_seleção L2 - A hora do próximo segundo


![ponteiros de um relógio](__capa.jpg)

## Motivação

A mãe de João entrou em seu quarto e ficou furiosa por causa da bagunça. Ela deu um grito bem alto e acordou o coitado do João que estava no terceiro sono. Ele sonhando que estava contando as ovelhas que conseguiam pular a cerca da fazenda de seu pai, mas no sonho, ele só conseguia contar de 60 em 60.

Após cair da cama, sua mãe lhe disse que se ele não se levantasse em um segundo e arrumasse seu quarto inteiro ficaria de castigo até o próximo ano bissexto, primo e quadrado perfeito.

## Ação

Supondo que João seja sobre humano, seu trabalho é fazer um programa para calcular em qual hora minuto e segundo ele deve ter terminar de arrumar seu quarto.

### Entrada

* Três inteiros, hora, minuto e segundo inicial em uma linha.

### Saída:

* Hora, minuto e segundo final e uma linha.

## Exemplos:

```
>>>>>>>>
12 10 11
========
12 10 12
<<<<<<<<

>>>>>>>>
12 10 59
========
12 11 00
<<<<<<<<

>>>>>>>>
12 59 59
========
13 00 00
<<<<<<<<

>>>>>>>>
23 59 59
========
00 00 00
<<<<<<<<
```

## Dica

Para imprimir um número inteiro colocando zeros a esquerda utilize o seguinte comando. Se o printf contiver %0xd, o número vai ser impresso completando com zeros a esquerda se o número tiver menos que x caracteres. Para imprimir com dois dígitos a variável **valor** use.

```C
printf("%02d", valor); //c

print'%02d'% valor # python
```
#### Pseudocódigo
```
Leia hora, minuto e segundo
Se segundo igual a 59
  segundo = 00
  Se minuto igual a 59
    minuto = 00
    Se hora igual a 23
      hora = 00
    Se não 
      hora mais 1
  Se não
    minuto mais 1
Se não
  segundo mais 1
Mostre hora, minuto e segundo com duas casas
```
#
