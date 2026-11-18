#include <stdio.h>

struct Student {
	char name[50];
	int score;
};

int main() {
	struct Student st;
	// ?뚯씪 ?ъ씤??	FILE *fp;
	FILE *pass;
	FILE *fail;

	int count = 0;

	fp = fopen("students.txt", "w");
	if (fp == NULL) {
		printf("파일 읽기 실패");
		return 1;
	}

	printf("학생 수 : ");
	scanf("%d", &count);

	for (int i = 0; i<count; i++) {
		printf("\n%d번째 학생 이름 : ", i+1);
		scanf("%49s", st.name);
		printf("점수 : ");
		scanf("%d", &st.score);
		fprintf(fp, "%s %d\n", st.name, st.score); 
	}

	fclose(fp);

	fp = fopen("stidents.txt", "r");
	pass = fopen("pass.txt", "w");
	fail = fopen("fail.txt", "w");
	// 3媛쒖쨷 ?덉뿴由??뚯씪??議댁옱?섎㈃
	if (fp == NULL || pass == NULL || fail == NULL) {
		printf("파일 열기 실패");
		if (fp != NULL) fclose(fp);
		if (pass != NULL) fclose(pass);
		if (fail != NULL) fclose(fail);
		return 1;
	}

	//fscanf瑜??ъ슜?댁꽌 ?뚯씪???대쫫怨??먯닔瑜?紐⑤몢 ?쎌쓣 ???덈뒗 ?숈븞 諛섎났?쒕떎
	while(fscanf(fp, "%49%s %d", st.name, &st.score)==2) {
		if (st.score >= 80) {
			fprintf(pass, "%s %d\n", st.name, st.score);
		}
		else {
			fprintf(fail, "%s %d\n", st.name, st.score);
		}
	}

	fclose(fp);
	fclose(pass);
	fclose(fail);

	printf("파일 저장 및 분류 완료");
	return 0;
};


