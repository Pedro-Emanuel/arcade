# L2 Escrevendo @cartinhas

## Motivação

Lucas e Júlia se conheceram em um café no centro da cidade. Desde então, trocam olhares tímidos e sorrisos discretos.

Essa nova paixão se viu ameaçada quando Júlia precisou se mudar para outra cidade. Lucas, então, decidiu escrever cartas para Júlia, contando sobre seu dia, seus sentimentos e suas saudades.

## Ação

Ajude Lucas a escrever um programa que leia uma mensagem e a transforme em uma carta.

Você deve criar uma estrutura Carta que contenha informações sobre o remetente, o destinatário e a mensagem da carta.

Para criar uma carta, você deve passar os dados para uma função `criar_carta` que deve retornar as informações agrupadas em uma estrutura Carta.

```c
struct Carta criar_carta(char remetente[], char destinatario[], char mensagem[]);
```

## Entrada

- O nome do remetente, na primeira linha linha.
- O nome do destinatário, na segunda linha.
- A mensagem da carta, na terceira linha.

- Garantias:
  - Os nomes dos remetentes e destinatários terão no máximo 10 caracteres.
  - A mensagem terá no máximo 100 caracteres.

## Saída

- A carta formatada da seguinte maneira:

```css
[destinatário],

[mensagem]

Com carinho,
[remetente].
```
