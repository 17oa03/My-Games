<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- エラー制御演算子 -->
  <?php
    $a = 100; $b = 0;
    // ゼロ除算
    print($a / $b);
    print "<br>----------<br>";
    @print($a / $b);
  ?>
</body>
</html>

<!--
【result】
Warning: Division by zero in C:\xampp\htdocs\spaceship_operator.php on line 13
INF
----------
INF
-->