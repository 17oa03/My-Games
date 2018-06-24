<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 論理演算子 -->
  <?php
    $a = 10;
    $b = 100;
    // かつ
    echo $a && $b, "<br>";
    echo $a and $b, "<br>";
    // または
    echo $a || $b, "<br>";
    echo $a or $b, "<br>";
    // ～ではない
    echo !($a === $b), "<br>";
  ?>
</body>
</html>

<!--
【result】
1
1
1
1
1
-->