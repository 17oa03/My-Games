<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>func_get_args()関数</title>
</head>
<body>
  <?php
    print_arg_val(1, 2, 3, 4);

    function print_arg_val() {
      $a = func_get_args();
      foreach ($a as $b)
        echo $b, "<br>";
    }
  ?>
</body>
</html>

<!--
【result】
1
2
3
4
-->