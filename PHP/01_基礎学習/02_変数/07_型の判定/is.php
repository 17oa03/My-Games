<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 型の判定 -->
  <?php
    $a = 1;
    // 論理型
    echo "a は、論理型？ : ";
    var_dump(is_bool($a));
    echo "<br>";
    // 数値、数値形式の文字列
    echo "a は、数値型・数値形式の文字列型？ : ";
    var_dump(is_numeric($a));
    echo "<br>";
    // 浮動小数点
    echo "a は、浮動小数点型？ : ";
    var_dump(is_float($a));
    echo "<br>";
    // 整数型
    echo "a は、整数型？ : ";
    var_dump(is_int($a));
    echo "<br>";
    // 文字列
    echo "a は、文字列型？ : ";
    var_dump(is_string($a));
    echo "<br>";
    // オブジェクト
    echo "a は、オブジェクト型？ : ";
    var_dump(is_object($a));
    echo "<br>";
    // 配列
    echo "a は、配列？ : ";
    var_dump(is_array($a));
    echo "<br>";
    // NULL
    echo "a は、NULL型？ : ";
    var_dump(is_null($a));
    echo "<br>";
  ?>
</body>
</html>