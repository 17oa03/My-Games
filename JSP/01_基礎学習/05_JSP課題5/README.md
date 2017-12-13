- - -
### プログラムの目標
1. ###### 「JSP」から別の「JSP」への画面転送
2. ###### データベースのテーブル(meibo)へのデータ追加
- - -
### 画面遷移

▼送信元
memberinsert.jsp

▼送信先
member4.jsp

- - -

### 備忘録

▼「Eclipse」の「DBViewer」よりデータベースを登録する際に、
「データベース定義」にて「JDBCドライバー」に「ojdbc6.jar」を追加する必要がある。

「次へ(N)>」をクリックし、

・接続文字列(S)     : jdbc:oracle:thin:@localhost:1521:XE
・接続ユーザー(N)   : test(Oracle Database 側で作成したユーザー名)
・接続パスワード(P) : test(Oracle Database 側で作成したユーザーのパスワード)
・接続スキーマ(E)   : 省略(省略すると「APP」になる)

上記の内容を設定し、テスト接続する。

「接続に成功しました」と表示されれば、
「DBViewer」の「TEST」フォルダの「TABLE」フォルダで、
データベースを参照できるようになる。

▼DBに接続するプログラムで「ClassNotFoundException」が発生する場合、
プロジェクトフォルダの「WebContent」フォルダの「WEB-INF」フォルダの「lib」フォルダに、
JDBCドライバー(ojdbc6.jar)が存在しない可能性がある、
具体的には、「Class.forName("oracle.jdbc.OracleDriver");」の部分で、
JDBCドライバーが無いので「OracleDriver」クラスが呼び出せないのが原因となる。

「lib」フォルダにJDBCドライバー(ojdbc6.jar)をコピーして貼り付けしてやれば解決する。
