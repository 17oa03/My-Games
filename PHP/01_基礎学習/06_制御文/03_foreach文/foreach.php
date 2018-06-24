<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- foreach文 -->
  <?php
  $a = [1, 2, 3];
  // 配列の要素の出力
  foreach ($a as $b)
    echo $b, "<br>";
  
  // 配列の添字の出力
  foreach ($a as $key => $b)
    echo "添字[$key]には、[$b]が格納されています。<br>";
  ?>
</body>
</html>

<!--
【result】
1
2
3
添字[0]には、[1]が格納されています。
添字[1]には、[2]が格納されています。
添字[2]には、[3]が格納されています。
-->