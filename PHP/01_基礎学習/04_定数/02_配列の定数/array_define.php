<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 配列の定数 -->
  <?php
    define("GOOD_LUCK", ["aaa", "bbb", "ccc"]);
    var_dump(GOOD_LUCK);
  ?>
</body>
</html>

<!--
【result】
array(3) { [0]=> string(3) "aaa" [1]=> string(3) "bbb" [2]=> string(3) "ccc" }
-->