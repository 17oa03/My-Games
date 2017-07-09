/*【プログラム概要】
 * 簡易表記で四則演算し、
 * 結果を出力する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int foo = 10;
        foo += 5;       // 「+=」演算子で5を加算し、代入
        Debug.Log(foo);

        foo = 10;
        foo -= 5;       // 「-=」演算子で5を減算し、代入
        Debug.Log(foo);

        foo = 10;
        foo *= 5;       // 「*=」演算子で5を乗算し、代入
        Debug.Log(foo);

        foo = 10;
        foo /= 5;       // 「/=」演算子で5で除算し、代入
        Debug.Log(foo);

        foo = 10;
        int ber = 5;
        foo += ber;     // 変数で簡易表記の加算
        Debug.Log(foo);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * とても便利...!
 */
