/**************************************
    Barクラス
 **************************************/
 
class Bar{
    
  public float barX = 500.0f;
  public float barY = 600.0f;
  
  public float barVX = 15.0f;
  
  public float barWidth = 200.0f;
  public float barHeight = 50.0f;
   
  /* バーの移動 */
  public void moveBar(){
    
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
  public void drawBar(){
    rect(barX, barY, barWidth, barHeight);
  } // drawBar
}
