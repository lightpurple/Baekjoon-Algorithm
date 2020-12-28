#include <stdio.h>

int main(){
	int i, N;
	double score[1002];
	double max = .0, avr = .0, sum = .0;
	
	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%lf", &score[i]);	
		if(max < score[i]){
			max = score[i];
		}
	}
	
	for(i=0; i<N; i++){
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	avr = sum / N;
	printf("%.3lf", avr); 	
		
	return 0;
}
