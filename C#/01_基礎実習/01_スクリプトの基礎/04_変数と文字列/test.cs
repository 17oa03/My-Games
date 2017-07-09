/*【プログラム概要】
 * 変数に文字列を代入する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        string foo;  // string型の変数を定義
        foo = "ber"; // 文字列を代入
        Debug.Log(foo);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * スクリプト内で文字列を表すには、
 * 「"」(ダブルコーテーション)で文字を囲む、
 * string型の変数に文字列を代入している。
 * 
 * "100" は代入可能だが、
 *  100  は代入不可になる。
 */
