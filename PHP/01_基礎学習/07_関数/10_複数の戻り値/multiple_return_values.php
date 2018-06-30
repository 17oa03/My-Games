<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>複数の戻り値</title>
</head>
<body>
  <?php
    list($begin, $end) = getCharRange("Shiori");
    echo "Shiori の中で i が出てくるのは、";
    echo "$begin 文字目から $end 文字目まで。";

    function getCharRange($a) {
      $pos1 = $pos2 = -1;
      // strlen()関数は文字列の長さを返す
      for ($i = 0; $i < strlen($a); $i++) {
        if ($a[$i] == "i") {
          if ($pos1 < 0)
            $pos1 = $i;
        }
        // 添字に+1をして○文字目に合わせる
        $pos2 = $i;
      }
      // 配列や連想配列を使えば複数の値を返せる
      return array($pos1 + 1, $pos2 + 1);
    }
  ?>
</body>
</html>

<!--
【result】
Shiori の中で i が出てくるのは、3 文字目から 6 文字目まで。
-->