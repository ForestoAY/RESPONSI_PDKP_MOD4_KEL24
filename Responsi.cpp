#include <iostream>
using namespace std;

class pakai{
public:
	string dekripsi (string kata, int kelompok){
	string result = "";

	for (int i=0;i<kata.length();i++){
        if (isupper(kata[i]))
        result += char(int(kata[i]+kelompok-26-65)%26 +65);
        
 	  	else
        result += char(int(kata[i]+kelompok-26-97)%26 +97);
    }
    return result;
}
};

string enkripsi(string kata, int kelompok){
    string result = "";
 
    for (int i=0;i<kata.length();i++){
        if (isupper(kata[i]))
        result += char(int(kata[i]+kelompok-65)%26 +65);
        
    	else
        result += char(int(kata[i]+kelompok-97)%26 +97);
    }
    return result;
}

int main(){
    string kata;
    int kelompok, jawaban;
    cout << "Kata : ";
    cin >> kata;
    cout << "Kelompok : ";
    cin >> kelompok;
    cout << "1.Enkripsi\n2.Dekripsi\nJawaban : ";
    cin >> jawaban;
    if (jawaban ==1){
    	cout << "Telah dienkripsi menjadi : " << enkripsi(kata, kelompok);
	}
	else if (jawaban == 2){
		pakai menu;
		cout << "Telah didekripsi menjadi : "<< menu.dekripsi(kata, kelompok);
	}
	else
		cout << "Jawaban tidak valid ";

    return 0;
}
