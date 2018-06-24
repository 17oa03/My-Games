<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- インクリメント・デクリメント演算子 -->
  <?php
    $a = 10;
    echo "後置", $a++, "<br>";
    echo "前置", ++$a, "<br>";
    $b = 10;
    echo "後置", $b--, "<br>";
    echo "前置", --$b, "<br>";
  ?>
</body>
</html>

<!--
【result】
後置10
前置12
後置10
前置8
-->