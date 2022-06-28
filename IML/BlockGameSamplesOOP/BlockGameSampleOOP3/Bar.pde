/**************************************
    Barクラス
 **************************************/
 
class Bar extends Character{

  public float vX = 15.0f;
  public float barWidth = 200.0f;
  public float barHeight = 50.0f;
   
  /* バーの移動 */
  public void move(){
    
    /* バーの操作 */
    if ( keyPressed ){
      if ( keyCode == RIGHT ){
        x = x + vX;
      }else if ( keyCode == LEFT ){
        x = x - vX;
      }
    }
  } // move
  
  /* バーの描画 */
  public void render(){
    rect(x, y, barWidth, barHeight);
  } // render
  
  
}
