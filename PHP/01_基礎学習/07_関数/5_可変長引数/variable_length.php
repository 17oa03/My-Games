<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>可変長引数</title>
</head>
<body>
  <?php
    echo "20 と 30 の平均値は ". average(20, 30). "<br>";
    echo "25, 32, 50, 81 の平均値は ". average(25, 32, 50, 81). "<br>";
    function average(...$a){
      $sum = 0;
      foreach($a as $n)
        $sum += $n;
      return $sum / count($a);
    }
  ?>
</body>
</html>

<!--
【result】
20 と 30 の平均値は 25
25, 32, 50, 81 の平均値は 47
-->