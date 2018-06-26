<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>ユーザー定義関数</title>
</head>
<body>
  <?php
    $a = 5; $b = 5;
    echo add($a, $b);

    // 関数の定義
    function add($a, $b) {
      $x = $a + $b;
      return $x;
    }
  ?>
</body>
</html>

<!--
【result】
10
-->