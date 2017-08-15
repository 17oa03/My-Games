"""
【Summary】
インベーダーゲームの作成。

"""

#【program】

import sys # システムモジュールのインポート
import pygame # pygame モジュールのインポート
from random import randint # randomモジュールのranint メソッドのインポート
from pygame.locals import Rect, QUIT, KEYDOWN, K_LEFT, K_RIGHT, K_SPACE # pygame モジュールの各メソッドのインポート

SCREEN_SIZE = (600, 600) # 画面サイズ

pygame.init() # pygame モジュールを初期化
pygame.key.set_repeat(5, 5) # キーを押下した際にイベントを生成する為に呼び出し
SCREEN = pygame.display.set_mode(SCREEN_SIZE) # サイズを指定してウィンドウを作成
pygame.display.set_caption("Magical Invaders_Ver.1.0.0") # ウィンドウのタイトル
FPSCLOCK = pygame.time.Clock() # クロックオブジェクトを作成し、FPSCLOCK に代入

class Draw: # 描画オブジェクトのスーパークラス(親クラス)
    
    def __init__(self, rect, offset0, offset1): # コンストラクタ
        
        strip = pygame.image.load("char_chip.png") # キャラチップのロード

        self.rect = rect # 初期位置
        self.count = 0 # 描画する画像の切り替えの為のカウンタ変数
        self.images = (pygame.Surface((24, 24), pygame.SRCALPHA), pygame.Surface((24, 24), pygame.SRCALPHA))
        self.images[0].blit(strip, (0, 0), Rect(offset0, 0, 24, 24)) # 1枚目の画像のオフセット値
        self.images[1].blit(strip, (0, 0), Rect(offset1, 0, 24, 24)) # 2枚目の画像のオフセット値

    def move(self, diff_x, diff_y): # オブジェクトを移動するメソッド
        self.count += 1 # カウンタ変数にインクリメント
        self.rect.move_ip(diff_x, diff_y)

    def draw(self): # オブジェクトを描画するメソッド
        image = self.images[0] if self.count % 2 == 0 else self.images[1] # 偶数の場合は 1 枚目の画像、奇数の場合は 2 枚目の画像を描画
        SCREEN.blit(image, self.rect.topleft)

class Player(Draw): # 自機クラス
    def __init__(self): # スーパークラス(親クラス)のコントラクタの呼び出し
        super().__init__(Rect(300, 550, 24, 24), 192, 192) # 自機の画像は切り替えない(オフセット値 192, 192)

class Player_Attack(Draw): # 自機攻撃クラス
    def __init__(self): # スーパークラス(親クラス)のコントラクタの呼び出し
        super().__init__(Rect(300, 0, 24, 24), 0, 24) # 自機攻撃の画像を切り替える(オフセット値 0, 24)

class Enemy_Attack(Draw): # 敵機攻撃クラス
    def __init__(self): # スーパークラス(親クラス)のコントラクタの呼び出し
        super().__init__(Rect(300, -50, 24, 24), 48, 72) # 敵機攻撃の画像を切り替える(オフセット値 48, 72)
        self.time = randint(5, 220) # 敵攻撃タイミング(プロパティ time)の追加、乱数で初期化して調整

class Enemy(Draw): # 魔物クラス
    def __init__(self, rect, offset, score): # スーパークラス(親クラス)のコントラクタの呼び出し
        super().__init__(rect, offset, offset+24) # 敵機攻撃の画像を切り替える(オフセット値 48, 72)
        self.score = score # スコア

