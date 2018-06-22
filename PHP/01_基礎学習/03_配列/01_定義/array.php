<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 配列の定義 -->
  <?php
    // 定義1
    $a = array(1, 2, 3);
    echo $a[0], $a[1], $a[2], "<br>";
    // 定義2
    $b = [1, 2, 3];
    echo $b[0], $b[1], $b[2], "<br>";
    // 定義3
    $c = array(0 => 1, 1 => 2, 2=> 3);
    echo $c[0], $c[1], $c[2], "<br>";
    // 定義4
    $d = array(true, 'いぬ', 500);
    echo $d[0], $d[1], $d[2], "<br>";
  ?>
</body>
</html>