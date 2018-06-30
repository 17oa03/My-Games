<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>コールバック関数</title>
</head>
<body>
  <?php
    callfunc("Hello");

    // 呼び出される関数
    function Hello() {
      echo "Hello";
    }

    function callfunc(callable $func){
      $func();
      echo " world!";
    }
  ?>
</body>
</html>

<!--
【result】
Hello world!
-->