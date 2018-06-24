<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 定数の定義 -->
  <?php
    // 定義1
    define("GOOD_LUCK"," (・∀・)" . "b ");
    echo GOOD_LUCK;
    // 定義2(定数名の大文字、小文字の区別をしない)
    define("SMILE"," (・∀・)ﾆﾔﾆﾔ ", true);
    echo smile;
  ?>
</body>
</html>

<!--
【result】
(・∀・)b (・∀・)ﾆﾔﾆﾔ
-->