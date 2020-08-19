## #strings L1 - Marileuza e as Alcaparras - Contar Ocorrencias!


![](__capa.jpg)

## Motivação

\- Mamãe, quantos 'a's existem na frase:  
\- A Andreia alimentou a avestruz com alcaparras  
Um silêncio toma conta do ambiente. Mamãe, olha pro teto  
como quem conta algo. Antes que Marileuza responda, Emanuelita se adianta.  
\- São 10 vezes Mamãe!  
Mamãe se sentindo superada por uma menina de 6 anos responde!  
\- Menina, vai programar que é mais futuro.

## Ação

Ajude Emanuelita a fazer o código que conta quantas vezes um caractere aparece numa frase. Conte apenas os caracteres exatos.  
Cada frase tem até 100 caracteres.

### Entrada

* Uma frase de ate 100 caracteres  e uma letra  

### Saída

* A quantidade de vezes que a letra aparece na frase

## Exemplos

```
>>>>>>>> 01
A Andreia alimentou a avestruz com alcaparras
a
========
8
<<<<<<<<

>>>>>>>> 02
A Andreia alimentou a avestruz com alcaparras
A
========
2
<<<<<<<<

>>>>>>>> 03
A Andreia atirou alcachofras no leao
e
========
2
<<<<<<<<

>>>>>>>> 04
A Andreia atirou alcachofras no leao
x
========
0
<<<<<<<<
```
## Ajuda

#### Pseudocódigo
```
inicie cont em 0;
leia texto até o /n
leia letra

crie um laço onde: i = 0; texto na posição i é diferente de 0; i++
    se texto na posição i = letra, cont++;
mostre cont;
```
#
