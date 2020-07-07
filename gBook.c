#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define LETTER 256 //文字列最大数
#define ALL_MATERIAL 601 //採集可能な総素材数
#define REQ_NUM 120 //要求可能な素材数
#define REG_NUM 8
#define AR_NUM 8
#define LOC_NUM 8
#define FNAME_IN "g_database.txt"
#define FNAME_REQUEST "request.txt"
#define FNAME_OUT "requested_item.txt"

#include"gbooksdefine.h"

struct I_INFO {
	int job [ALL_MATERIAL];
	int level [ALL_MATERIAL];
	char name [ALL_MATERIAL][LETTER];
	int reg [ALL_MATERIAL];
	int area [ALL_MATERIAL];
	int local [ALL_MATERIAL];
};

struct I_CHAR {
	int datanum[REQ_NUM];
	int outputnum[REQ_NUM];
	char jobc [REQ_NUM][LETTER];
	int level [REQ_NUM];
	char namec [REQ_NUM][LETTER];
	int reg [REQ_NUM];
	char regc [REQ_NUM][LETTER];
	int area [REQ_NUM];
	char areac [REQ_NUM][LETTER];
	int local [REQ_NUM];
	char localc [REQ_NUM][LETTER];
};
int main(){

	int i = 0; //第1汎用カウント
	int j = 0; //要求素材数カウント用
	int k = 0; //第2汎用カウント用
	int l = 0; // 第3汎用カウント用
	int flag = 0;
	//int debag;

	struct I_INFO i_info;
	struct I_CHAR i_char;
	char requested_name [REQ_NUM][LETTER];
	int requested_howmuch [REQ_NUM];

	FILE *database;
	FILE *request;
	FILE *fpout;
	char g_database[] = "g_database"; //ゆくゆくはデータベースのファイル名を自動で取得する
/*ここまで文字箱とポインタの準備*/

	database = fopen(FNAME_IN, "r");
	if (database == NULL){
		printf("%s is missing\n", FNAME_IN);
		return -1;
	}else{
		printf("database now opening...\n");
	}
	while(fscanf(database, "%d %d %s %d %d %d", &i_info.job[i], &i_info.level[i], i_info.name[i], &i_info.reg[i], &i_info.area[i], &i_info.local[i]) != EOF){ //ジョブ・必要レベル・アイテム名・リージョン・エリア・地域
		//printf("Num %d\t%d\tLv%d\t%s\t%d\t%d\t%d\n", i, i_info.job[i], i_info.level[i], i_info.name[i], i_info.reg[i], i_info.area[i], i_info.local[i]);
		i++;
	}

	fclose(database);
/*ここまでデータベースの準備*/

	request = fopen(FNAME_REQUEST, "r");
	if (request == NULL){
		printf("%s is missing\n", FNAME_REQUEST);
		return -1;
	}else{
		printf("request now opening...\n");
	}
	printf("\n*-*-*-*-*-*following requested items*-*-*-*-*-*\n");
	while(fscanf(request, "%s %d", requested_name[j], &requested_howmuch[j]) != EOF){
		printf("Num %d\t%s\t%d\n", j, requested_name[j], requested_howmuch[j]);
		j++;
	}
/*ここまで要求素材の入力*/

	printf("\n*-*-*-*-*-*requested items information*-*-*-*-*-*\n");

	for(k=0; k<j; k++){
		flag = 0;
		i = 0;
		do{
			if(strcmp(requested_name[k], i_info.name[i]) == 0){	//strcmp関数で，2引数が一致する場合0を返し，if関数が0を認識する場合処理を行う
				i_char.datanum[k] = i;
				det_job(i_info.job[i], i_char.jobc[k]);
				i_char.level[k] = i_info.level[i];
				strcpy(i_char.namec[k], i_info.name[i]);
				det_rg_ar_loc(i_info.reg[i], i_info.area[i], i_info.local[i], i_char.regc[k], i_char.areac[k], i_char.localc[k]);
				i_char.reg[k] = i_info.reg[i];
				i_char.area[k] = i_info.area[i];
				i_char.local[k] = i_info.local[i];
				//printf("DatabaseNum%3d, %s from %s %s %s, \n",i_char.datanum[k] , i_info.name[i], i_char.regc[k], i_char.areac[k], i_char.localc[k]);
				flag = 1; 
			}
			/* 	ここで
				・データベース上の図鑑番号
				・ジョブ番号からジョブ文字列生成
				・採集可能レベル値の取得
				・リージョン等番号からリージョン等文字列生成
				を行なった．
			*/

			//scanf("%d\n", &debag);
			i++;
			if(i == ALL_MATERIAL+1){ //～～～～～～～～～～～～～～～一つ目のRequested nameが無視されるバグが存在する～～～～～～～～～～～～～～～～～～～
				printf("requested item '%s' is not from nature at least\n", requested_name[k]);
				printf("requested_name%s, %s\n",requested_name[k], i_info.name[279]);
				i_char.datanum[k] = 0;
				strcpy(i_char.jobc[k], "N/A");
				strcpy(i_char.namec[k], requested_name[k]);
				i_char.level[k] = 0;
				i_char.reg[k] = 7;
				strcpy(i_char.regc[k], "N/A");
				strcpy(i_char.areac[k], "N/A");
				strcpy(i_char.localc[k], "N/A");
				flag = 1;
			}

struct I_CHAR {
	int outputnum[REQ_NUM];
	int reg [REQ_NUM];
	int area [REQ_NUM];
	int local [REQ_NUM];
};

			//図鑑番号を最後まで回しても該当アイテムが存在しない場合，エラーを返し，該当request番号の配列をエラー専用数値・文字列で埋めて返す．
		} while(flag == 0);
	}
/*ここまでデータベースからのデータ抽出*/

	for(i=0; i<REG_NUM; i++){
		for(k=0; k<j; k++){
			if(i_char.reg[k] == i){
				i_char.outputnum[k] = l;
				printf("outputNum%d.%s Num%d from %s %s %s\n", i_char.outputnum[k], i_char.namec[k], requested_howmuch[k], i_char.regc[k], i_char.areac[k], i_char.localc[k]);
				l++;
			}
		}
	}
	printf("NOTICE:	when your results are all [not from nature],\n	check whether your letter format of 'request.txt' is UTF-8 or not.\n");
/*ここまでソート(リージョンソート)*/

	k=0;
	flag = 0;
	fpout = fopen(FNAME_OUT, "w");
	fprintf(fpout, "job\tlevel\titem_name\tNumber\tregion\tarea\tlocal\n");
		//printf("ok!\n");

	while(k<j){
		for(i=0; i<l; i++){ //iはカウント変数 jはrequest数 
			if (i_char.outputnum[i] == k){
				fprintf(fpout, "%s\tLv %d\t%s\t%d\t%s\t%s\t%s\n", i_char.jobc[i], i_char.level[i], requested_name[i], requested_howmuch[i], i_char.regc[i], i_char.areac[i], i_char.localc[i]);
				k++;
			}
		}
	}

	fclose(fpout);
/*ここまでファイルの出力*/
	return 0;
}