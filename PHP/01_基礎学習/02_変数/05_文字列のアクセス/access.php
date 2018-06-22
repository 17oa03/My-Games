<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 文字のアクセス -->
  <?php
    $a = "dog";
    $b = $a[0];
    $c = $a[1];
    $d = $a[2];
    $a[0] = $d;
    $a[2] = $b;
    echo $b, $c, $d, " or ", $a;
  ?>
</body>
</html>