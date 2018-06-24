<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 実行演算子 -->
  <?php
    // 現在時刻を表示するコマンドを実行
    $a = `time/T`;
    print("<pre>".$a."</pre>");
  ?>
</body>
</html>

<!--
【result】
19:43
-->