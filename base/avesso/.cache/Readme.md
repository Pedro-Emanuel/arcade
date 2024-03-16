# L2 - Jogo do @avesso

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/avesso/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup avesso`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/avesso/cover.jpg)

## Motivação

A brincadeira do avesso funciona assim.

Tem um chefe e os operários.  
Os operários ficam em fila.  
O chefe diz o nome de um operário e os dois operários que estavam perto dele tem que trocar de posição.  
Se estavam em pé, ficam agachados e vice-versa.

## Ação

Suponha a seguinte configuração onde cada número  
representa uma pessoa.

\[3 4 8 9 1 5 6\]

O chefe grita "4", então o "3" e o "8" se agacham.  

O vetor fica assim:  

\[-3 4 -8 9 1 5 6\]  

Usando o sinal negativo para representar o agachado.

Depois o chefe grita "9". O -8 e o 1 se alteram ficando assim:

\[-3 4 8 9 -1 5 6\]  

O 8 volta ao normal e o 1 se agacha.

Considere que nunca existem duas pessoas com o mesmo número no vetor.

Se o chefe disser um número errado, ninguém deve se mexer.

## Entrada

- a quantidade de casos de teste.
- Para cada caso teste:  
  - O tamanho do vetor de operários (N < 100) e o grito do chefe (0 < X < 100).  
  - O vetor de operários, um valor inteiro para cada elemento  (0 < 100).

## Saída

- Vetor resultante.  

## Exemplos

``` txt
>>>>>>>>
1
2 3
3 1
========
[3 -1]
<<<<<<<<

>>>>>>>>
1
2 3
2 1
========
[2 1]
<<<<<<<<

>>>>>>>>
1
2 1
4 1
========
[-4 1]
<<<<<<<<

>>>>>>>>
3
3 1
4 1 5
3 5
4 1 5
3 4
4 1 5
========
[-4 1 -5]
[4 -1 5]
[4 -1 5]
<<<<<<<<

>>>>>>>>
3
7 0
3 4 8 9 1 5 6
7 4
3 4 8 9 1 5 6
7 9
3 4 -8 9 1 5 6
========
[3 4 8 9 1 5 6]
[-3 4 -8 9 1 5 6]
[3 4 8 9 -1 5 6]
<<<<<<<<
```
