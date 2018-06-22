<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 型のキャスト -->
  <?php
    $a = 1;
    $a = $a + 0.5;
    $b = (int)$a;
    echo $b, "<br>";
    // スカラー型(論理型、数値型、文字列)の変換
    $c = true;
    $d = false;
    $e = 1000;
    // true->1 false->空文字 整数->文字列
    $f = strval($c);
    $g = strval($d);
    $h = strval($e);
    echo $f, "<br>", $g, "<br>", $h; 
  ?>
</body>
</html>