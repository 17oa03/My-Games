<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>文字列置換</title>
</head>
<body>
  <?php
    $str = "2006 07/01";
    list($year, $month, $day) = preg_split("/[ \/]/", $str);
    echo $year. "年";
    echo $month. "月";
    echo $day. "日";
  ?>
</body>
</html>

<!--
【result】
2006年07月01日
-->