"""
【Summary】
横スクロールゲームを作る。

"""

#【program】

import sys # システムモジュールのインポート
import pygame # pygame モジュールのインポート
from random import randint # randomモジュールのranint メソッドのインポート
from pygame.locals import QUIT, Rect, KEYDOWN, K_SPACE

SCREEN_SIZE = (800, 600) # 画面サイズ

pygame.init() # pygame モジュールを初期化
pygame.key.set_repeat(5, 5) # キーを押し続けた際に連続して KEYDOWN イベントを生成する為に呼び出し
pygame.display.set_caption("Rocket BOMB!!_Ver.1.0.0") # ウィンドウのタイトル
SURFACE = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メインルーチン

    rocket_img = pygame.image.load("rocket.png") # 自機の画像のロード
    bomb_img = pygame.image.load("bomb.png") # ゲームオーバー時の画像のロード

    rocket_y = 250 # 自機の座標(y)
    rising = 0 # 自機の上昇速度
    cavity = 80 # 移動有効範囲
    slope = randint(1, 6) # 移動有効範囲の傾き
    score = 0 # スコア
    score_font = pygame.font.SysFont(None, 36) # ファイルから情報を読み込んでフォントオブジェクトを作成
   
    cavity_ary = []
    for xpos in range(cavity):
        cavity_ary.append(Rect(xpos * 10, 100, 10, 400)) # X軸に 10 移動しながら矩形を生成し、cavity_ary に代入
    game_over = False # ゲームオーバーフラグ OFF

    while True: # メインループ
        
        space_flag = False # スペースキー押下フラグ OFF
        
        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGame の初期化を解除
                sys.exit() # プログラム終了
            elif event.type == KEYDOWN: # イベントタイプが KEYDOWN の場合
                if event.key == K_SPACE: # キーコードが K_SPACE の場合
                    space_flag = True # スペースキー押下フラグ ON

        if not game_over: # ゲームオーバーフラグが OFF(False) の場合
            score += 10 # スコアに 10 点加算
            rising += -2 if space_flag else 1 # 自機の上昇(-2), 下降(+1)
            rocket_y += rising

            cavity_last = cavity_ary[-1].copy() # 最後の要素(右端の矩形)を複製し、変数 cavity_last に代入
            scope = cavity_last.move(0, slope) # cavity_last をY軸方向に slope 分動かし、scope に代入 
            if scope.top <= 0 or scope.bottom >= 600: # 傾きが天井、または床の指定値に達した場合
                slope = randint(1, 6) * (-1 if slope > 0 else 1) # 傾きの反転(符号反転)
                cavity_last.inflate_ip(0, -20) # Y軸方向のサイズを -20
            cavity_last.move_ip(10, slope) # 最後の要素(右端の矩形)のX軸方向 +10、Y軸方向 slope 分移動
            cavity_ary.append(cavity_last) # 末尾の要素(右端の矩形)を追加
            del cavity_ary[0] # 最初の要素(先頭の矩形)を削除
            cavity_ary = [x.move(-10, 0) for x in cavity_ary] # 全体のX軸方向を -10

            if cavity_ary[0].top > rocket_y or \
                cavity_ary[0].bottom < rocket_y + 60: # 先頭の矩形の範囲内に自機の座標が収まっていない場合
                game_over = True # ゲームオーバーフラグ ON

        SURFACE.fill((111, 51, 16)) # 全画面を全て茶色で塗潰す
        
        for width in cavity_ary:
            pygame.draw.rect(SURFACE, (0, 0, 0), width) # 移動有効範囲の描画
        SURFACE.blit(rocket_img, (0, rocket_y)) # 自機の描画
        score_img = score_font.render("SCORE  {}".format(score), True, (255, 255, 255)) # スコアの描画
        SURFACE.blit(score_img, (600, 20)) # スコアの描画

        if game_over: # ゲームオーバーフラグが ON(True) の場合
            SURFACE.blit(bomb_img, (0, rocket_y-40)) # ゲームオーバー時の画像を描画

        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(15) # 1 秒間に 15 回ループする

if __name__ == '__main__':
    main()

"""
【考察】
最高得点 12760 点

"""
