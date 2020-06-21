int getOption(){
	bantu("cls");
	var input;
	cout << "\nProgram CRUD data mahasiwa" << endl;
	cout << "============================" << endl;
	cout << "1. Tambah data mahasiswa    " << endl;
	cout << "2. Tampilkan data mahasiwa  " << endl;
	cout << "3. Ubah data mahasiwa       " << endl;
	cout << "4. Hapus data mahasiswa     " << endl;
	cout << "5. Selesai                  " << endl;
	cout << "============================" << endl;
	cout << "Pilih [1-5] : ";
	cin >> input;
	return input;
}