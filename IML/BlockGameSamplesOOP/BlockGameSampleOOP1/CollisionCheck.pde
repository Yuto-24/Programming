/**************************************
    衝突判定まわりのソースコード
 **************************************/
 
void checkCollision(){

  /* BallとBarとの接触 */
  if ( ball.ballX > bar.barX && ball.ballX < bar.barX + bar.barWidth ){
    if ( ball.ballY > bar.barY && ball.ballY < bar.barY + bar.barHeight ){
      ball.ballVY = -ball.ballVY;
    }
  }

  /* BallとBlockの接触 */
  for (int i = 0; i < MAX_BLOCKS; i++){
    if  ( blocks[i].blockHitFlag == false ){
      if ( ball.ballX  > blocks[i].blockX &&  ball.ballX  <  blocks[i].blockX + blocks[i].blockWidth ){
        if ( ball.ballY > blocks[i].blockY  &&  ball.ballY  <  blocks[i].blockY + blocks[i].blockHeight ){
          ball.ballVY = -ball.ballVY;       // ボールが跳ね返る処理      
          blocks[i].blockHitFlag = true;    // 当たったことにする
        }
      }
    }
  }
}
