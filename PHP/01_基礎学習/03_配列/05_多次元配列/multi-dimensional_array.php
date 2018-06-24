<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 多次元配列 -->
  <?php
    // 定義1
    $a = array(1, 2, 3);
    $b = array(4, 5, 6);
    $c = array($a, $b);
    echo $c[0][0], $c[0][1], $c[0][2], "<br>";
    echo $c[1][0], $c[1][1], $c[1][2], "<br>";
    // 定義2
    $d = array([1, 2, 3], [4, 5, 6]);
    echo $d[0][0], $d[0][1], $d[0][2], "<br>";
    echo $d[1][0], $d[1][1], $d[1][2], "<br>";
  ?>
</body>
</html>