# Data-Structure

College project

## How to use

### Static list

To compile and run this project use the following command in Unix-like OS
```
gcc -O2 -pipe -Wall -Wextra -std=c11 main.c List/list*.c -o main && ./main && rm main
```

To see memory leaks with Valgrind
```
gcc -g -O1 FreeCell/main.c -pipe -Wall -Wextra -std=c11 main.c List/*.c -o main && valgrind --leak-check=yes main && rm main
```

### Linked List

#### Singly Linked List
```
gcc -O2 -pipe -Wall -Wextra -std=c11 main.c List/LinkedList/SinglyLinkedList.* -o main && ./main && rm main
```

#### Doubly Linked List
To see memory leaks with Valgrind
```
gcc -O2 -pipe -Wall -Wextra -std=c11 main.c List/LinkedList/DoublyLinkedList*.c -o main &&  main && rm main
```

- inicializarLista
- getUltimo
- getValor
- inserirFinalLista
- inserirOrdemLista
- mostrarLista
- retirarLista
- retirarLista
