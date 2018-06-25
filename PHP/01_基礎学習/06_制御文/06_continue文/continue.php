<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- continue文 -->
  <?php
    $a = 1;
    for ($i = 0; $i < 4; $i++) {
      if ($i + $a == 2)
        continue;
      echo "$i + $a = ". ($i + $a). "<br>";
    }
  ?>
</body>
</html>

<!--
【result】
0 + 1 = 1
2 + 1 = 3
3 + 1 = 4
-->