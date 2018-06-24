<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 配列の差の取得 -->
  <?php
    $a = array(1, 2, 3);
    $b = array(1, 3, 5);
    // 配列aにあって配列bにない要素を返す
    var_dump(array_diff($a, $b));
  ?>
</body>
</html>