# Tópicos em Competição Competitiva

Repositório dedicado a matéria de programação competitiva ministrada pelo professor Vinicius na Universidade de Brasília

PROGRAMAÇÃO COMPETITIVA: CIC0169

##  Running

### Comando básico para execução de um programa em Cpp no Ubuntu

```bash
g++ file.cpp -std=c++17 -o nome_do_bin
```
### Just to be aware, how to comment into vscode

```bash
ctrl + shift + a 
#insta comment onto vscode
```

### Defining things into cppp

#### Defining ll as long long
```cpp
/* begining of the code try not to use int */
typedef long long ll;
#define ll long long;
```

<!-- ## Be aware of overflows  ## -->

#### Casting (redefining) variables
```cpp
/* casting */
a = (ll) a * (ll) b
```

#### Is this a crime?
```cpp
#define int long long
```

#### Pre and Post incrementation
```cpp
--a; /* at first decreases the executes the rest of the code */
a--: /* at first executes the code then decreases the value inside it */
```

#### cin and cout vs scanf and printf
```cpp

    #include <bits/stdc++.h>

    /* #define desync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)  */

    using namespace std; /* let std influentiate all code */

    cin >> a;
    cout << a << endl;
    cout << a << "\n";

```