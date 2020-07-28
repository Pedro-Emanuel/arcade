## #04_vetores L3 - Jogo do Avesso V2


![](__capa.jpg)

## Motivação

A brincadeira do avesso funciona assim.

Tem um chefe e os operários. Os operarios ficam em fila. O chefe diz o nome de um operario e os dois operários que estavam perto dele tem que trocar de posição. Se estavam em pé, ficam agachados.

## Ação

Suponha a seguinte configuração onde cada número representa uma pessoa.

\[3 4 8 9 1 5 6\] O chefe grita "4", então o "3" e o "8" se agacham.  
O vetor fica assim: \[-3 4 -8 9 1 5 6\] usando o sinal negativo para representar o agachado.  
Depois o chefe grita "9". O -8 e o 1 se alteram ficando assim: \[-3 4 8 9 -1 5 6\]  
O 8 volta ao normal e o 1 se agacha.

Considere que nunca existem duas pessoas com o mesmo número no vetor. Se o chefe disser um número errado, ninguém deve se mexer.

\[DS\]

### Entrada

*   linha 1: o tamanho N do vetor de operarios(0 < N < 100) e a quantidade X de gritos do chefe( 0 < X < 100)
*   linha 2: o vetor de operarios, cada elemento entre (0 < 100)
*   linha 3: o vetor de gritos, cada elemento entre (0 < 100)

### Saída
- o novo vetor.

## Exemplos

```
>>>>>>>>
3 1
3 1 4
1
========
[-3 1 -4]
<<<<<<<<

>>>>>>>>
3 3
3 1 4
1 1 4
========
[3 -1 4]
<<<<<<<<

>>>>>>>>
7 5
3 4 8 9 1 5 6
3 4 5 6 9
========
[-3 -4 8 9 1 -5 -6]
<<<<<<<<
```


## Ajuda


## Dica

- Caso o funcionário esteja na última posição, seu vizinho direito não é modificado. Caso o funcionário esteja na primeira posição, o seu vizinho esquerno não é modificado.

- O valor do grito vale tanto se o número do funcionário for `positivo` ou `negativo`. Exemplo:
```
Grito = 3
vetor = [1 2 3 4], retorna [1 -2 3 -4] 
```            
```
Grito = 3
vetor = [1 2 -3 4], retorna [1 -2 -3 -4] 
```

## Pseudocódigo 

```
LEIA N M
CRIE VET1 DE TAMANHO N
PREENCHA VET1 
ENQUANTO I MENOR M; I++
	LEIA A
	ENQUANTO J < N; J++
		SE A == VET1[J] OU A == VET1[J] * (-1)
			SE J == 0
				VET1[J+1] = VET1[J+1] * (-1)
			SE NÃO SE J == N-1
				VET1[J-1] = VET1[J-1] * (-1)
			ELSE 
				VET1[J-1] = VET1[J-1] * (-1)
				VET1[J+1] = VET1[J+1] * (-1)

IMPRIMA VET1
```

