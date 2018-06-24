<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- リファレンス -->
  <?php
    // 変数aと変数bの値が連動する
    $a = 100;
    $b = &$a;
    $b = 200;
    echo $a, "<br>", $b, "<br>";
    $a = 300;
    echo $a, "<br>", $b, "<br>";
  ?>
</body>
</html>

<!--
【result】
200
200
300
300
-->