Traceback (most recent call last):
  File "/home/manmeet/.local/lib/python3.10/site-packages/onlinejudge_template/generator/hook.py", line 28, in _execute_hook
    return subprocess.check_output(data['hook'], input=rendered, stderr=sys.stderr)
  File "/usr/lib/python3.10/subprocess.py", line 420, in check_output
    return run(*popenargs, stdout=PIPE, timeout=timeout, check=True,
  File "/usr/lib/python3.10/subprocess.py", line 524, in run
    raise CalledProcessError(retcode, process.args,
subprocess.CalledProcessError: Command '['yapf', '--style', '{BASED_ON_STYLE: google, COLUMN_LIMIT: 9999}']' returned non-zero exit status 1.


Generated code (before processed by the filter):
#!/usr/bin/env python3
# from typing import *



# def solve(testcases: str, a: List[str], b: List[str], c: List[List[str]], d: List[List[List[str]]]) -> Tuple[str, List[str]]:
def solve(testcases, a, b, c, d):
    pass  # TODO: edit here

# generated by oj-template v4.8.1 (https://github.com/online-judge-tools/template-generator)
def main():
    import sys
    tokens = iter(sys.stdin.read().split())
    testcases = next(tokens)
    a = [None for _ in range(testcases)]
    b = [None for _ in range(testcases)]
    c = [[None for _ in range(a_i)] for _ in range(testcases)]
    d = [[[None for _ in range(j_i)] for _ in range(a_i)] for _ in range(testcases)]
    for i in range(testcases):
        a[i] = next(tokens)
        b[i] = next(tokens)
        for j in range(a_i):
            c[i][j] = next(tokens)
            for k in range(j_i):
                d[i][j][k] = next(tokens)
    assert next(tokens, None) is None
    a, b = solve(testcases, a, b, c, d)
    print(a)
    for i in range(a):
        print(b[i])

if __name__ == '__main__':
    main()