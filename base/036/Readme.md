## #seleção L3 - Morre o do meio


![](__capa.jpg)

## Motivação

Três esquilos gêmeos brincavam num toquinho de árvore quando de repente aparece uma raposa faminta. A raposa pula de um sopapo, encara e encurrala os três e eles percebem que não háverá fuga para todos. Alguém vai acabar morrendo naquele encontro.

O maior Esquilo, Alfredo, puxa o papo com a Raposa.
\- Dona Raposa, vejo que és uma só, enquanto nós somos 3. Sei que estás com fome. Se corrermos cada um para um lado diferente, não conseguirás pegar os três, mas certamente pegará um de nós. Para não deixar a decisão em vossa mão, permita que decidamos qual de nós vai morrer, e então poderá saborear seu almoço sem fazer esforço.

A raposa em choque decidiu esperar para ver como os irmãos iam decidir quem ia morrer. Porque ela sabia que pelo menos um morreria ali.

Os irmãos tentaram todos os critérios de decisão, mas nunca chegaram em um veredito. Morre o menor, morre o maior, morre o mais peludo, morre o mais dentuço.

A Raposa se meteu e tentou ajudar.
\- Se vocês ficarem bem esticadinhos e juntinhos no chão eu meço vocês da cauda à orelha e a gente descobre quem é o médio. O menor e o maior poderão ir embora.

Os esquilos ficaram juntinhos e bem esticadinhos. A raposa foi lá e numa bocada mordeu os três.

Moral da história: Não confie em pessoas que tem claramente interesses diferentes dos seus quando elas quiserem te ajudar.

## Ação

Receba três valores e imprima o valor do meio.

### Entrada

* Os três valores, uma por linha, todos os valores serão diferentes.

### Saída

* O valor do meio.

## Exemplos

```
>>>>>>>>
5
2
4
========
4
<<<<<<<<

>>>>>>>>
6
5
7
========
6
<<<<<<<<

>>>>>>>>
1
0
6
========
1
<<<<<<<<

>>>>>>>>
4
6
5
========
5
<<<<<<<<
```

## Ajuda

1º Pseudocódigo
```
Leia primeiro_numero
Leia segundo_numero
Leia terceiro_numero
menor_numero = primeiro_numero
maior_numero = primeiro_numero

Se (segundo_numero for menor que menor_numero):
    menor_numero recebe segundo_numero
Se (segundo_numero for maior que maior_numero):
    maior_numero recebe segundo_numero
Se (terceiro_numero for menor que menor_numero):
    menor_numero recebe terceiro_numero
Se (terceiro_numero for maior que maior_numero):
    maior_numero recebe terceiro_numero
    
Mostre (primeiro_numero + segundo_numero + terceiro_numero - 
        maior_numero - menor_numero)
``` 

2º Pseudocódigo

``` 
Leia primeiro_numero
Leia segundo_numero
Leia terceiro_numero
menor_numero = primeiro_numero
maior_numero = primeiro_numero

Se (primeiro_numero for maior que menor_numero) e (primeiro_numero for menor que maior_numero):
    Mostrar (primeiro_numero)
Senao Se (segundo_numero for maior que menor_numero) e (segundo_numero for menor que maior_numero):
    Mostrar (segundo_numero)
Senao:
    Mostrar (terceiro_numero)
``` 