<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>func_num_args()関数</title>
</head>
<body>
  <?php
    print_arg_val("A", "B", "C");

    function print_arg_val() {
      $a = func_num_args();
      for ($i = 0; $i < $a; $i++) {
        $b = func_get_arg($i);
        echo $b, "<br>";
      }
    }
  ?>
</body>
</html>

<!--
【result】
Hello world!

Hello world!
-->