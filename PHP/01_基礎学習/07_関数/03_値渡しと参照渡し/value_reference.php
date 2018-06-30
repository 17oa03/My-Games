<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>値渡しと参照渡し</title>
</head>
<body>
  <?php
    // 値渡し
    $a = 0;
    value($a);
    function value($b){
      $b = 100;
    }
    echo "値渡しの結果 : ", $a, "<br>";

    // 参照渡し
    reference($a);
    function reference(&$b){
      $b = 100;
    }
    echo "参照渡しの結果 : ", $a, "<br>";
  ?>
</body>
</html>

<!--
【result】
値渡しの結果 : 0
参照渡しの結果 : 100
-->