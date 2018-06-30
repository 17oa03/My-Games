<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>大文字・小文字置換</title>
</head>
<body>
  <?php
    $str1 = "Hello World!";
    // 小文字変換
    $str2 = strtolower($str1);
    echo $str2. "<br>";
    // 大文字変換
    $str3 = strtoupper($str1);
    echo $str3. "<br>";
  ?>
</body>
</html>

<!--
【result】
hello world!
HELLO WORLD!
-->