/**************************************
Blockのソースコード
**************************************/

final int MAX_BLOCKS = 100;
float[] blockX = new float[MAX_BLOCKS];
float[] blockY = new float[MAX_BLOCKS];
float[] blockWidth = new float[MAX_BLOCKS];
float[] blockHeight = new float[MAX_BLOCKS];
boolean[] blockHitFlag = new boolean[MAX_BLOCKS];

final int BLOCK_ROWS = 12;
final int BLOCK_GAP = 6;

/* ブロックの移動 */
void moveBlocks() {
// 今のところブロックは動かない
} // moveBlocks

/* ブロックの描画 */
void drawBlocks() {
	for (int i = 0; i < MAX_BLOCKS; i++) {
		if (blockHitFlag[i] == false) {
			rect(blockX[i], blockY[i], blockWidth[i], blockHeight[i]);
		}
	}
} // drawBlocks

/* ブロックの初期化・配置 */
void arrangeBlocks() {
for (int i = 0; i < MAX_BLOCKS; i++) {
blockWidth[i] = 100.0f;
blockHeight[i] = 10.0f;
blockHitFlag[i] = false;
blockX[i] = BLOCK_GAP + i % BLOCK_ROWS * (blockWidth[i] + BLOCK_GAP);
blockY[i] = BLOCK_GAP + i / BLOCK_ROWS * (blockHeight[i] + BLOCK_GAP);
}
} // arrangeBlocks
