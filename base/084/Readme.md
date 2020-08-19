## #vetores L3 - Zoologico Um animal de cada tipo!


![](__capa.jpg)

## Motivação

O dono do zoologico quer a lista de todas as especies de animais  
que existem no zoologico. Para isso ele te deu uma lista de todos  
os animais. Ele quer que você faça um programa que retorne uma  
nova lista contendo apenas um animal de cada especie.  
Considere que um número representa uma especie.  
Devolva um novo vetor, sem números repetidos e ordenado.

Não use uma função de ordenar pronta.

\[DS\]

### Entrada

- linha 1: um número com a quantidade de elementos do vetor
- linha 2: o vetor de inteiros  

### Saída

- O novo vetor ordenado contendo um exemplar de cada elemento.

## Exemplos

```
>>>>>>>>
3
1 1 2
========
1 2
<<<<<<<<

>>>>>>>>
5
1 3 2 2 3
========
1 2 3
<<<<<<<<

>>>>>>>>
8
1 9 3 3 3 2 1 4
========
1 2 3 4 9
<<<<<<<<
```

## Ajuda

### Dica
- Implemente o algoritmo `Bubble Sort`.

- Que tal usar um `vetor auxiliar`? Ele pode ser utilizado para salvar sempre que um número diferente aparece.

### Pseudocódigo
```
Ler N
Ler vetor

// utilize o Bubble Sort
Ordenador vetor

// atribui a primeira posicão de vetor para vetor_auxiliar
j recebe 0
vetor_auxiliar[j] recebe vetor[0]
Incrementar j

Para ( i menor que N - 1 ):
    Se ( vetor[i] diferente (vetor[i + 1] ):
        vetor_auxiliar[j] recebe vetor[i + 1]
        Incrementar j

Mostrar (vetor_auxiliar)
```

- Lembrando que para ler/mostrar um vetor é necessário um laço/estrutura de repetição. Por exemplo:
```
Ler N

Para ( i menor que N ):
    Ler vetor[i] // Mostrar vetor[i]
```
