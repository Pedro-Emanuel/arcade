# L3 - @Ordenação V2

## Motivação

Agora, diferente da @Ordenação V1, estamos lidando com um desafio um pouco mais complexo! Antes, tínhamos que lidar apenas com um vetor de três números, mas agora precisamos criar um algoritmo que funcione para qualquer tamanho de vetor. Vamos colocar a cabeça para funcionar e desenvolver um algoritmo que seja capaz de lidar com essa tarefa de maneira eficaz!

## Ação

Implemente a função `ordenar()` que recebe um vetor de inteiros e o ordena em ordem crescente.

```c
int* ordenar(int* vetor, int* tamanho);
```

### Dica

- Para resolver este desafio, você pode implementar o algoritmo de ordenação `Bubble Sort`. Este algoritmo é simples e funciona bem com vetores pequenos.
- Utilize a função `swap` para trocar os elementos de posição no vetor (ver [@swap](../../base/swap/Readme.md))

## Entrada

- Um ponteiro para um vetor de inteiros.
- O tamanho do vetor.

## Saída

- A função deve retornar um ponteiro para o mesmo vetor ordenado em ordem crescente.

## Exemplos

```txt
>>>>>>>
5
5 4 3 2 1
=======
1 2 3 4 5
```
