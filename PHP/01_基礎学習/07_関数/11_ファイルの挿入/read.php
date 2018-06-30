<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>ファイルの挿入</title>
</head>
<body>
  <?php
    // リクワイヤは、エラー時に処理を中止する
    require "insert.php";
    echo "require で insert.php の挿入...$a<br>";

    // _once は初回だけ読込む
    require_once "insert.php";
    echo "require_once で insert.php の挿入...$a<br>";

    // インクルードは、エラー時に処理を続行する
    include "insert.php";
    echo "include で insert.php の挿入...$a<br>";

    include_once "insert.php";
    echo "include_once で insert.php の挿入...$a<br>";
  ?>
</body>
</html>

<!--
【result】
require で insert.php の挿入...これは「insert.php」です。
require_once で insert.php の挿入...これは「insert.php」です。
include で insert.php の挿入...これは「insert.php」です。
include_once で insert.php の挿入...これは「insert.php」です。
-->