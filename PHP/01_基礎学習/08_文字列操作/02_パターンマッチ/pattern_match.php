<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>パターンマッチ</title>
</head>
<body>
  <?php
    $str = "Let's syudy PHP!";
    preg_match("/[A-Z]{3}/", $str, $a);
    echo $a[0], "<br>";
    // i を最後に記述すると、小文字、大文字を区別しない。
    preg_match("/^[a-z]/i", $str, $b);
    echo $b[0], "<br>";
    $str = "I love cat and dog.";
    preg_match("/love (.+) and (.+)\./", $str, $c);
    echo $c[0], "<br>", $c[1], "<br>", $c[2], "<br>";

    // 郵便番号の判定
    $zip_code = "098-6758";
    if (preg_match("/^([0-9]{3})-([0-9]{4})/", $zip_code, $d))
      echo "正しい郵便番号です。";
    else
      echo "形式が正しくありません。";
  ?>
</body>
</html>

<!--
【result】
PHP
L
love cat and dog.
cat
dog
正しい郵便番号です。
-->