def main(): # メインルーチン 
    system_font = pygame.font.SysFont(None, 72) # ファイルから情報を読み込んでフォントオブジェクトを作成
    score_font = pygame.font.SysFont(None, 36) # ファイルから情報を読み込んでフォントオブジェクトを作成
    msg_clr = system_font.render("GAME CLEAR", True, (0, 204, 255)) # render メソッドで画面に複製
    msg_gio = system_font.render("GAME OVER", True, (255, 128, 128)) # render メソッドで画面に複製 
    msg_rect = msg_clr.get_rect() # 文字列の表示範囲を格納
    msg_rect.center = (300, 300) # 画面中央の座標を指定
    
    enemy_left_flag = True # 全敵機の左移動フラグ ON
    enemy_down_flag = False # 全敵機の下移動フラグ OFF
    gio_flag = False # ゲームオーバーフラグ OFF

    player = Player() # 自機オブジェクトを格納する変数
    player_attack = Player_Attack() # 自機攻撃オブジェクトを格納する変数
    enemy_list = [] # 敵機オブジェクトを格納するリスト
    enemy_attack_list = [] # 敵機攻撃オブジェクトを格納するリスト
    enemy_move_frame = 20 # 敵機が移動するまでのフレーム数
    score = 0 # スコア
    loop_count = 0 # ループカウンタ変数

    for ypos in range(4): # 敵機をY軸に描画するループ
        offset = 96 if ypos < 2 else 144 # 1, 2 列目と 3, 4 列目の敵機の画像を切り替え
        for xpos in range(10): # 敵機をX軸に描画するループ
            rect = Rect(100 + xpos * 50, ypos * 50 + 50, 24, 24) 
            enemy = Enemy(rect, offset, (4 - ypos) * 10)
            enemy_list.append(enemy)

    for _ in range(4): # 敵機攻撃作成ループ
        enemy_attack_list.append(Enemy_Attack()) # 配列に追加

    while True: # メインループ
        player_move_x = 0 # 自機の移動距離を初期化
        for event in pygame.event.get(): # イベントキューからイベントを取得
            if event.type == QUIT: # 終了イベントの判定
                pygame.quit() # PyGameの初期化を解除
                sys.exit() # プログラム終了
            elif event.type == KEYDOWN: # イベントタイプが KEYDOWN の場合
                if event.key == K_LEFT: # キーコードが K_LEFT の場合
                    player_move_x = -5 # 自機の移動距離を左へ(-5)
                elif event.key == K_RIGHT: # キーコードが K_RIGHT の場合
                    player_move_x = +5 # 自機の移動距離を右へ(+5)
                elif event.key == K_SPACE and player_attack.rect.bottom < 0: # キーコードが K_SPACE、かつ自機攻撃中でない場合
                    player_attack.rect.center = player.rect.center # 自機が攻撃する

        if not gio_flag: # ゲームオーバーフラグが OFF の場合
            loop_count += 1 # ループカウンタ変数を加算
            player.move(player_move_x, 0) # 自機の移動
            player_attack.move(0, -15) # 自機攻撃弾の移動
            
            enemy_area = enemy_list[0].rect.copy() # リスト先頭の敵機を複製して格納
            for enemy in enemy_list: # 全敵機の描画範囲を求めるループ
                enemy_area.union_ip(enemy.rect) # 全敵機の描画範囲を格納

            if loop_count % enemy_move_frame == 0: # カウンタを敵機移動フレーム数がで割り切れた場合
                move_x = -5 if enemy_left_flag else 5 # 全敵機の左移動フラグが ON の場合
                move_y = 0

                if (enemy_area.left < 10 or enemy_area.right > 590) and not enemy_down_flag: #　全敵機の描画範囲が両端に達した場合、かつ全敵機の下移動フラグ ON でない場合
                    enemy_left_flag = not enemy_left_flag # 左右の移動方向を反転
                    move_x, move_y = 0, 24 # Y軸方向の移動量
                    enemy_move_frame = max(1, enemy_move_frame - 2) # 敵機の移動速度上昇
                    enemy_down_flag = True # 全敵機の下移動フラグ ON
                else: # それ以外の場合
                    enemy_down_flag = False # 全敵機の下移動フラグ OFF

                for enemy in enemy_list:
                    enemy.move(move_x, move_y) # 全敵機に移動を適用

            if enemy_area.bottom > 550: # 敵機が画面下に到達した場合
                gio_flag = True # ゲームオーバーフラグ ON

            for enemy_attack in enemy_attack_list: # 敵機攻撃ループ
                if enemy_attack.time < loop_count and enemy_attack.rect.top < 0: # 敵攻撃済み、かつ敵攻撃待機状態
                    enemy = enemy_list[randint(0, len(enemy_list) - 1)]
                    enemy_attack.rect.center = enemy.rect.center

                if enemy_attack.rect.top > 0: # 敵機攻撃中の場合
                    enemy_attack.move(0, 10) # 敵機攻撃を移動

                if enemy_attack.rect.top > 600: # 敵機攻撃が画面外の場合
                    enemy_attack.time += randint(50, 100) # 敵機攻撃タイミングを乱数で決める
                    enemy_attack.rect.top = -50

                if enemy_attack.rect.colliderect(player.rect): # 敵機攻撃範囲が自機範囲に衝突した場合
                    gio_flag = True # ゲームオーバーフラグ ON

            tmp = [] # 敵機を取り除く為の一時的変数
            for enemy in enemy_list: # 自機攻撃が敵機に衝突したか否かの判定
                if enemy.rect.collidepoint(player_attack.rect.center): # 衝突している場合
                    player_attack.rect.top = -50 # 敵攻撃を画面外に配置
                    score += enemy.score # スコア加算
                else: # 衝突していない場合
                    tmp.append(enemy)
            enemy_list = tmp
            if len(enemy_list) == 0: # 敵機の配列が 0 の場合(全敵機が撃墜している場合)
                gio_flag = True # ゲームオーバーフラグ ON

        SCREEN.fill((0, 0, 0)) # 全画面を黒色で塗潰す
        for enemy in enemy_list: # 敵機, 自機, 自機攻撃, 敵機攻撃の描画
            enemy.draw() # 敵機の描画
        player.draw() # 自機の描画
        player_attack.draw() # 自機攻撃の描画
        for enemy_attack in enemy_attack_list: # 敵機攻撃の描画ループ
            enemy_attack.draw() # 敵機攻撃の描画

        score_img = score_font.render("SCORE  {}".format(score), True, (255, 255, 255)) # スコアの描画
        SCREEN.blit(score_img, (420, 15)) # スコアの描画

        if gio_flag: # ゲームオーバーフラグが ON の場合
            if len(enemy_list) == 0: # 敵機の配列が 0 の場合(全敵機が撃墜している場合)
                SCREEN.blit(msg_clr, msg_rect.topleft) # ゲームクリアメッセージを描画
            else: # それ以外の場合
                SCREEN.blit(msg_gio, msg_rect.topleft) # ゲームオーバーメッセージを描画

        pygame.display.update() # 描画内容を画面に反映
        FPSCLOCK.tick(20) # 1 秒間に 20 回ループする

if __name__ == '__main__':
    main()

"""
【考察】

"""
