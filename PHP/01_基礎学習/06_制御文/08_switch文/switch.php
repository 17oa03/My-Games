<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- switch文 -->
  <?php
    $a = mt_rand(1, 6);
    switch ($a){
      case 1:
        echo "大吉";
        break;
      case 2:
        echo "中吉";
        break;
      case 3:
        echo "小吉";
        break;
      case 4:
        echo "吉";
      case 5:
        echo "末吉";
        break;
      case 6:
        echo "凶";
        break;
    }
  ?>
</body>
</html>

<!--
【result】
中吉
-->