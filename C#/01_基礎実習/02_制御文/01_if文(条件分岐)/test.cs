/*【プログラム概要】
 * if文を使って条件分岐させる。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {

        int flag = 1; 
        if (flag == 1) { // 条件を満たす場合、{}内を実行する
            Debug.Log("勇者は穴に落ちた！");
        }
    }
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * if (条件文){}で条件分岐ができる、
 * 条件を満たした場合、
 * {}内の処理が実行される、
 * 満たさない場合は、
 * {}内の処理が実行されずに終了する。
 * 
 * 条件文には比較演算子が使われる、
 * 
 * == : 右辺と左辺が等しい場合
 * != : 右辺と左辺が等しくない場合
 * >  : 右辺が左辺より小さい場合
 * <  : 右辺が左辺より大きい場合
 * >= : 右辺が左辺以下の場合
 * <= : 右辺が左辺以上の場合
 * 
 * 条件を満たすことを「真」、
 * 満たさないことを「偽」という。
 */
