<%@ page language="java" contentType="text/html; charset=UTF-8" pageEncoding="UTF-8"%>
<%@ page import="kadai3.Member" %>
<%@ page import="java.util.*" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title>JSP課題4</title>
	</head>
	<body>
		<%
			ArrayList<Member> al = (ArrayList<Member>)session.getAttribute("mem");
			out.print("<table border=\"1\"><tr>");
			for(Member m : al)
				out.print("<td>" + m.getId() + "</td>" + "<td>" + m.getName() + "</td></tr>");
			out.print("</table>");
		%>
	</body>
</html>