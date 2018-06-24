<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 複合演算子 -->
  <?php
    $a = 5;
    $b = 5;
    // 加算
    $a += $b;
    echo $a, "<br>";
    // 減算
    $a -= $b;
    echo $a, "<br>";
    // 乗算
    $a *= $b;
    echo $a, "<br>";
    // 除算
    $a /= $b;
    echo $a, "<br>";
    // 剰余
    $a %= $b;
    echo $a, "<br>";
    // 冪乗
    $a **= $b;
    echo $a, "<br>";
  ?>
</body>
</html>

<!--
【result】
10
5
25
5
0
0
-->