Problem Statement (Japanese) / 問題文 (日本語)
---------

整数列 $x_0, x_1, ..., x_{N - 1}$、$y_0, y_1, ..., y_{N - 1}$ が与えられます。

全ての $i$ について $f(x_i) \equiv y_i (\bmod 998244353)$ を満たす多項式 $f(x) = \sum_{i = 0}^{N - 1} c_i x^i$ を求めてください。
ただし $0 \leq c_i < 998244353$ とします。


Constraints / 制約
---------

- $1 \leq N \leq 2^{17}(=131072)$
- $0 \leq x_i, y_i < 998244353$
- $x_i \neq x_j (i \neq j)$

Input / 入力
---------

```
$N$
$x_0$ $x_1$ ... $x_{N-1}$
$y_0$ $y_1$ ... $y_{N-1}$
```

Output / 出力
---------

```
$c_0$ $c_1$ ... $c_{N -1}$
```

Sample / サンプル
---------

{{example example_00}}

{{example example_01}}
