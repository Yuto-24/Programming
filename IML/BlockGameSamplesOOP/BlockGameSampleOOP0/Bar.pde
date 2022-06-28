/**************************************
    Barのソースコード
 **************************************/
 
float barX = 500.0f;
float barY = 600.0f;

float barVX = 15.0f;

float barWidth = 200.0f;
float barHeight = 50.0f;
 
/* バーの移動 */
void moveBar(){
  
  /* バーの操作 */
  if ( keyPressed ){
    if ( keyCode == RIGHT ){
      barX = barX + barVX;
    }else if ( keyCode == LEFT ){
      barX = barX - barVX;
    }
  }
} // moveBar

/* バーの描画 */
void drawBar(){
  rect(barX, barY, barWidth, barHeight);
} // drawBar
