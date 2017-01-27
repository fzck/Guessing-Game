#include<iostream>

using namespace std;

const int SECRET = 1;
const int N = 20;
int guess(int i){
	
	if (i < SECRET){
	
		return -1;
	} else if (i > SECRET){
		return 1;
	} else{
	
		return 0;
	}
}


int generator(int i){
	
	int end = N;
	int start = 1;
	int mid = (start + end) / 2;
	
	while (start < end){
		if (guess(i) == 0){
		
			cout << "GUESS NUMBER" << endl;
			return i;
		} else if (guess(i) == -1){	
			cout << "guess is too low" << endl;
			end = mid - 1;
		}else{
			cout << "guess is too high" << endl;
					start = mid + 1;
		}
	}
	
	
}

int main(){
	

//	int N = 20;
	int x;
	
	
	do{
		cout << "GUESS NUMBER" << endl;
		cin >> x;
		generator(x);
	}while(x != SECRET);
	
	/*
	int end = N;
	int start = 1;
	int mid = (start + end) / 2;
	
	
	while (x != SECRET){
		cout << "GUESS NUMBER" << endl;
		cin >> x;
		if (guess(x) == 0){
		
			cout << "FOUND!" << endl;
		}
		else if (guess(x) == -1){
			cout << "guess is too low" << endl;
			end = mid - 1;
		}
		
		else 
			cout << "guess is too high" << endl;
			start = mid + 1;
	}

*/
	
}

