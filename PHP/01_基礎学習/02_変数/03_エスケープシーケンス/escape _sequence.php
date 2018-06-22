<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
  <?php
    // タブ
    print "\t$a";
    // 改行
    print "<br>\n";
    // 「"(ダブルコーテーション)」の表示
    print "\"$a\"";
    // 「'(シングルコーテーション)」の表示
    print "\'$a";
    // 「\(バックスラッシュ)」の表示
    print "\\$a";
    // 「$(ダラー)」の表示
    print "\\$a";
    // 8進数表記の1文字(\101 = A)
    print "\101$a";
    // 16進数表記の1文字(\x)
    print "\x101$a";
  ?>
</body>
</html>