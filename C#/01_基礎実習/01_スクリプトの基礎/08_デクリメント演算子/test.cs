/*【プログラム概要】
 * 変数をデクリメントする。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int foo = 10;
        foo--;          // 「--(デクリメント演算子)」で1を減算し、代入
        Debug.Log(foo);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * 「--(デクリメント演算子)」で、
 * 変数の値を1だけ減らせる。
 */
