/*【プログラム概要】
 * 文字列を連結し、
 * 出力する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        string foo = "Hello"; 
        int ber = 100;
        string baz = foo + ber; // 文字列に数値を連結させる
        Debug.Log(baz);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * 文字列と数値を連結することが可能、
 * 連結した場合、
 * 数値は文字列として扱われる。
 */
