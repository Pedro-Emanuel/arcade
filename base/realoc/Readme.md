# L2 - @realoc - Vetor de strings com variados tamanhos

- Veja a versão online: [aqui.](https://github.com/qxcodefup/arcade/blob/master/base/realoc/Readme.md)
- Para programar na sua máquina (local/virtual) use:
  - `tko down fup realoc`
- Se não tem o `tko`, instale pelo [LINK](https://github.com/senapk/tko#tko).

---

![_](https://raw.githubusercontent.com/qxcodefup/arcade/master/base/realoc/cover.jpg)

## Ação

Leia um conjunto de strings e aloque apenas a quantidade de memória necessária para armazenar estas strings.

- Implmente a função `ler_string()`. Ela recebe um inteiro `quantidade` representando quantas strings serão lidas e um vetor onde serão armazenadas.
  - Para cada string, primeiro leia um inteiro `tamanho` indicando quantos caracteres a string tem, seguido da string.
  - A função deve alocar a memória necessária para armazenar a string e guardar o endereço desta memória no vetor.
  - Ao final, cada índice do vetor deve conter um ponteiro para a string correspondente.

Em seguida ordene e imprima as strings.

- Implemente a função `ordenar()`. Ela recebe um vetor de strings e a quantidade de strings.
  - A função deve ordenar os nomes em ordem crescente (ou seja, na ordem do dicionário).

## Entrada

- Linha 1: número de strings.
- Uma linha para cada strings.
A linha começa com um inteiro indicando quantos caracteres tem a string,
seguido de um espaço e a string.
  
## Saída

- Strings em ordem crescente (ou seja, na ordem do dicionário).
  
## Exemplos

``` txt
>>>>>>>>
6
12 Gilberto Gil
14 Maria Betânia
18 Osvaldo Montenegro
14 Caetano Veloso
6 Djavan
12 Marisa Monte
========
Caetano Veloso
Djavan
Gilberto Gil
Maria Betânia
Marisa Monte
Osvaldo Montenegro
<<<<<<<<
```

## Dicas

- Para cada string,
      - leia o tamanho da string;
      - aloque memória para armazenar esta string (lembre de alocar um caractere a mais para o terminador);
      - armazene o endereço da memória alocada em v\[i\] (elemento do vetor);
      - leia a string e grave em v\[i\].

- Para ordenar,
      - use a função strcmp para verificar se duas strings consecutivas estão fora de ordem;
      - ao trocar duas strings, troque apenas o endereço de memória (não o conteúdo);
      - note que não é válido trocar o conteúdo, pois as strings não têm o mesmo tamanho.

```c
char* vetor[quantidade];
    +--+        +-+-+-+-+-+
    | +-------->|J|O|A|O|0|    vetor[0] = (char*) malloc(5*sizeof(char));
    +--+        +-+-+-+-+-+
    | +-------->
    +--+        +-+-+-+-+-+-+
    | +-------->|M|A|R|I|A|0|  vetor[1] = (char*)malloc(6*sizeof(char));
    +--+        +-+-+-+-+-+-+
      .
      .
      .
    +--+
    |  |
    +--+
```
