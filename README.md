# Data Structures and Algorithms

A collection of small C programs written for college data structures and algorithms coursework. Each program focuses on a specific concept and can be compiled and run independently.

## Programs

| Program | Description |
| --- | --- |
| [`linear_queue.c`](linear_queue.c) | Implements a linear queue using an array. Demonstrates insertion at the rear, deletion from the front, and displaying the queue. |
| [`circular_queue.c`](circular_queue.c) | Implements a circular queue using an array of size 5. |
| [`deque.c`](deque.c) | Implements a double-ended queue using a circular array, with insertion and deletion at both ends. |
| [`priority_queue.c`](priority_queue.c) | Implements an array-based priority queue. A smaller priority number represents a higher priority. |

## Compile and Run

Compile a program with GCC, then run the resulting executable. For example:

```sh
gcc -std=c11 -Wall -Wextra -o linear_queue linear_queue.c
./linear_queue
```

Each program contains its own `main` function, so compile and run one at a time. For example:

```sh
gcc -std=c11 -Wall -Wextra -o circular_queue circular_queue.c
./circular_queue
```

The examples display `30 40` for the linear queue, `30 40 50 60` for the circular queue, and `10` for the deque. The priority queue removes `20` (priority 1), then displays `10` (priority 2) and `30` (priority 3).

## Requirements

- A C compiler such as GCC or Clang
- A terminal or command prompt

## License

This repository is intended for learning and coursework. No license has been specified.
