/*
¦¦¦¦¦y‚Ü‚¾AƒfƒoƒbƒO‚ªŠ®—¹‚µ‚Ä‚¢‚Ü‚¹‚ñIz¦¦¦¦¦
*/

/*yƒvƒƒOƒ‰ƒ€z*/
#include <stdio.h>

#define ELEMENT 10

int main(void)
{
	struct record {
		int    no;
		char   name[11];
		int english;
		int math;
		int language;
		int total;
		double average;
		int rank;
	};

	struct record data[ELEMENT];

	int i, j;
	
	int temp;

	for (i = 0; i < ELEMENT; i++) {
		scanf("%d %s %d %d %d",
			&data[i].no, data[i].name, &data[i].english, &data[i].math, &data[i].language);
	}

	for (i = 0; i < ELEMENT; i++){
		data[i].total = data[i].english + data[i].math + data[i].language;
		data[i].average = (double)data[i].total / 3;
		data[i].rank = i + 1;
	}

	for (i = 0; i < ELEMENT - 1; i++) {
		for (j = i + 1; j < ELEMENT; j++) {

			if (data[i].total > data[j].total) {

				temp = data[j].rank;
				data[j].rank = data[i].rank;
				data[i].rank = temp;
			}
		}
	}

	printf(" NO     –¼   ‰pŒê ”Šw ‘Œê ‡Œv  •½‹Ï ‡ˆÊ\n");
	printf("--- ---------- ---- ---- ---- ---- ----- ----\n");
	
	for (i = 0; i < ELEMENT; i++) {

		printf("%3d ", data[i].no);
		printf("%-11s", data[i].name);
		printf("%4d ", data[i].english);
		printf("%4d ", data[i].math);
		printf("%4d ", data[i].language);
		printf("%4d ", data[i].total);
		printf("%4.1d ", data[i].average);
		printf("%4%", data[i].rank);
	}

	return 0;
}

/*
yÀsŒ‹‰Êz
*/

/*
yl@z
*/