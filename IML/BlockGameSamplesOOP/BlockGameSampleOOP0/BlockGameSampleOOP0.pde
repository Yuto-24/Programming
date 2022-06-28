/*************************************
BlockGameSample: ブロック複数個バージョン
2020/06/30 by SATOToshiki
*************************************/

int missCounter = 0;

void setup() {
	size(1280, 720);
	arrangeBlocks();    // Blockの配置
}

void draw() {
	
	background(255, 255, 255);
	
	/* キャラクターの移動 */
	moveBall();
	moveBar();
	moveBlocks();
	
	/* 当たり判定処理 */
	checkCollision();
	
	/* キャラクターの描画 */
	drawBall();
	drawBar();
	drawBlocks();
}
	