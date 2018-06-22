<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- ヒアドキュメント -->
  <?php
    // ラベル名(EOM)は何でも良い、終端文字の前後にスペースが入るとエラーが発生するので注意。
    $a = <<< EOM
      Hello
      php!\n
EOM;
      print "$a";
  ?>
</body>
</html>