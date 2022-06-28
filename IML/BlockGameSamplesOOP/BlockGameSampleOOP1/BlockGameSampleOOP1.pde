/*************************************
    BlockGameSample: クラス再設計バージョン
    2020/07/7 by SATOToshiki
 *************************************/

Ball ball;
Bar bar;  
final int MAX_BLOCKS = 100;
Block[] blocks = new Block[MAX_BLOCKS];
int missCounter = 0;

void setup(){
  size(1280, 720);
  ball = new Ball();  // 忘れがち！ 
  bar = new Bar();    // 忘れがち！
  arrangeBlocks();    // Blockの配置
}

void draw(){
  
  background(255, 255, 255);
  
  /* キャラクターの移動 */
  ball.moveBall();
  bar.moveBar();
  
  /* 当たり判定処理 */
  checkCollision();
  
  /* キャラクターの描画 */
  ball.drawBall();
  bar.drawBar();
  for ( int i = 0; i < MAX_BLOCKS; i++ ){
    blocks[i].drawBlock();
  }
  
}
