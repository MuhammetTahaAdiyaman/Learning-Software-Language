#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//küpün yanal alanlarını ve hacmini hesaplayan program
int main(int argc, char** argv) {
	
	float kupunBirKenari;
	
	cout << "Lutfen kupun bir kenarini giriniz: " << endl;
	
	cin >> kupunBirKenari;
	
	cout << "Kupun yanal alanlarinin toplami: " << 6 * kupunBirKenari << endl;
	
	cout << "Kupun Hacmi: " << kupunBirKenari * kupunBirKenari * kupunBirKenari << endl;
	
	
	//bir diğer şekilde de yapılabilir
	//float = kupunYanalAlanlarınınToplami;
	//float = kupunHacmi;
	
	//kupunYanalAlanlarınınToplami = 6 * kupunBirKenari;
	
	//kupunHacmi = kupunBirKenari * kupunBirKenari * kupunBirKenari ;
	
	// cout << "Kupun yanal alanlarının toplamı: " << kupunYanalAlanlarınınToplami << endl;
	// cout << "Kupun Hacmi: " << kupunHacmi << endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
