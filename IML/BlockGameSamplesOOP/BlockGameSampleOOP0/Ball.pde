/**************************************
    Ballのソースコード
 **************************************/
 
float ballX = 500.0f;
float ballY = 100.0f;

float ballVX = 5.0f;
float ballVY = 5.0f;

float ballRadius = 25.0f;

/* ボールの移動 */
void moveBall(){
  
  ballX = ballX + ballVX;
  ballY = ballY + ballVY;
  
  /* 壁での跳ね返り */
  if ( ballX < 0 || ballX > width ){
    ballVX = -ballVX;
  }
  if ( ballY < 0 ){
    ballVY = -ballVY;
  
  /* ミス判定 */
  }else if ( ballY > height + 300 ){
    missCounter++;
    ballY = 100;
    ballX = width / 2;
    println("Miss" + missCounter + "!");
  } 
} // moveBall

/* ボールの描画 */
void drawBall(){
  ellipse(ballX, ballY, ballRadius * 2, ballRadius * 2);
} // drawBall
