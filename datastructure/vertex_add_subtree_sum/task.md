Problem Statement (Japanese) / 問題文 (日本語)
---------

頂点 $0$ を根とする $N$ 頂点の木が与えられる。頂点 $i$ の値は $a_i$ で、親は $p_i$。$Q$ 個のクエリが飛んでくるので処理。

- `0 $u$ $x$`: $a_u = a_u + x$
- `1 $u$`: $u$ を根とする部分木の値の総和を出力

Constraints / 制約
---------

- $1 \leq N, Q \leq 500,000$
- $0 \leq p_i < i$
- $0 \leq a_i, x \leq 10^9$

Input / 入力
---------

~~~
$N$ $Q$
$a_0$ $a_1$ ... $a_{N - 1}$
$p_1$ $p_2$ ... $p_{N - 1}$
$\textrm{Query}_0$
$\textrm{Query}_1$
:
$\textrm{Query}_{Q - 1}$
~~~

{{example example_00}}
