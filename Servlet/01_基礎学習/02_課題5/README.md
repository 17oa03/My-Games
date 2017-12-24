- - -
### プログラムの目標
1. ###### MVC モデルの理解
2. ###### Model(MemberDAO)からのデータをセッションに保存し、「JSP」から読み込んで表示させる。
- - -
### ファイル

▼Servlet  
MemberServlet.java

▼JSP  
member_search.jsp  
disp_error.jsp  
disp_member.jsp  

▼Class
Member.java  
MemberDAO.java  

▼SQL
meibo.sql  

- - -
### 備忘録
▼サーブレットを日本語の文字コードに対応させる為、フィルタのdoFilter メソッドを修正した。  
@Override  
public void doFilter(ServletRequest request, ServletResponse   response, FilterChain chain) throws IOException,   ServletException {  
    // TODO Auto-generated method stub  
    // place your code here  
    request.setCharacterEncoding("UTF-8");  
    response.setContentType("text/html; charset=UTF-8");  
    // pass the request along the filter chain  
    chain.doFilter(request, response);  
}  
