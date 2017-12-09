<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>

<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP確認課題4</title>
	</head>
	<body>
		<h1>JSP確認課題4</h1>
		<%
			request.setCharacterEncoding("utf-8");
			try {
				if (Double.parseDouble(request.getParameter("su")) - (int)Double.parseDouble(request.getParameter("su")) == 0) {
				int su = Integer.parseInt(request.getParameter("su"));
					if (su < 10) {
						if (su > 0) {
							out.println("<table border=\"1\">" +
								"<tr>" +
								"<th>×</th>" +
								"<th>1</th>" +
								"<th>2</th>" +
								"<th>3</th>" +
								"<th>4</th>" +
								"<th>5</th>" +
								"</tr>");
							for (int i = 1; i <= su; i++) {
								out.println("<tr>" + "<th width='20'>" + i + "</th>");
								for (int j = 1; j <= 5; j++)
									out.println("<td align='center' width='20'>" + (i * j) + "</td>");
							}
						} else
							out.println("数値が小さすぎます");
					} else
						out.println("数値が大きすぎます");
				} else
					out.println("整数を入力してください");
			} catch (NumberFormatException e) {
				out.println("数値を入力して下さい");
			}
			out.println("</table>");
		%>
		<p><a href="kuku.html">戻る</a>
		</p>
	</body>
</html>