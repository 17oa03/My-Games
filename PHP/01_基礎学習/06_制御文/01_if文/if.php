<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- if文 -->
  <?php
  $a = 10;
  print "$a は、";
  if ($a >= 100)
    print "100以上";
  else
    print "100未満";
  print "の値です。<br>";
  
  // 複数の条件
  $b = 1000;
  print "$b は、";
  if (0 <= $b && $b <= 9)
    print "1桁";
  else if (10 <= $b && $b <= 99)
    print "2桁";
  else if (100 <= $b && $b <= 999)
    print "3桁";
  else
    print "4桁以上";
  print "の値です。<br>";

  // ネスト
  $c = 100;
  print "$c 点は、";
  if ($c >= 60) {
    if ($c == 100)
      print "満点です。<br>";
    print "60点以上、合格です。<br>";
  } else
    "60点未満、不合格です。";
  ?>
</body>
</html>

<!--
【result】
10 は、100未満の値です。
1000 は、4桁以上の値です。
100 点は、満点です。
60点以上、合格です。
-->