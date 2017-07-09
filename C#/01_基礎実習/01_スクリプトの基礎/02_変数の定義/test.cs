/*【プログラム概要】
 * 変数を定義して利用する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int foo;
        foo = 100;
        Debug.Log(foo);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * 変数とは、
 * データをしまっておく
 * 箱みたいなものになる。
 * 
 * int(整数型)の
 * foo(変数名)を定義、
 * 100(データ)を代入し、
 * 表示させている。
 * 
 * 変数の型には、
 * 
 * int    : 整数型
 * float  : 浮動小数点型
 * double : 倍精度浮動小数点型
 * bool   : ブール型
 * char   : 文字型
 * string : 文字列型
 * 
 * などがある。
 */
