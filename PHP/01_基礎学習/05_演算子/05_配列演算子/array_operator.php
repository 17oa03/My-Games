<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 配列演算子 -->
  <?php
    $a = array(1, 2);
    $b = array(3, 4, 5);
    // 配列の結合
    $c = $a + $b;
    var_dump($c);
  ?>
</body>
</html>

<!--
【result】
array(3) { [0]=> int(1) [1]=> int(2) [2]=> int(5) }
-->