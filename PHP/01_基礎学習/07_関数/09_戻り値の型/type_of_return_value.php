<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>戻り値の型</title>
</head>
<body>
  <?php
    echo add(1, 2), "<br>";
    echo add(1.5, 2.8), "<br>";

    function add($a, $b) : int {
      $c = $a + $b;
      return $c;
    }
  ?>
</body>
</html>

<!--
【result】
3
4
-->