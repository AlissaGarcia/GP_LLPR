---
description: >-
  Agora vamos introduzir alguns conceitos matemáticos juntamente com
  armazenamento e criação de variáveis.
icon: calculator-simple
cover: ../.gitbook/assets/Banner Institucional GP de LLPR (1).png
coverY: 0
coverHeight: 198
---

# Questão 02 — Operações

### <i class="fa-play">:play:</i> Contextualização

As quatro operações fundamentais da matemática — soma, subtração, multiplicação e divisão — são utilizadas em diversas situações do nosso cotidiano. Nesta atividade, vamos desenvolver um algoritmo capaz de realizar essas operações a partir de dois números informados pelo usuário. O programa deverá receber os valores, armazená-los em variáveis, executar os cálculos correspondentes e apresentar os resultados na tela. Dessa forma, a atividade permite colocar em prática conceitos básicos de lógica de programação, como entrada e saída de dados, declaração e manipulação de variáveis, operadores aritméticos e interação com o usuário.&#x20;

### <i class="fa-hand-fist">:hand-fist:</i> Desafio

{% tabs %}
{% tab title="Questão" %}
Faça um algoritmo que receba dois números e ao final mostre a **soma, subtração, multiplicação e a divisão** dos números lidos.
{% endtab %}
{% endtabs %}

A solução deve apresentar a mensagem exatamente como foi solicitada, utilizando **armazenamento em variáveis**.

{% hint style="info" %}
Mas o que são variáveis?? Bom, antes de continuarmos essa pergunta merece uma sessão só para respondê-la!!&#x20;
{% endhint %}

### <i class="fa-box-isometric">:box-isometric:</i> As variáveis (Caixinhas)

Imagine que o computador possui várias **caixinhas** disponíveis para guardar informações (isso é a memória ou o armazenamento). Quando declaramos uma variável, estamos basicamente dizendo ao computador: _"Ei, reserve um espacinho aí, porque vou guardar alguma coisa nele!"_

Cada variável funciona como uma dessas caixinhas e possui um **nome** que permite identificá-la sempre que precisarmos utilizar o valor armazenado.

Mas atenção: não basta apenas criar uma caixinha! **Também precisamos informar ao computador que tipo de informação ela poderá guardar**. Por exemplo, quando declaramos uma variável do tipo **inteiro**, estamos reservando um espaço, do tamanho de um inteiro <i class="fa-box-open">:box-open:</i> para armazenar números como 5, 10 ou 897.

Depois de declarar e nomear uma variável, podemos **atribuir um valor a ela.** É como colocar algo dentro da caixinha! <i class="fa-inbox-in">:inbox-in:</i> Para isso, utilizamos o nome que escolhemos na declaração, permitindo que o computador saiba exatamente **onde armazenar a informação recebida ou lida** durante a execução do programa.&#x20;

**Resumindo:** declarar é criar a caixinha, nomear é identificá-la e atribuir é colocar um valor dentro dela!

Dito isso, vamos resolver nosso problema...&#x20;

### <i class="fa-face-thinking">:face-thinking:</i> Antes de programar: pense no problema

Antes de escrever a solução, procure responder:

<details>

<summary>O que o problema está <strong>solicitando</strong>? </summary>

Releia a questão para entender, foque nos **verbos**: Fazer algo para receber algo e mostrar algo...

> **Faça** um algoritmo que **receba** dois números e ao final **mostre** a soma, subtração, multiplicação e a divisão dos números lidos.

</details>

<details>

<summary>Quais <strong>informações</strong> precisam ser fornecidas ao algoritmo?</summary>

Pense: O que eu preciso dizer para meu computador fazer? O que ele precisa saber para resolver o problema? <i class="fa-face-thinking">:face-thinking:</i>

> Faça um algoritmo que **receba dois números** e ao final **mostre a soma, subtração, multiplicação e a divisão dos números lidos**.

Preciso que meu algoritmo **receba dois números,** então aqui vamos precisar das **variáveis** (Caixinhas) para **armazenar** esses números e depois também vamos usar mais caixinhas para guardar os valores manipulados.

<i class="fa-box-open">:box-open:</i> numero1 (Para armazenar o primeiro número);

<i class="fa-box-open">:box-open:</i> numero2 (Para armazenar o segundo número);

<i class="fa-box-open">:box-open:</i> soma (Para armazenar o valor da soma dos dois números);

<i class="fa-box-open">:box-open:</i> sub (Para armazenar o valor da subtração dos dois números);

<i class="fa-box-open">:box-open:</i> multi (Para armazenar o valor da multiplicação dos dois números);

<i class="fa-box-open">:box-open:</i> div (Para armazenar o valor da divisão dos dois números);

</details>

<details>

