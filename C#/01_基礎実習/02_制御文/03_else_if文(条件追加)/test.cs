/*【プログラム概要】
 * else_if文を使って条件を追加する。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int flag = 3; 
        if (flag == 1) {      // 偽
            Debug.Log("勇者は穴に落ちた！");
        }
        else if (flag == 2) { // 偽
            Debug.Log("勇者は穴を回避した！");
        }
        else if (flag == 3) { // 真
            Debug.Log("勇者は穴を飛び越えた！");
        }
        else // 途中で真だったので実行されない
        {
            Debug.Log("勇者は穴に仲間を突き落とした！");
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * else_if文で条件を追加できる、
 * 2つ以上の条件がある場合に便利、
 * いくつでも追加が可能。
 */
