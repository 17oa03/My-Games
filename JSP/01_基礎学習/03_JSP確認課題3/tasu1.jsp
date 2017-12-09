<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">

<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP確認課題3</title>
	</head>
	<body>
		<h1>JSP確認課題3</h1>
		<%
			request.setCharacterEncoding("utf-8");
			try {
				int su1 = Integer.parseInt(request.getParameter("su1"));
				int su2 = Integer.parseInt(request.getParameter("su2"));
				int enzan = Integer.parseInt(request.getParameter("enzan"));
				if (su2 != 0) {
					switch (enzan) {
						case 1 :
							out.println(su1 + " ＋ " + su2 + " = " + (su1 + su2) + " です");
							break;
						case 2 :
							out.println(su1 + " － " + su2 + " = " + (su1 - su2) + " です");
							break;
						case 3 :
							out.println(su1 + " × " + su2 + " = " + (su1 * su2) + " です");
							break;
						case 4 :
							out.println(su1 + " ÷ " + su2 + " = " + (su1 / su2) + " です");
							break;
						default :
							out.println("入力エラー");
							break;
					}
				} else
					out.println("入力エラー");
			} catch (NumberFormatException e) {
				out.println("整数を入力してください");
			}
		%>
		<p><a href="tasu1.html">戻る</a>
		</p>
	</body>
</html>