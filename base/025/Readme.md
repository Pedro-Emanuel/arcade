## #seleção L1 - Ambos Divisíveis
### Módulo e operadores lógicos

![](__capa.jpg)

## Motivação

Ao terminar uma prova de matemática, Marcelo e João estavam na duvida se teriam acertado as questões que perguntava se um numero era divisível por outro. Ao chegar em casa, Marcelo ainda com essa duvida, pediu para o seu irmão mais velho, você, ajudar ele fazendo um programa que diz se um número é divisível por outro.

## Ação

Leia dois inteiros e diga se ambos sao divisiveis por 3 ou por 5.

### Entrada

- Dois números inteiros.

### Saída

- "sim" (sem aspas) caso ambos sejam divisíveis por 3 ou 5
- "nao" (sem aspas) caso não seja divisíveis

## Exemplos

```
>>>>>>>>
5
10
========
sim
<<<<<<<<

>>>>>>>>
3
10
========
nao
<<<<<<<<

>>>>>>>>
6
9
========
sim
<<<<<<<<



```
## Dicas


Você pode utilizar o operador "%" (lê-se "mod") para verificar se um número é divisível por outro. Lembre-se de verificar se é divisível por ambos os números, ou seja, 3 e 5.

```c
//Exemplo em C
if(10 % 2 == 0)
    printf("10 é par");
```


