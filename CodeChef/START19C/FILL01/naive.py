#!/usr/bin/env python3
# from typing import *


# def solve(a: int, b: List[int], c: List[int], d: List[str]) -> Tuple[int, List[int]]:
def solve(a, b, c, d):
    pass  # TODO: edit here


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    a = int(input())
    b = [None for _ in range(a)]
    c = [None for _ in range(a)]
    d = [None for _ in range(a)]
    for i in range(a):
        b[i], c[i] = map(int, input().split())
        d[i] = input()
    n, a1 = solve(a, b, c, d)
    print(n)
    for i in range(n):
        print(a1[i])


if __name__ == '__main__':
    main()
