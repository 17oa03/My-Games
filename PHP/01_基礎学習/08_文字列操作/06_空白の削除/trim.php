<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>空白の削除</title>
</head>
<body>
  <?php
    $str1 = " Hello World! ";
    echo $str1. "<br>";
    // 先頭と末尾の空白を削除
    $str2 = trim($str1);
    echo $str2. "<br>";
    // 先頭の空白を削除
    $str3 = ltrim($str1);
    echo $str3. "<br>";
    // 末尾の空白を削除
    $str4 = rtrim($str1);
    echo $str4. "<br>";
    // 末尾の空白を削除
    $str5 = chop($str1);
    echo $str5. "<br>";
  ?>
</body>
</html>

<!--
【result】
Hello World! 
Hello World!
Hello World! 
Hello World!
Hello World!
-->