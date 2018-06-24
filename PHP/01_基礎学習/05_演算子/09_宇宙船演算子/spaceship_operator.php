<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 宇宙船演算子 -->
  <?php
    $a = [100, 200];
    $b = $a[0] <=> $a[1];
    // a<b(-1), a=b(0), a>b(1)
    echo $b;
  ?>
</body>
</html>

<!--
【result】
-1
-->