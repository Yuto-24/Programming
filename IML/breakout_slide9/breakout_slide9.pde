void setup() {
  size(1280, 720);  // 画面サイズ
  arrangeBlocks();
}

void draw() {
  background(255);  // 背景色 #FFFFFF

  /*バーの動き*/
  moveBar();

  /*ボールの動き*/
  moveBall();
  checkBallCollision();

  // ミスした回数を記録する処理
  if (ballY>height) {
    missCounter++;
  }
  // ゲームオーバーとリセット
  if (missCounter>=5) {
    println("Game Over!!");
    missCounter=0;  // ゲームをリセット
  }

  /*図形の描画*/
  rect(barX, barY, barWidth, barHeight);  // バーの描画
  ellipse(ballX, ballY, ballRadius*2, ballRadius*2);  // ボールの描画
  drawBlocks();
}
