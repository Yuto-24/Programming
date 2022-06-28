/**************************************
    衝突判定まわりのソースコード
 **************************************/
 
void checkCollision(){

  /* BallとBarとの接触 */
  if ( ball.x > bar.x && ball.x < bar.x + bar.barWidth ){
    if ( ball.y > bar.y && ball.y < bar.y + bar.barHeight ){
      ball.vY = -ball.vY;
    }
  }

  /* BallとBlockの接触 */
  for (int i = 0; i < MAX_BLOCKS; i++){
    if  ( blocks[i].hitFlag == false ){
      if ( ball.x  > blocks[i].x &&  ball.x  <  blocks[i].x + blocks[i].blockWidth ){
        if ( ball.y > blocks[i].y  &&  ball.y  <  blocks[i].y + blocks[i].blockHeight ){
          ball.vY = -ball.vY;       // ボールが跳ね返る処理      
          blocks[i].hitFlag = true;    // 当たったことにする
        }
      }
    }
  }
}
