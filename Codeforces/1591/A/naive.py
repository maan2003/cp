#!/usr/bin/env python3
# from typing import *


# def solve(testcases: int, a: List[int], b: List[List[int]]) -> Any:
def solve(testcases, a, b):
    pass  # TODO: edit here


# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    testcases = int(next(tokens))
    a = [None for _ in range(testcases)]
    b = [[None for _ in range(a_i)] for _ in range(testcases)]
    for i in range(testcases):
        a[i] = int(next(tokens))
        for j in range(a_i):
            b[i][j] = int(next(tokens))
    assert next(tokens, None) is None
    ans = solve(testcases, a, b)
    print(ans)  # TODO: edit here


if __name__ == '__main__':
    main()