<summary>Qual instrução permite <strong>receber</strong> algum dado e <strong>armazená</strong>-<strong>lo</strong>?</summary>

No nosso caso, como estamos usando pseudocódigo, vamos utilizar o **"Leia".** &#x20;

> Faça um algoritmo que **receba** dois números e ao final mostre a soma, subtração, multiplicação e a divisão dos números lidos.

"Receber" aqui nessa questão tem o mesmo sentido que a instrução "Leia" vai ter no nosso código. <i class="fa-book-open-reader">:book-open-reader:</i>

Para atribuirmos as operações matemáticas às variáveis vamos usar o sinal:

**Atribuição "<-"**&#x20;

</details>

<details>

<summary>Qual <strong>instrução</strong> permite somar, subtrair, multiplicar e dividir?</summary>

Qual instrução devemos usar para realizar essas operações matemáticas?&#x20;

> Faça um algoritmo que receba dois números e ao final mostre a **soma, subtração, multiplicação e a divisão** dos números lidos.

Para elas, vamos usar os sinais de "calculadora".&#x20;

Soma +; Subtração -; Multiplicação \*; Divisão /.

</details>

<details>

<summary>Qual deve ser o <strong>resultado</strong> após a execução?</summary>

Por fim, qual comportamento é esperado que o computador tenha? Qual o resultado final de toda a nossa operação? O que a gente deve ter de **saída**?&#x20;

> Faça um algoritmo que receba dois números e ao final **mostre a soma, subtração, multiplicação e a divisão dos números lidos**.

Bom, aqui a resposta é um "depende" <i class="fa-face-thinking">:face-thinking:</i>

Depende de quais foram os números lidos... Por exemplo, se vamos ler (10;2)

Nossa saída então deve ser:&#x20;

12 para soma; 8 para subtração; 20 para multiplicação e 5 para divisão.

</details>

### <i class="fa-circle-notch">:circle-notch:</i> Implementação (Pseudocódigo)

{% code lineNumbers="true" %}
```
var
   numero1, numero2: real
   soma, sub, multi, div: real

inicio
   escreva("Digite o primeiro número inteiro: ")
   leia(numero1)

   escreva("Digite o segundo número inteiro: ")
   leia(numero2)

   soma <- numero1 + numero2
   sub <- numero1 - numero2
   multi <- numero1 * numero2
   div <- numero1 / numero2

   escreva("Soma: ", soma)
   escreva(" Subtracao: ", sub)
   escreva(" Multiplicacao: ", multi)
   escreva(" Divisao: ", div)

fim
```
{% endcode %}

### <i class="fa-line-height">:line-height:</i>  Explicação do algoritmo linha a linha

```
Indica que vamos declarar variáveis;
Variáveis para guardamos os números do tipo real
Variáveis para guardarmos os valores das manipulações, também do tipo real.

Inicio do algoritmo
Pedimos ao usuário que digite um número
Armazenamos esse número na variável numero1

Pedimos para que o usuário digite um segundo número
armazenamos esse número na variável numero2

Atribuimos (Armazenamos) o valor da soma dos dois números à variável soma "<-(atribuição)"
Atribuimos o valor da subtração dos números à variável sub
Atribuimos o valor da multiplicação dos números à variável multi
Atribuimos o valor da divisão dos números à variável div

Imprimimos na tela o valor armazenado na variável soma 
Imprimimos na tela o valor armazenado na variável sub
Imprimimos na tela o valor armazenado na variável multi
Imprimimos na tela o valor armazenado na variável div

final do algoritmo
```

### <i class="fa-check">:check:</i> Resultado esperado

Digite o primeiro número Inteiro: 20 <i class="fa-arrow-turn-down-left">:arrow-turn-down-left:</i>

Digite o segundo número Inteiro: 5 <i class="fa-arrow-turn-down-left">:arrow-turn-down-left:</i>

```
Soma: 25 Subtração: 15 Multiplicação: 100 Divisão: 4
```

### O que aprendemos?

Nesta atividade, colocamos em prática alguns conceitos fundamentais da lógica de programação. Aprendemos a declarar variáveis, armazenar valores, receber informações do usuário e realizar operações matemáticas por meio de um algoritmo.

Ao desenvolver a solução, também compreendemos a importância dos operadores aritméticos e da atribuição de valores às variáveis.

**Agora você já sabe:**

* Declarar variáveis e definir seus tipos de dados.
* Armazenar e manipular informações.
* Utilizar `leia()` para receber dados do usuário.
* Utilizar `escreva()` e `escreval()` para apresentar informações.
* Aplicar os operadores de soma, subtração, multiplicação e divisão.
* Utilizar o comando de atribuição `<-` para armazenar resultados.
* Construir um algoritmo com entrada, processamento e saída de dados.

