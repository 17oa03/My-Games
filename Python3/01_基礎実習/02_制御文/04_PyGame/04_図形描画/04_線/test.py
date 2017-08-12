"""
【Summary】
線を描画させる。

"""

#【program】

import sys # システムモジュールのインポート
import pygame # pygame モジュールのインポート
from pygame.locals import QUIT, Rect

SCREEN_SIZE = (400, 300) # 画面サイズ

pygame.init() # pygame モジュールを初期化
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Drawing shapes") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

def main(): # メイン関数

    while True: # 無限ループ

        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了

        SCREEN.fill((255, 255, 255)) # 画面を全て白で塗潰す
        
        pygame.draw.line(SCREEN, (255, 0, 0), (10, 80), (200, 80)) # 赤横線
        pygame.draw.line(SCREEN, (255, 0, 0), (10, 150), (200, 150), 15) # 赤横線(太さ 15)
        pygame.draw.line(SCREEN, (0, 255, 0), (250, 30), (250, 200)) # 緑縦線

        start_pos = (300, 30) # 始点
        end_pos = (380, 200) # 終点
        pygame.draw.line(SCREEN, (0, 0, 255), start_pos, end_pos, 15)# 青斜線
        
        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(3) # 1 秒間に 3 回ループする

if __name__ == '__main__':
    main()


"""
【考察】
line メソッドで線を描画できる、

line(Surface, color, start_pos, end_pos, width = 1) -> Rect

surface : 描画対象となる画像(Surface オブジェクト)
color : 色
start_pos : 始点
end_pos : 終点
width : 線の幅

"""
