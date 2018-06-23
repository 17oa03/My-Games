<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- リテラルの要素の参照 -->
  <?php
    // 「2」が代入される
    $a = [1,2,3][1];
    echo $a, "<br>";
    // 「a」が代入される
    $b = "cat"[1];
    echo $b, "<br>";
  ?>
</body>
</html>