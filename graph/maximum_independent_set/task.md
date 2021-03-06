Problem Statement (Japanese) / 問題文 (日本語)
---------

$N$ 頂点 $M$ 辺の単純な無向グラフが与えられる。辺は $(u_i, v_i)$。

最大独立点集合を出力してください。

Constraints / 制約
---------

- $1 \leq N \leq 40$
- $1 \leq M \leq N(N - 1) / 2$
- $0 \leq u_i, v_i < N$
- $u_i \neq v_i$
- $(u_i, v_i) \neq (u_j, v_j)$

Input / 入力
---------

~~~
$N$ $M$
$u_0$ $v_0$
$u_1$ $v_1$
:
$u_{M - 1}$ $v_{M - 1}$
~~~

Output / 出力
---------

~~~
$X$
$p_0$ $p_1$ ... $p_{X - 1}$
~~~

$X$ は最大独立点集合のサイズ、$p_i$ は最大独立点集合

Sample / サンプル
---------

{{example example_00}}

{{example example_01}}
