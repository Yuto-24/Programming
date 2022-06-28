/**************************************
    Ballクラス
 **************************************/

class Ball extends Character{

  //public float x = 500;
  //public float y = 100;
  public float vX = 5.0f;
  public float vY = 5.0f;
  
  public float radius = 25.0f;
  
  /* ボールの移動 */
  public void move(){
    
    x = x + vX;
    y = y + vY;
    
    /* 壁での跳ね返り */
    if ( x < 0 || x > width ){
      vX = -vX;
    }
    if ( y < 0 ){
      vY = -vY;
    
    /* ミス判定 */
    }else if ( y > height + 300 ){
      missCounter++;
      y = 100;
      x = width / 2;
      println("Miss" + missCounter + "!");
    } 
  } // move
  
  /* ボールの描画 */
  public void render(){
    ellipse(x, y, radius * 2, radius * 2);
  } // render
  
}
