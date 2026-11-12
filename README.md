# Estrutura de Dados I — Lista 07

Coleção de exercícios de algoritmos sobre **listas simplesmente encadeadas**, desenvolvida em C++20 na disciplina Estrutura de Dados I.

Cada exercício possui seu próprio arquivo-fonte e alvo de compilação, permitindo estudar e executar os problemas de forma independente.

## Exercícios

| Arquivo | Problema |
|---|---|
| `Exer01_SortedInsertion.cpp` | Inserção ordenada em lista encadeada |
| `Exer02_DeleteNodeWithoutHead.cpp` | Exclusão de um nó sem receber a referência para o início da lista |
| `Exer03_ReverseLinkedList.cpp` | Inversão de uma lista encadeada |
| `Exer04_MergeTwoSortedLists.cpp` | Intercalação de duas listas ordenadas |
| `Exer05_RemoveNthFromEnd.cpp` | Remoção do n-ésimo elemento a partir do fim |

## Organização

```text
.
├── include/
│   ├── List.h
│   └── LinkedList.h
├── src/
│   ├── Exer01_SortedInsertion.cpp
│   ├── Exer02_DeleteNodeWithoutHead.cpp
│   ├── Exer03_ReverseLinkedList.cpp
│   ├── Exer04_MergeTwoSortedLists.cpp
│   └── Exer05_RemoveNthFromEnd.cpp
├── CMakeLists.txt
└── README.md
```

A estrutura auxiliar `Node<T>` é definida em `include/LinkedList.h` e utilizada pelos exercícios.

## Tecnologias e conceitos

- C++20
- Templates e estruturas encadeadas
- Ponteiros e manipulação de nós
- Algoritmos de inserção, remoção, inversão e intercalação
- CMake e CLion

## Compilação

Com CMake e um compilador compatível com C++20 instalados:

```powershell
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
```

O projeto define os alvos `exercicio01` a `exercicio05`. Para executar um exercício no Windows, por exemplo:

```powershell
.\build\Debug\exercicio01.exe
```

No CLion, abra a pasta do projeto e selecione o alvo desejado no perfil Debug.

## Objetivo de aprendizagem

Praticar a manipulação de listas encadeadas e desenvolver raciocínio sobre casos de borda, referências entre nós e percursos eficientes.
 
## Contexto acadêmico

Tecnologia em Análise e Desenvolvimento de Sistemas (ADS) — Instituto Federal do Triângulo Mineiro (IFTM).
