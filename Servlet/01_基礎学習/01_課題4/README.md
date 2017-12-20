- - -
### プログラムの目標
1. ###### 「Servlet」の作成
2. ###### 「Servlet」をサーバ上で実行する
- - -
### ファイル

▼Servlet  
MemberServlet.java

- - -
### 備忘録
▼「Eclipse」にて、「javax.servlet.annotation.WebServlet」がインポートできない場合、「プロジェクト(P)」の「プロパティー(P)」から「プロジェクト・ファセット」の「動的Webモジュール」の「ランタイム(R)」のTomcat7以降にチェックを付けて適用する。

▼設定ファイル「web.xml」を変更せずに、WebServlet アノテーションでURIパターンの設定ができる(Tomcat7以降)