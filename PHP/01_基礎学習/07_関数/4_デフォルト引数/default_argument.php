<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>デフォルト引数</title>
</head>
<body>
  <?php
    // 値渡し
    $a = 0;
    echo value($a), "<br>";
    echo value(), "<br>";
    function value($b = 100){
      return $b;
    }
  ?>
</body>
</html>

<!--
【result】
0
100
-->