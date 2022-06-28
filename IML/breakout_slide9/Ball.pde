// 基本要素
float ballX=300.0f;  // ボールの中心のx座標
float ballY=300.0f;  // ボールの中心のy座標
float ballVX=5.0f;  // ボールのx方向の速度
float ballVY=5.0f;  // ボールのy方向の速度
float ballRadius=50.0f;  // ボールの半径

// 負け要素
int missCounter=0;  // ミスした回数を記録する変数

// ボールの動きをまとめた関数
void moveBall(){
  // ボールの移動
  ballX=ballX+ballVX;
  ballY=ballY+ballVY;

  // 壁での跳ね返り処理
  if (ballX<0 || ballX>width) {  // 左右
    ballVX=-ballVX;
  }
  if (ballY<0 || ballY>height) {  // 上下
    ballVY=-ballVY;
  }
}

// ボールがバーに当たった時の跳ね返り処理(ここでは最も簡単な処理を実装)
void checkBallCollision(){
  if (ballX>barX && ballX<barX+barWidth) {
    if (ballY>barY && ballY<barY+barHeight) {
      ballVY=-ballVY;
    }
  }
}
