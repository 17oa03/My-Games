<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 階層指定 -->
  <?php
    for ($i = 0; $i < 3; $i++) {
      for ($j = 0; $j < 3; $j++) {
        if ($i + $j == 1)
          break 2;
        echo "$i + $j = ". ($i + $j). "<br>";
      } 
    }
  ?>
</body>
</html>

<!--
【result】
0 + 0 = 0
-->