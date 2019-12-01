#include<stdio.h>
#include"myBank.h"
#include"stdbool.h"

double arr[50][2] = { 0 };

int invoice(double sum) {
  int flag = 0;
	for (int i = 0; i < 50; i++) {
		if (arr[i][0] == 0) {
			arr[i][0] = 1;
			arr[i][1] = sum;
			flag = 1;
			return 901 + i;
		}
	}
	if (!flag)
			printf("there is no invoices closes! \n");
		
}

double B(int account_num) {

	if (arr[account_num - 901][0] == 1) {
		return arr[account_num - 901][1];
	}
	else {
		printf("the number of account is clos ! \n");
	}
}

double D(int account_num , double amount_dep) {

	if (arr[account_num - 901][0] == 1) {
		arr[account_num - 901][1] += amount_dep;
		return arr[account_num - 901][1];
	}
	else 
		printf("this account is clos ! \n");
	

}

double W(int account_num , double amount_attrac) {
	if (arr[account_num - 901][0] == 1 && arr[account_num-901][1] >= amount_attrac){
	  arr[account_num - 901][1] -= amount_attrac;
		return arr[account_num - 901][1];
	}
	else 
		printf("there is no enough moony / the account is clos ! \n");
	

}

void C(int account_num) {

	if (arr[account_num - 901][0] == 1) {
		arr[account_num - 901][0] = 0;
	}
	else{
	printf("this account is clos ! \n");
}
}

void L(double interest_rate) {

	for (int i = 0; i < 50; i++) {
		if (arr[i][0] == 1) {
		  double m=(interest_rate/100);
			arr[i][1] *=(1+m);
		}
	}
}

void P() {

	int i = 0;
	for (i = 0; i < 50; i++) {
		if (arr[i][0] == 1) {
			printf("%.2lf \n", arr[i][1]);
		}
	}
}

void E() {

	int i;
	for (i = 0; i < 50; i++) {
		arr[i][0] = 0;
		arr[i][1] = 0;

	}
}