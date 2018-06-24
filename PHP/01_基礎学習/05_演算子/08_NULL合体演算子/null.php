<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- NULL合体演算子 -->
  <?php
    $a = null;
    // 変数$aがNULLの場合、「0」を代入
    $b = $a ?? 0;
    echo $b;
  ?>
</body>
</html>

<!--
【result】
0
-->