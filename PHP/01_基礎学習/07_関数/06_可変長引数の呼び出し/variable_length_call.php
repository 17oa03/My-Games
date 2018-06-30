<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>可変長引数の呼び出し</title>
</head>
<body>
  <?php
    function reading($who, $what){
      echo "$who は、$what を読んでいます。<br>";
    }
    reading("太郎", "ジャンプ");
    $book = ["次郎", "サンデー"];
    reading(...$book);
  ?>
</body>
</html>

<!--
【result】
太郎 は、ジャンプ を読んでいます。
次郎 は、サンデー を読んでいます。
-->