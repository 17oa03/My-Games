package kadai5;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

@WebServlet("/s5")
public class MemberServlet2 extends HttpServlet {
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {

		// 文字化け対策
		response.setContentType("text/html; cherset=utf-8");
		// 文字出力用のストリームの取得
		PrintWriter out = response.getWriter();
		// セッションの作成
		HttpSession session = request.getSession();
		// セッションの削除
		session.removeAttribute("error");

		// null 判定
		if (response.getWriter() != null) {
			try {
				// 整数判定
				int id = Integer.parseInt(request.getParameter("id"));
				// 範囲判定
				if (id >= 0 && id <= 100) {
					// MemberDAO クラスの作成
					MemberDAO dao = new MemberDAO();
					// 検索結果を文字列で格納
					String str = dao.search(id);
					// 検索結果の null 判定
					if (str != null) {
						// セッションに検索結果を格納
						session.setAttribute("member", str);
						request.getRequestDispatcher("/WEB-INF/disp_member.jsp").forward(request, response);
					} else {
						session.setAttribute("error", "該当するデータが存在しません。");
						request.getRequestDispatcher("/WEB-INF/disp_error.jsp").forward(request, response);
					}
				} else {
					session.setAttribute("error", "範囲外の入力です。");
					request.getRequestDispatcher("/WEB-INF/disp_error.jsp").forward(request, response);
				}
			} catch (NumberFormatException e) {
				session.setAttribute("error", "整数を入力して下さい。");
				request.getRequestDispatcher("/WEB-INF/disp_error.jsp").forward(request, response);
			}
		} else {
			session.setAttribute("error", "入力がありません。");
			request.getRequestDispatcher("/WEB-INF/disp_error.jsp").forward(request, response);
		}
	}
}
