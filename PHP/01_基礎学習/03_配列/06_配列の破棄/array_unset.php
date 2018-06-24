<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 配列の破棄 -->
  <?php
    $a = array("a", "b", "c");
    // 2番目の要素の破棄
    unset($a[1]);

    $b = array("a", "b", "c");
    // 配列の破棄
    unset($b);
  ?>
</body>
</html>