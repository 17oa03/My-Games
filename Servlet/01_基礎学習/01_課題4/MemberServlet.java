package kadai4;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
/*
「Eclipse」にて「javax.servlet.annotation.WebServlet」がインポートできない場合、
「プロジェクト(P)」の「プロパティー(P)」から
「プロジェクト・ファセット」の「動的Webモジュール」の「ランタイム(R)」のTomcat7以降にチェックを付けて適用する。
 */
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

// 設定ファイル「web.xml」を変更せずに、WebServlet アノテーションでURIパターンの設定ができる(Tomcat7以降)
@WebServlet("/s4")
public class MemberServlet extends HttpServlet {
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		response.setContentType("text/html; cherset=utf-8");
		PrintWriter out = response.getWriter();

		out.println("<html><body><h1>10 Tanaka</h1></body></html>");
	}
}
