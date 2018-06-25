<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- break文 -->
  <?php
    $a = 5;
    for ($i = 0; $i < 5; $i++) {
      if ($a - $i == 0)
        break;
      echo "$a - $i = ". ($a - $i). "<br>";
    }
  ?>
</body>
</html>

<!--
【result】
5 - 0 = 5
5 - 1 = 4
5 - 2 = 3
5 - 3 = 2
5 - 4 = 1
-->