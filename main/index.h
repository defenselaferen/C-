int main(int argc, char const *argv[])
{
	fstream data;
	checkDataBase(data);

	int pilihan = getOption();
	char is_continue;
	enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};
	while(pilihan != FINISH){
		switch(pilihan){
			case CREATE:
				cout << "Menanbah data Mahasiswa" << endl;
				addDataMahsiwa(data);
				break;
			case READ:
				cout << "Tamplikan data Mahasiswa" << endl;
				displayDataMahasiwa(data);
				break;
			case UPDATE:
				cout << "Ubah data Mahasiswa" << endl;
				break;
			case DELETE:
				cout << "Hapus data Mahasiswa" << endl;
				break;
			default:
				cout << "Pilihan Tidak Ditemukan" << endl;
				break;
		}
		labelContinue:
		cout << "Lanjutkan?(y/n) : ";
		cin >> is_continue;
		if( (is_continue == 'y') | (is_continue == 'Y')){
			pilihan = getOption();
		} else if((is_continue == 'n') | (is_continue == 'N')){
			break;
		} else {
			goto labelContinue;
		}

		pilihan = getOption();
	}
	cout << "akhir dari program" << endl;
	cin.get();
	return 0;
}