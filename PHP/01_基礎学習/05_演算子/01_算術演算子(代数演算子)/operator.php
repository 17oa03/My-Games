<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 算術演算子 -->
  <?php
    $b = 5;
    $c = 2;
    // 加算
    $a = $b + $c;
    echo $a, "<br>";
    // 減算
    $a = $b - $c;
    echo $a, "<br>";
    // 乗算
    $a = $b * $c;
    echo $a, "<br>";
    // 除算
    $a = $b / $c;
    echo $a, "<br>";
    // 剰余
    $a = $b % $c;
    echo $a, "<br>";
    // 冪乗
    $a = $b ** $c;
    echo $a, "<br>";
  ?>
</body>
</html>

<!--
【result】
7
3
10
2.5
1
25
-->