<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>HTMLタグの変換</title>
</head>
<body>
  <?php
    // タグの削除
    $str1 = "<u><b>PHP</b></u>";
    $str2 = strip_tags($str1, "<u>");
    echo $str2, "<br>";
    // 改行文字(\r,\nなど)の前に
    $str3 = "PHP\rSOLite\n";
    $str4 = nl2br($str3, false);
    echo $str4;
    // <>などをHTML中で使える記号に置き換える
    $str5 = htmlspecialchars($str1);
    echo $str5, "<br>";
    // 記号を元に戻す
    $str6 = htmlspecialchars_decode($str5);
    echo $str6, "<br>";
  ?>
</body>
</html>

<!--
【result】
PHP
PHP
SOLite
<u><b>PHP</b></u>
PHP
-->