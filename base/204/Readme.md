# L1 - Corredor

![praca](https://github.com/qxcodefup/arcade/assets/32993157/26d5d48a-f5b8-4842-898c-351270357d56)

Um corredor está treinando na Praça do Leão, um local retangular com 300 metros de perímetro (100 metros de comprimento e 50 metros de largura). O corredor começa em uma posição específica e corre uma certa distância. Dependendo do sentido em que ele corre, sua posição pode aumentar ou diminuir. A posição é medida a partir do canto superior esquerdo da praça.

Você deve escrever um programa que calcule a posição final do corredor após sua corrida na Praça do Leão. A posição final depende do sentido em que ele correu, que é determinado pela distância percorrida. Se a distância for positiva, ele correu no sentido de aumento; se for negativa, correu no sentido de diminuição.

Implemente um programa que receba a posição inicial do corredor e a distância percorrida, e determine a posição final, levando em consideração os limites da praça.

## Entrada

A entrada contém dois números inteiros: a posição inicial do corredor e a distância percorrida por ele em metros.

## Saída

Imprima um único número inteiro que representa a posição final do corredor na Praça do Leão.

## Exemplos

### **Entrada**

```text
0
20
```

### **Saída**

```text
20
```

> **Explicação**:
>
> O corredor começa na posição 0 e corre 20 metros no sentido de aumento, terminando na posição 20 (0 + 20 = 20).
>

### **Entrada**

```text
50
-20
```

### **Saída**

```text
30
```

> **Explicação**:
>
> O corredor começa na posição 50 e corre 20 metros no sentido de diminuição, terminando na posição 30 (50 - 20 = 30).
>

### **Entrada**

```text
0
350
```

### **Saída**

```text
50
```

> **Explicação**:
>
> O corredor começa na posição 0 e corre 350 metros no sentido de aumento, terminando na posição 350 (0 + 350 = 350). No entanto, como a Praça do Leão possui um perímetro de 300 metros, o corredor não pode ultrapassar os limites da praça, portanto ele termina na posição 50 (350 - 300 = 50).
>
