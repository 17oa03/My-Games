/*【プログラム概要】
 * コンソールビューに何か表示させる。
*/

// 【プログラム】
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class test : MonoBehaviour {

	// Use this for initialization
	void Start () {
        // コンソールビューに表示する
        Debug.Log("Hello Work!");
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}

/*【考察】
 * スクリプトを作成し、
 * ヒエラルキービューに登録された
 * ゲームオブジェクトにアタッチする際に
 * "Can't add script"エラーが発生。
 * 
 * 原因は、
 * ファイル名と
 * スクリプトのクラス名の相違、
 * 作成時のファイル名から
 * 名前を変更した場合、
 * クラス名も変更、
 * 確認する必要がある。
 */
