# CSE115L: Programming Language I Lab

[![Build](https://github.com/ruddra-hassan-nsu/cse115l-lab-work/actions/workflows/build.yml/badge.svg)](https://github.com/ruddra-hassan-nsu/cse115l-lab-work/actions/workflows/build.yml)

This repository holds my lab work for **CSE115L (Programming Language I Lab), Section 6** at North South University, Fall 2026.

- **Course Faculty:** Mirza Mohammad Lutfe Elahi (MLE)
- **Department:** Electrical and Computer Engineering (ECE), North South University
- **Course book:** Hanly & Koffman, *Problem Solving and Program Design in C*, 8th edition

All programs are written in C (as required by this course).

## Structure

Each lab class has it's own folder, named `lab-NN`, with one `.c` file per task.

| Lab | Topic | Folder |
|-----|-------|--------|
| 01 | Getting Started | [`lab-01`](lab-01) |
| 02 | Program Anatomy, Data Types and Input/Output | [`lab-02`](lab-02) |
| 03 | Arithmetic, Type Casts, Precedence and Formatting | [`lab-03`](lab-03) |
| 04 | Library Functions and Top-Down Design | [`lab-04`](lab-04) |
| 05 | Functions with Arguments and Results | [`lab-05`](lab-05) |
| 06 | Conditions and the `if` Statement | [`lab-06`](lab-06) |
| 07 | Nested `if` and Multiple-Alternative Decisions | [`lab-07`](lab-07) |

Task file names follow the lab manual: `G` for guided tasks, `E` for easy, `M` for mediocre and `C` for challenging exercises.

## Building

```
gcc -Wall -Wextra lab-01/E1_1.c -o E1_1
./E1_1
```

Some labs use `math.h`, so add `-lm` when building them:

```
gcc -Wall -Wextra lab04/G4_1.c -o G4_1 -lm
```

## Contributing

This is mostly a solo repository, but suggestions are welcome. See [CONTRIBUTING.md](CONTRIBUTING.md).

## License

Released under the [MIT License](LICENSE).
