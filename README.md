# Library Checker Problems

[![CircleCI](https://circleci.com/gh/yosupo06/library-checker-problems/tree/master.svg?style=svg)](https://circleci.com/gh/yosupo06/library-checker-problems/tree/master)
[![Gitter](https://badges.gitter.im/library-checker-problems/community.svg)](https://gitter.im/library-checker-problems/community?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge)

Source code of [https://judge.yosupo.jp](https://judge.yosupo.jp)

このリポジトリのコードを動かすことで、問題のテストケースを手元に生成することができます。

## Requirements

- Linux / OS X
- python3.5+
- g++ / clang++ (--std=c++14, __int128_tが使える必要あり)

### (需要と余力があれば)対応予定

- Windows
- MSVC++
- __int128_tの除去

## How to Use

```sh
cd /path/to/library-checker-problems

pip3 install toml markdown
# or pip3 install -r requirements.txt

ulimit -s unlimited # for linux (don't need for os x)

# generate testcase
./generate.py -p unionfind # generate testcases of unionfind
# or ./generate.py datastructure/unionfind/info.toml
ls datastructure/unionfind/in/ # testcases of unionfind
ls datastructure/unionfind/out/ # solutions of unionfind

./generate.py $(find . -name "info.toml" -not -path "./test/*") # generate testcases of all problems

# generate hash(For developers)
./generate.py -p unionfind --refhash # if you fix some code, you have to regenerate hashes of testcases

# verify
./generate.py -p unionfind --verify # generate testcases & run input checker & run other solutions

# generate statement
./generate.py -p unionfind --html # generate testcases & generate html
ls datastructure/unionfind/task.html # statement

# compile checker (mainly target for other project developers)
./generate.py -p unionfind --compile-checker # generate executable binary in ./datastrucure/unionfind/checker
```

## ローカルでのテスト

手元でジャッジをしたい場合, [online-judge-tools](https://github.com/kmyk/online-judge-tools) がサポートしてくれています

また、CIに組み込みたい場合は

- [How to run CI on your library for competitive programming (Japanese)](https://online-judge-tools.readthedocs.io/en/master/run-ci-on-your-library.ja.html) (同じく [online-judge-tools](https://github.com/kmyk/online-judge-tools)) が役に立つでしょう。実際にCIに組み込む例として、[library-checker-ci-example](https://github.com/yosupo06/library-checker-ci-example) を用意しています
- 簡単にCIに組み込むためのスクリプトとして [online-judge-verify-helper](https://github.com/kmyk/online-judge-verify-helper) が開発されています

## Contributing(バグ報告などしていただける方へ)

不具合(テストケースが弱い, ジャッジが異常な挙動をする, 問題文にtypoを発見, などなど)を発見したとき、報告していただけるととっても助かります。
問題の追加要望などもなんでも歓迎です。

- issueを立てる(推奨): githubにはissueというTODOやバグなどをメモっておく機能があります。上の Issues → New issueから作成できます。
- pull requestを送る(推奨): 実際に自分でコードを変更していただける場合、[CONTRIBUTING](docs/CONTRIBUTING.md) を参考にしていただけるととても助かります(熱意がある人向け)
- [gitter](https://gitter.im/library-checker-problems/community) というチャットみたいなものを用意しています。ここに書き込んでくれても大丈夫です
- [twitter](https://twitter.com/yosupot) に直接 リプライ / DM でも大丈夫です

競プロerは必ずしもgithubに慣れているとは限らず、issue / pull request を送ったことがない人も少なくはないというのを理解しています。どれだけめちゃくちゃなものを送ってきても怒ったりこのリポジトリが壊れたりすることはないので、githubの練習がてら挑戦してみるというのもアリです(頑張ってサポートします)。

## フォルダ構成

各種コンフィグファイルの仕様などは、[structure](docs/structure.md) にまとまっています

## library-checker-project

- problems: [library-checker-problems](https://github.com/yosupo06/library-checker-problems)
- judge: [library-checker-judge](https://github.com/yosupo06/library-checker-judge)
- frontend: [library-checker-frontend](https://github.com/yosupo06/library-checker-frontend)

## Thanks

checker, validatorなどに [testlib](https://github.com/MikeMirzayanov/testlib) を使用しています。
