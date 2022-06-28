/**************************************
   Blockクラス
 **************************************/

/* ブロックの初期化・配置を行う関数 */
final int BLOCK_ROWS = 12;
final int BLOCK_GAP = 6;
void arrangeBlocks() {
  for (int i = 0; i < MAX_BLOCKS; i++) {
    blocks[i] = new Block();  // 忘れがち！
    blocks[i].blockWidth = 100.0f;
    blocks[i].blockHeight = 10.0f;
    blocks[i].hitFlag = false;
    blocks[i].x = BLOCK_GAP + i % BLOCK_ROWS * (blocks[i].blockWidth + BLOCK_GAP);
    blocks[i].y = BLOCK_GAP + i / BLOCK_ROWS * (blocks[i].blockHeight + BLOCK_GAP);
  }
} // arrangeBlocks

class Block extends Character{
  
  public float blockWidth;
  public float blockHeight;
  public boolean hitFlag;

  /* ブロックの移動 */
  public void move() {
    // 今のところブロックは動かない
  } // move
  
  /* ブロックの描画 */
  public void render() {
    if (hitFlag == false) {
      rect(x, y, blockWidth, blockHeight);
    }
  } // render
}
