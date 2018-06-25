<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- while文 -->
  <?php
  $a = 0;
  while ($a++ < 5)
    echo $a, "<br>";
  
  // do while文
  $j = $i = 0;
  do
    $j += ++$i;
  while ($i < 10);
    echo "1 から $i までの和は $j です。";
  ?>
</body>
</html>

<!--
【result】
1
2
3
4
5
1 から 10 までの和は 55 です。
-->