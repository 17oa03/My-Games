/*【プログラム概要】
 * if_else文を使って条件分岐させる。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int flag = 1; 
        if (flag != 1) { // 偽
            Debug.Log("勇者は穴に落ちた！");
        }
        else // 偽の場合の処理
        {
            Debug.Log("勇者は穴を回避した！");
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * if_else文で、
 * 条件を満たした場合と、
 * 満たさなかった場合に
 * それぞれ別の処理を実行できる。
 */
