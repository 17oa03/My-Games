<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
  <?php
    // 整数(integer)
    $a = 100;
    $b = 2147483645;
    $c = -2147483645;
    // 浮動小数点数(float, double)
    $d = 0.12345;
    // 論理型(boolean)
    $e = true;
    $f = false;
    // NULL型
    $g = NULL;
  
    // 型の出力
    var_dump($a);
    var_dump($b);
    var_dump($c);
    var_dump($d);
    var_dump($e);
    var_dump($f);
    var_dump($g);
  ?>
</body>
</html>