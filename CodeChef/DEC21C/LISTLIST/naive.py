#!/usr/bin/env python3
# from typing import *


# def solve(a: int, b: List[int], c: List[List[int]]) -> Tuple[int, int, int]:
def solve(a, b, c):
    pass  # TODO: edit here


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    a = int(next(tokens))
    b = [None for _ in range(a)]
    c = [[None for _ in range(b_i)] for _ in range(a)]
    for i in range(a):
        b[i] = int(next(tokens))
        for j in range(b_i):
            c[i][j] = int(next(tokens))
    assert next(tokens, None) is None
    g, h, m = solve(a, b, c)
    print(g)
    print(h)
    print(m)


if __name__ == '__main__':
    main()
