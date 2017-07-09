/*【プログラム概要】
 * 変数で四則演算し、
 * 結果を出力する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int foo;
        foo = 10 + 5;   // 加算「+(プラス)」
        Debug.Log(foo);

        foo = 10 - 5;   // 減算「-(マイナス)」
        Debug.Log(foo);

        foo = 10 * 5;   // 乗算「*(アスタリスク)」
        Debug.Log(foo);

        foo = 10 / 5;   // 除算「/(スラッシュ)」
        Debug.Log(foo);

        foo = 10;
        int ber = 5;
        int baz;
        baz = foo + ber; // 変数同士の加算
        Debug.Log(baz);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * 計算結果を代入することができる、
 * さらに変数同士の計算も可能。
 */
