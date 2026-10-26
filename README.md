# Estrutura de Dados I — Lista 07

Exercícios de listas encadeadas da disciplina Estrutura de Dados I.

**Aluno:** Italo Antônio Costa Felisbino  
**Curso:** ADS — IFTM

## Estrutura

Cada exercício possui um executável próprio e usa o `Node<T>` externo definido
em `include/LinkedList.h`.

```text
include/
├── List.h
└── LinkedList.h
src/
├── Exer01_SortedInsertion.cpp
├── Exer02_DeleteNodeWithoutHead.cpp
├── Exer03_ReverseLinkedList.cpp
├── Exer04_MergeTwoSortedLists.cpp
└── Exer05_RemoveNthFromEnd.cpp
CMakeLists.txt
README.md
```

## Compilação e execução

No CLion, abra a pasta do projeto e execute individualmente os alvos
`exercicio01` a `exercicio05` no perfil Debug.

No terminal:

```powershell
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
.\build\Debug\exercicio01.exe
.\build\Debug\exercicio02.exe
.\build\Debug\exercicio03.exe
.\build\Debug\exercicio04.exe
.\build\Debug\exercicio05.exe
```

Os executáveis mantêm os exemplos de entrada e saída presentes nos fontes.
Os enunciados PDF não estavam disponíveis no workspace para uma conferência
adicional de formatação.

## Verificação executada

Todos os cinco alvos foram compilados em Debug com C++20 e executados com
limite de tempo. O merge de listas foi corrigido para percorrer a lista uma
única vez, evitando laço infinito.
