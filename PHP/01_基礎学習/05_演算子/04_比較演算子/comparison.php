<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 比較演算子 -->
  <?php
    $a = 10;
    $b = 10;
    // 等しい
    var_dump($a == $b);
    // 型も等しい
    var_dump($a === $b);
    // 小なり
    var_dump($a < $b);
    // 大なり
    var_dump($a > $b);
    // 以下
    var_dump($a <= $b);
    // 以上
    var_dump($a >= $b);
    // 等しくない
    var_dump($a != $b);
    // 等しくない
    var_dump($a <> $b);
    // 値、型が異なる
    var_dump($a !== $b);
  ?>
</body>
</html>

<!--
【result】
bool(true) bool(true) bool(false) bool(false) bool(true) bool(true) bool(false) bool(false) bool(false)
-->