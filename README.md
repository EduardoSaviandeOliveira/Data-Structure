# Data-Structure

College project

## How to use

To compile and run this project use the following command in Unix-like OS
```
gcc -O2 -pipe -Wall -Wextra -std=c11 main.c List/list*.c -o main && ./main && rm main
```

To see memory leaks with Valgrind
```
gcc -g -O1 FreeCell/main.c -pipe -Wall -Wextra -std=c11 main.c List/*.c -o main && valgrind --leak-check=yes main && rm main
```
