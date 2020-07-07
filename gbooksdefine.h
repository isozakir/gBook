void det_job (int jb_num, char* jbp){		//エリア番号からエリア名を返す
	switch (jb_num){
		case 0:
			strcpy(jbp, "採掘師");
			break;
		case 1:
			strcpy(jbp, "園芸師");
			break;
		default:
			printf("invalid job number - broken %s\n ", FNAME_IN);
			exit(-1);
	}
}


//そのうちこの辺はスマートにする
void det_rg_ar_loc (int reg_num, int ar_num, int loc_num,  char* rgp, char* arp, char* locp){	//各種番号から位置情報を返す
//gbooksdefine.hに別途記載
		switch (reg_num){
		case 0:
			strcpy(rgp, "リムサ");
				switch (ar_num){
					case 0:
						strcpy(arp, "中央ラノシア");
						switch (loc_num){
							case 0:
								strcpy(locp, "スリー");
								break;
							case 1:
								strcpy(locp, "サマー");
								break;
							case 2:
								strcpy(locp, "ゼファード");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 1:
						strcpy(arp, "低地ラノシア");
						switch (loc_num){
							case 0:
								strcpy(locp, "シダーウッド");
								break;
							case 1:
								strcpy(locp, "モラビー湾");
								break;
							case 2:
								strcpy(locp, "ゴッズクリップ");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 2:
						strcpy(arp, "東ラノシア");
						switch (loc_num){
							case 0:
								strcpy(locp, "旧街道");
								break;
							case 1:
								strcpy(locp, "ブラッドショア");
								break;
							case 2:
								strcpy(locp, "レインキャッチャー樹林");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 3:
						strcpy(arp, "西ラノシア");
						switch (loc_num){
							case 0:
								strcpy(locp, "サプサ産卵地");
								break;
							case 1:
								strcpy(locp, "スカルバレー");
								break;
							case 2:
								strcpy(locp, "ハーフストーン");
								break;
							case 3:
								strcpy(locp, "クォーター");
								break;
							case 4:
								strcpy(locp, "幻影諸島");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 4:
						strcpy(arp, "高地ラノシア");
						switch (loc_num){
							case 0:
								strcpy(locp, "渓谷");
								break;
							case 1:
								strcpy(locp, "ブロンズレイク");
								break;
							case 2:
								strcpy(locp, "オークウッド");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 5:
						strcpy(arp, "外地ラノシア");
						switch (loc_num){
							case 0:
								strcpy(locp, "武装鉱山");
								break;
							case 1:
								strcpy(locp, "アイアンレイク");
								break;
							case 2:
								strcpy(locp, "ロングクライム");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 6:
						strcpy(arp, "上甲板層");
						strcpy(locp, "上甲板層");
						break;
					case 7:
						strcpy(arp, "下甲板層");
						strcpy(locp, "下甲板層");
						break;

					default:
						printf("invalid area number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
						exit(-1);
				}
				break;
		case 1:
			strcpy(rgp, "グリダニア");
				switch (ar_num){
					case 0:
						strcpy(arp, "新市街");
						strcpy(locp, "新市街");
						break;
					case 1:
						strcpy(arp, "旧市街");
						strcpy(locp, "旧市街");
						break;
					case 2:
						strcpy(arp, "中央森林");
						switch (loc_num){
							case 0:
								strcpy(locp, "枯骨の森");
								break;
							case 1:
								strcpy(locp, "スカンポの休息所");
								break;
							case 2:
								strcpy(locp, "翡翠湖畔");
								break;
							case 3:
								strcpy(locp, "グリーンティア択伐地");
								break;
							case 4:
								strcpy(locp, "ベントブランチ");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 3:
						strcpy(arp, "北部森林");
						switch (loc_num){
							case 0:
								strcpy(locp, "プラウドクリーク");
								break;
							case 1:
								strcpy(locp, "ピースガーデン");
								break;
							case 2:
								strcpy(locp, "ひそひそ木立");
								break;
							case 3:
								strcpy(locp, "アルダースプリングス");
								break;
							case 4:
								strcpy(locp, "ゲルモラ遺跡");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 4:
						strcpy(arp, "東部森林");
						switch (loc_num){
							case 0:
								strcpy(locp, "茨の森");
								break;
							case 1:
								strcpy(locp, "ナインアイビー");
								break;
							case 2:
								strcpy(locp, "ラークスコール");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 5:
						strcpy(arp, "南部森林");
						switch (loc_num){
							case 0:
								strcpy(locp, "沈黙の花壇");
								break;
							case 1:
								strcpy(locp, "ウルズの恵み");
								break;
							case 2:
								strcpy(locp, "アッパーパス");
								break;
							case 3:
								strcpy(locp, "ロウアーパス");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					default:
						printf("invalid area number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
						exit(-1);
				}
				break;
		case 2:
			strcpy(rgp, "ウルダハ");
				switch (ar_num){
					case 0:
						strcpy(arp, "西ザナラーン");
						switch (loc_num){
							case 0:
								strcpy(locp, "金槌台地");
								break;
							case 1:
								strcpy(locp, "ホライズン・エッジ");
								break;
							case 2:
								strcpy(locp, "足跡の谷");
								break;
							case 3:
								strcpy(locp, "ウエストウインド");
								break;
							case 4:
								strcpy(locp, "ノフィカの井戸");
								break;
							case 5:
								strcpy(locp, "シルバーバザー");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 1:
						strcpy(arp, "中央ザナラーン");
						switch (loc_num){
							case 0:
								strcpy(locp, "ブラックブラッシュ");
								break;
							case 1:
								strcpy(locp, "クラッチ狭間");
								break;
							case 2:
								strcpy(locp, "刺抜盆地");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 2:
						strcpy(arp, "東ザナラーン");
						switch (loc_num){
							case 0:
								strcpy(locp, "ウェルウィック新林");
								break;
							case 1:
								strcpy(locp, "バーニング");
								break;
							case 2:
								strcpy(locp, "ドライボーン");
								break;
							case 3:
								strcpy(locp, "サンドゲート");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 3:
						strcpy(arp, "南ザナラーン");
						switch (loc_num){
							case 0:
								strcpy(locp, "ブロークンウォーター");
								break;
							case 1:
								strcpy(locp, "レッドラビリンス");
								break;
							case 2:
								strcpy(locp, "サゴリー砂漠");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 4:
						strcpy(arp, "北ザナラーン");
						strcpy(locp, "ブルーフォグ");
						break;
					default:
						printf("invalid area number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
						exit(-1);
				}
				break;
		case 3:
			strcpy(rgp, "イシュガルド");
				switch (ar_num){
					case 0:
						strcpy(arp, "クルザス中央高地");
						switch (loc_num){
							case 0:
								strcpy(locp, "巨石");
								break;
							case 1:
								strcpy(locp, "ドラゴンヘッド");
								break;
							case 2:
								strcpy(locp, "神意の地");
								break;
							case 3:
								strcpy(locp, "ホワイトブリム");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 1:
						strcpy(arp, "クルザス西部高地");
						switch (loc_num){
							case 0:
								strcpy(locp, "リバーズミート");
								break;
							case 1:
								strcpy(locp, "レッドリム");
								break;
							case 2:
								strcpy(locp, "ゴルガニュ牧草地");
								break;
							case 3:
								strcpy(locp, "ツインプールズ");
								break;
							case 4:
								strcpy(locp, "イエティの棲処");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 2:
						strcpy(arp, "アバラシア雲海");
						switch (loc_num){
							case 0:
								strcpy(locp, "ブルーウィンドウ");
								break;
							case 1:
								strcpy(locp, "ガントレット");
								break;
							case 2:
								strcpy(locp, "オク・ベンド");
								break;
							case 3:
								strcpy(locp, "ヴァナ");
								break;
							case 4:
								strcpy(locp, "モック");
								break;
							case 5:
								strcpy(locp, "ラスト");
								break;
							case 6:
								strcpy(locp, "シアンシラン");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 3:
						strcpy(arp, "アジス・ラー");
						switch (loc_num){
							case 0:
								strcpy(locp, "アルファ管区");
								break;
							case 1:
								strcpy(locp, "ベータ管区");
								break;
							case 2:
								strcpy(locp, "デルタ管区");
								break;
							case 3:
								strcpy(locp, "ガンマ管区");
								break;
							case 4:
								strcpy(locp, "旗艦");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 4:
						strcpy(arp, "高地ドラヴァニア");
						switch (loc_num){
							case 0:
								strcpy(locp, "チョコボの森");
								break;
							case 1:
								strcpy(locp, "スモーキングウェイスト");
								break;
							case 2:
								strcpy(locp, "アヴァロニア・フォールン");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 5:
						strcpy(arp, "低地ドラヴァニア");
						switch (loc_num){
							case 0:
								strcpy(locp, "シャーレアン工匠街");
								break;
							case 1:
								strcpy(locp, "シャーレアン学士街");
								break;
							case 2:
								strcpy(locp, "シャーレアン哲人街");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 6:
						strcpy(arp, "ドラヴァニア雲海");
						switch (loc_num){
							case 0:
								strcpy(locp, "エイル・トーム");
								break;
							case 1:
								strcpy(locp, "ランドロード");
								break;
							case 2:
								strcpy(locp, "フォーアームズ");
								break;
							case 3:
								strcpy(locp, "オール・ターン");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					default:
						printf("invalid area number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
						exit(-1);
				}
				break;
		case 4:
			strcpy(rgp, "ギラバニア");
				switch (ar_num){
					case 0:
						strcpy(arp, "ラールガーズリーチ");
						strcpy(locp, "ラールガーズリーチ");
						break;
					case 1:
						strcpy(arp, "ギラバニア辺境地帯");
						switch (loc_num){
							case 0:
								strcpy(locp, "イーストエンド混交林");
								break;
							case 1:
								strcpy(locp, "夜の森");
								break;
							case 2:
								strcpy(locp, "ストライプヒルズ");
								break;
							case 3:
								strcpy(locp, "枯れ谷");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 2:
						strcpy(arp, "ギラバニア山岳地帯");
						switch (loc_num){
							case 0:
								strcpy(locp, "ラストフォレスト");
								break;
							case 1:
								strcpy(locp, "ラストロック");
								break;
							case 2:
								strcpy(locp, "ワイトロック");
								break;
							case 3:
								strcpy(locp, "マウントヨーン");
								break;
							case 4:
								strcpy(locp, "スリーピングストーンズ採石場");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 3:
						strcpy(arp, "ギラバニア湖畔地帯");
						switch (loc_num){
							case 0:
								strcpy(locp, "ハイバンク");
								break;
							case 1:
								strcpy(locp, "ロッホセル");
								break;
							case 2:
								strcpy(locp, "アバラシアスカルズ");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					default:
						printf("invalid area number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
						exit(-1);
				}
				break;
		case 5:
			strcpy(rgp, "ひんがし");
				switch (ar_num){
					case 0:
						strcpy(arp, "クガネ");
						strcpy(locp, "クガネ");
						break;
					case 1:
						strcpy(arp, "紅玉海");
						switch (loc_num){
							case 0:
								strcpy(locp, "獄の蓋");
								break;
							case 1:
								strcpy(locp, "螺旋海峡");
								break;
							case 2:
								strcpy(locp, "オノコロ島");
								break;
							case 3:
								strcpy(locp, "オサード大陸東岸");
								break;
							case 4:
								strcpy(locp, "蟹茹浜");
								break;
							case 5:
								strcpy(locp, "蒼玉海溝");
								break;
							case 6:
								strcpy(locp, "サカズキ島");
								break;
							case 7:
								strcpy(locp, "ベッコウ島");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 2:
						strcpy(arp, "ヤンサ");
						switch (loc_num){
							case 0:
								strcpy(locp, "玄水連山");
								break;
							case 1:
								strcpy(locp, "七彩");
								break;
							case 2:
								strcpy(locp, "ドマ城下町");
								break;
							case 3:
								strcpy(locp, "無二江流域");
								break;
							case 4:
								strcpy(locp, "不見転岩場");
								break;
							case 5:
								strcpy(locp, "アオサギ滝");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					case 3:
						strcpy(arp, "アジムステップ");
						switch (loc_num){
							case 0:
								strcpy(locp, "ナーマ砂漠北端");
								break;
							case 1:
								strcpy(locp, "オンサル・ハカイル");
								break;
							case 100:
								strcpy(locp, "未知");
								break;
							case 200:
								strcpy(locp, "伝説");
								break;
							default:
								printf("invalid local number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
								exit(-1);
							}
						break;
					default:
						printf("invalid area number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
						exit(-1);
				}
				break;
		case 6:
			strcpy(rgp, "モードゥナ");
			strcpy(arp, "タングル湿林");
			break;
		default:
			printf("invalid region number - broken %s\nat reg: %d, ar: %d, loc: %d\n ", FNAME_IN, reg_num, ar_num, loc_num);
	}
}