<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">

<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP確認課題1</title>
	</head>
	<body>
		<h1>JSP確認課題1</h1>
		<%
			request.setCharacterEncoding("utf-8");
			String adana = request.getParameter("adana");
			if (adana.equals(""))
				out.println("入力エラー");
			else
				out.println("あなたは[" + adana + "]ですね。");
		%>
		<p><a href="shimei.html">戻る</a>
		</p>
	</body>
</html>