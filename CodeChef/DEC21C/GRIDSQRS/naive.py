#!/usr/bin/env python3
# from typing import *


# def solve(a: str, b: List[str], c: str, d: List[str]) -> Tuple[int, int]:
def solve(a, b, c, d):
    pass  # TODO: edit here


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = input()
    b = [None for _ in range(a)]
    for i in range(a):
        b[i] = input()
    c = input()
    d = [None for _ in range(c)]
    for i in range(c):
        d[i] = input()
    a, b = solve(a, b, c, d)
    print(a)
    print(b)


if __name__ == '__main__':
    main()