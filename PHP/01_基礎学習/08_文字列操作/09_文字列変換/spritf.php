<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>文字列変換</title>
</head>
<body>
  <?php
    $a = 123.4;
    // 10進数の整数を作成
    $b = sprintf("%d", $a);
    echo $b, "<br>";
    // 浮動小数点数を作成
    $d = sprintf("%f", $a);
    echo $d, "<br>";
    // 文字列の作成
    $e = sprintf("%s", $a);
    echo $e, "<br>";
  ?>
</body>
</html>

<!--
【result】
123
123.400000
123.4
-->