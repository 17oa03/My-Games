<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>文字列の分割・連結・置換</title>
</head>
<body>
  <?php
    /*
    デリミタ(区切り文字)が1種類の場合、
    正規表現無しで文字列を分割できる。
    */
    $str1 = "Hello|World|!";
    $array = explode("|", $str1);
    echo $array[0], "<br>", $array[1], "<br>", $array[2], "<br>";
    // 文字列の連結1
    $str2 = implode(",", $array);
    echo $str2, "<br>";
    // 文字列の連結2
    $str3 = join("/", $array);
    echo $str3, "<br>";
    // 文字列の置換1
    $str4 = str_replace("Hello", "World", $str1);
    echo $str4, "<br>";
    // 文字列の置換2
    $str5 = ["World", "!"];
    $str6 = ["Good", "Nice"];
    $str7 = str_replace($str5, $str6, $str1);
    echo $str7;
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