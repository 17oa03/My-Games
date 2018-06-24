<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 配列の要素の追加 -->
  <?php
    // 末尾に「4」と「5」の要素が追加される
    $a = array(1, 2, 3);
    array_push($a, 4, 5);
    var_dump($a);
    echo "<br>";
    // 添字が文字列の場合、添字0から追加される
    $b = array("A"=>1, "B"=>2, "C"=>3);
    array_push($b, 4, 5);
    var_dump($b);
  ?>
</body>
</html>

<!--
【result】
array(5) { [0]=> int(1) [1]=> int(2) [2]=> int(3) [3]=> int(4) [4]=> int(5) } 
array(5) { ["A"]=> int(1) ["B"]=> int(2) ["C"]=> int(3) [0]=> int(4) [1]=> int(5) }
-->