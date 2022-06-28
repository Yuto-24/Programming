// 基本要素（仮にブロックは100個実装する）
final int MAX_BLOCKS = 100;  // ブロックの総数
final int BLOCK_ROWS = 10;   // 横に並ぶブロックの数
final int BLOCK_GAP = 2;     // ブロック間の距離

float[] blockX = new float[MAX_BLOCKS];  // ブロックの左上のx座標
float[] blockY = new float[MAX_BLOCKS];  // ブロックの左上のy座標
float[] blockWidth = new float[MAX_BLOCKS];  // ブロックの幅
float[] blockHeight = new float[MAX_BLOCKS];  // ブロックの高さ
boolean[] hitFlag = new boolean[MAX_BLOCKS];  // ボールが当たったかの状態を示すフラグ

// ブロックを描画する関数(forで実装)
void drawBlocks(){
  for(int i=0; i<MAX_BLOCKS; i++){
    if(hitFlag[i]==false){  // まだボールに当たっていないなら描画する
      rect(blockX[i], blockY[i], blockWidth[i], blockHeight[i]);
    }
  }
  for(int i=0; i<MAX_BLOCKS; i++){
    if(hitFlag[i]==false){  // まだボールに当たっていない場合は衝突判定を行う
      if(ballX>blockX[i] && ballX<blockX[i]+blockWidth[i]){
        if(ballY>blockY[i] && ballY<blockY[i]+blockHeight[i]){
          ballVY =- ballVY;
          hitFlag[i] = true;
        }
      }
    }
  }
}

// ブロックを並べる関数(forで実装)
void arrangeBlocks(){
  for(int i=0; i<MAX_BLOCKS; i++){
    blockWidth[i] = 100.0f;
    blockHeight[i] = 10.0f;
    hitFlag[i] = false;
    /*この記述でうまくいく理由を考えてみよう！*/
    blockX[i] = BLOCK_GAP + i % BLOCK_ROWS * (blockWidth[i] + BLOCK_GAP);
    blockY[i] = BLOCK_GAP + i / BLOCK_ROWS * (blockHeight[i] + BLOCK_GAP);
  }
}
