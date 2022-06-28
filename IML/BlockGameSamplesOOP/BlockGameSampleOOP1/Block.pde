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
    blocks[i].blockHitFlag = false;
    blocks[i].blockX = BLOCK_GAP + i % BLOCK_ROWS * (blocks[i].blockWidth + BLOCK_GAP);
    blocks[i].blockY = BLOCK_GAP + i / BLOCK_ROWS * (blocks[i].blockHeight + BLOCK_GAP);
  }
} // arrangeBlocks

class Block{
  
  public float blockX;
  public float blockY;
  public float blockWidth;
  public float blockHeight;
  public boolean blockHitFlag;

  /* ブロックの移動 */
  public void moveBlocks() {
    // 今のところブロックは動かない
  } // moveBlocks
  
  /* ブロックの描画 */
  public void drawBlock() {
    if (blockHitFlag == false) {
      rect(blockX, blockY, blockWidth, blockHeight);
    }
  } // drawBlock
}
