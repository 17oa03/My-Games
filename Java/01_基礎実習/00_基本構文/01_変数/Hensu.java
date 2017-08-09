// 【プログラム】
package com.github.java.test; // パッケージ名は、インターネットドメインを前後逆順にしたものが一般的

public class Hensu { // 「Hensu」クラス、クラス名の頭文字は大文字、他は小文字、次の単語の頭文字は大文字
    public static void main(String[] args){ // 「main」メソッド、コマンドライン引数は「String」型の配列「args」

    	int seisu1 = Integer.MAX_VALUE; // 「Integer」クラスの final 型「MAX_VALUE」定数(初期値はint 型の最大値)
        System.out.println("int 型の最大値 = " + seisu1); // 文字列と変数の連結(+)
        System.out.println("int 型の最大値 = " + Integer.MIN_VALUE); // 「MIN_VALUE」定数(初期値はint 型の最小値)

        long seisu2 = Long.MAX_VALUE; // 「Long」クラスの final 型「MAX_VALUE」定数(初期値はint 型の最大値)
        System.out.println("long 型の最大値 = " + seisu2); // 文字列と変数の連結(+)
        System.out.println("long 型の最小値 = " + Long.MIN_VALUE); // 「MIN_VALUE」定数(初期値はint 型の最小値)

        boolean b1 = 10 < 20; // boolean 型、true か false 以外の値は無い(true = 1, false = 0にはならない)
        System.out.println("10 < 20 = " + b1); // 「b1」には「true」が格納されている
        System.out.println("10 > 20 = " + (10 > 20)); // ()内の演算結果は「false」

        char moji1 = 'a'; // char 型は1文字を格納できる
        int num1 = moji1; // int 型の変数に「'a'(97)」の文字コード(UTF-16)を代入
        char moji2 = 'あ'; // char 型は1文字を格納できる
        int num2 = moji2; // int 型の変数に「'あ'(12354)」の文字コード(UTF-16)を代入
        System.out.println("文字の " + moji1 + " は、10 進数で " + num1); // 文字列と変数の連結(+)
        System.out.println("文字の " + moji2 + " は、10 進数で " + num2); // 文字列と変数の連結(+)
    }

}

/*
【実行結果】
int 型の最大値 = 2147483647
int 型の最大値 = -2147483648
long 型の最大値 = 9223372036854775807
long 型の最小値 = -9223372036854775808
10 < 20 = true
10 > 20 = false
文字の a は、10 進数で 97
文字の あ は、10 進数で 12354
*/