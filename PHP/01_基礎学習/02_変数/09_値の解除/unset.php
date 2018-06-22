<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 値の解除 -->
  <?php
    $a = 1;
    var_dump(empty($a));
    echo "<br>";
    unset($a);
    var_dump(empty($a));
  ?>
</body>
</html>