# PandemiC
Programa de simulação de contágio em uma pandemia viral criada em C.

## Aluno

 - Samuel de Araújo Costa

## Tipos de dados utilizados

 - struct
 - int
 - char
 - void
 - float
 - double

## Requisitos

 Para execução do programa é necessário:

 - Python 3 : ``` sudo apt-get install python3.6 ```
 - Matplotlib : ``` sudo apt-get install matplotlib ```
 - tkinter : ``` sudo apt-get install python3-tk ```
 - Compilador : ``` sudo apt install build-essential ```

## Arquivo de Entrada

O arquivo de entrada deverá seguir o seguinte modelo:

 ```
S_0=[valor]
I_0=[valor]
R_0=[valor]
h=[valor]
N_b=[valor]
T_b=[valor]
S_b0=[valor]
I_b0=[valor]
m_k=[valor]
n_k=[valor]
T_k=[valor]
tempo_T_b2=[valor]
T_b2=[valor]
tempo_T_k2=[valor]
T_k2=[valor]
 ```

onde [valor] corresponde aos parametros usados na simulação.
Abaixo segue um exemplo:

```
S_0=70
I_0=2
R_0=0
h=0.1
N_b=12
T_b=24
S_b0=10
I_b0=50
m_k=6
n_k=22
T_k=24
tempo_T_b2=250
T_b2=48
tempo_T_k2=250
T_k2=12
```

## Compilação

```
gcc ./modules/readinput.c ./modules/simulation.c ./modules/writeoutput.c main.c -o main
```

## Execução do programa

```
./main
```

O programa solicitará o tempo de simulação em horas.

## Plotagem dos Dados

Logo após toda a simulação, o próprio programa irá executar o script Python de plotagem (plot.py).

A linha de chamada do script Python é feita por:

``` system("python3 plot.py output.csv\n"); ```
