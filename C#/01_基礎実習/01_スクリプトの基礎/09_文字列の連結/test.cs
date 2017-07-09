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
        string ber = "Work!";
        string baz = foo + ber; // 文字列に「+」演算子を使う
        Debug.Log(baz);
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * 文字列は「+」演算子で
 * 連結ができる。
 */
