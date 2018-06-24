<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- const(定数の値として、式や配列を利用できる) -->
  <?php
    const NUM1 = 100;
    const NUM2 = 100 + 100;
    const NUM3 = [100, 100];
    var_dump(NUM1);
    var_dump(NUM2);
    var_dump(NUM3[0]);
  ?>
</body>
</html>

<!--
【result】
int(100) int(200) int(100)
-->