/*【プログラム概要】
 * 変数を初期化し、
 * 変数に変数を代入する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        float foo = 100.0f; // 変数の初期化
        float ber;
        ber = foo; // 変数に変数を代入
        Debug.Log(foo);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * 変数の初期化と代入、
 * 代入する小数の後ろに「f」を付けると
 * float型として扱われる、
 * 「f」を付けない場合は、
 * double型として扱われる。
 * 
 * 「f」を付けずに
 * float型変数に代入しようとすると
 * 代入する値の型に相違がある為、
 * エラーが発生する。
 */
