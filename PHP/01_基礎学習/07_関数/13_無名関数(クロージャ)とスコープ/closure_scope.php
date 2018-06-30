<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>変数のスコープ</title>
</head>
<body>
  <?php
    // 無名関数の定義
    $a = function() { echo "Hello world!<br>"; };
    // 無名関数の呼び出し
    $a();

    $b = "Hello "; $c = "world!";

    function func1($p) {
      // 関数の外側の変数を参照できる
      global $b;
    }
    func1($b);

    echo "<br>";

    // use で呼び出し元の変数を使える
    $func2 = function($p) use ($c) {
      echo $p, $c;
    };
    $func2($b);
  ?>
</body>
</html>

<!--
【result】
Hello world!

Hello world!
-->