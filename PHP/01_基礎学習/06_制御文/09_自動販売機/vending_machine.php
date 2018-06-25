<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>自動販売機</title>
</head>
<body>
  <?php
    $money = $_POST['money'];
    $change = $money - 120;
    $coin = [500, 100, 50, 10, 0];

    if ($change < 0)
      echo "<p>お金が足りません。</p>";
    else if ($money > 1000)
      echo "<p>1000円までのお金を入れてください。</p>";
    else if ($change == 0)
      echo "<p>ありがとうございました。お釣りはありません。</p>";
    else {
      echo "<p>ありがとうございました。おつりは $change 円です。</p>";
      $i = 0;
      while ($coin[$i] > 0){
        echo $coin[$i]. "円玉". (int)($change / $coin[$i]). "枚<br>";
        $change %= $coin[$i];
        $i++;
      }
    }
  ?>
</body>
</html>

<!--
【result】
ありがとうございました。おつりは 880 円です。

500円玉1枚
100円玉3枚
50円玉1枚
10円玉3枚
-->