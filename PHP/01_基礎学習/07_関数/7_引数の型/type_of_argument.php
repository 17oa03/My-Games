<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>引数の型</title>
</head>
<body>
  <?php
    echo add(1, 2), "<br>";
    echo add(1.5, 2.9), "<br>";
    echo add("2", "5"), "<br>";
    echo add("A", "B"), "<br>";
    /*
    厳密に型変換した場合は、
    DOCTYPE宣言よりも前に、
    declare(static_types=1);
    */

    /*
    int : 整数型
    float : 実数型 : PHP 7.0.0
    string : 文字列型
    bool : 論理型
    callable : コールバック関数 : PHP 5.4.0
    array : 配列 : PHP 5.1.0
    self : 関数の所属するクラス
    クラス名 : PHP 5.0.0
    インタフェース名
    */
    function add(int $a, int $b) {
      $c = $a + $b;
      return $c;
    }
    
  ?>
</body>
</html>

<!--
【result】
3
3
7

Fatal error: Uncaught TypeError: Argument 1 passed to add() must be of the type integer, string given, called in C:\xampp\htdocs\type_of_argument.php on line 13 and defined in C:\xampp\htdocs\type_of_argument.php:31
Stack trace: #0 C:\xampp\htdocs\type_of_argument.php(13): add('A', 'B') #1 {main} thrown in C:\xampp\htdocs\type_of_argument.php on line 31
-->