/**************************************
    衝突判定まわりのソースコード
 **************************************/
 
void checkCollision(){

  /* BallとBarとの接触 */
  if ( ballX > barX && ballX < barX + barWidth ){
    if ( ballY > barY && ballY < barY + barHeight ){
      ballVY = -ballVY;
    }
  }

  /* BallとBlockの接触 */
  for (int i = 0; i < MAX_BLOCKS; i++){
    if  ( blockHitFlag[i] == false ){
      if ( ballX  > blockX[i] &&  ballX  <  blockX[i] + blockWidth[i] ){
        if ( ballY > blockY[i]  &&  ballY  <  blockY[i] + blockHeight[i] ){
          ballVY = -ballVY;       // ボールが跳ね返る処理      
          blockHitFlag[i] = true;    // 当たったことにする
        }
      }
    }
  }
}
