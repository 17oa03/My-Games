<!doctype html>

<html lang="ja">
<head>
  <meta charset="utf-8">
  <title>hello</title>
</head>
<body>
<!-- 定義済みの定数 -->
  <?php
    // スクリプトの中で利用可能な全ての変数に対してのリファレンスを取得
    var_dump($GLOBALS);
    // Webサーバーや実行中のスクリプトに関する情報を取得
    var_dump($_SERVER);
    // HTTPプロトコルのGETメソッドにより、フォームからスクリプトに送信される値を取得
    var_dump($_GET);
    // HTTPプロトコルのPOSTメソッドにより、フォームからスクリプトに送信される値を取得
    var_dump($_POST);
    // HTTP Cookieにより、スクリプトに送信されるクッキーを取得
    var_dump($_COOKIE);
    // フォームのHTTP POSTファイルアップロードにより、スクリプトに送信される情報を取得
    var_dump($_FILES);
    // $_GET、$_POST、$_COOKIE、$_FILESの値を取得
    var_dump($_REQUEST);
    // スクリプトのセッション変数に関する情報を取得
    var_dump($_SESSION);
  ?>
</body>
</html>

<!--
【result】
-->