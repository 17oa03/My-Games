<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>文字列置換</title>
</head>
<body>
  <?php
    $str1 = "There is no pen. I want a pencil.";
    $str2 = preg_replace("/pen/", "pencil", $str1);
    echo $str2, "<br>";
    $str3 = preg_replace("/pen(cil)?/", "pencil", $str1);
    echo $str3, "<br>";
  ?>
</body>
</html>

<!--
【result】
There is no pencil. I want a pencilcil.
There is no pencil. I want a pencil.
-->