<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 変数の状態確認 -->
  <?php
    // isset()関数、変数が存在しない、「NULL」の場合は「false」を返す
    echo "a は、存在しない？ : ";
    var_dump(isset($a));
    // 「a」が有る時は「a」をセット、無い時は「1」をセット
    $b = isset($_GET['a']) ? $_GET['a'] : 1;
    // empty()関数、変数が存在しない、値が「0」、「false」の場合に「true」を返す
    echo "<br>a は、存在しない？または、「0」か「false」？ : ";
    var_dump(empty($a));
    echo "<br>b は、存在しない？または、「0」か「false」？ : ";
    var_dump(empty($b));
  ?>
</body>
</html>