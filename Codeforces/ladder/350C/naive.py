#!/usr/bin/env python3
# from typing import *


# def solve(n: int, a: List[int], b: List[int]) -> Any:
def solve(n, a, b):
    pass  # TODO: edit here


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    n = int(input())
    a = [None for _ in range(n)]
    b = [None for _ in range(n)]
    for i in range(n):
        a[i], b[i] = map(int, input().split())
    ans = solve(n, a, b)
    print(ans)  # TODO: edit here


if __name__ == '__main__':
    main()
