void checkDataBase(fstream &data){
	data.open("data.bin", ios::out | ios::in | ios::binary);
	//check file atau tidak
	if(data.is_open()){
		cout << "Database Ditemukan" << endl;
	} else {
		cout << "Data Base Tidak Ditemukan" << endl;
		cout << "Buat Data Base Buat Baru" << endl;
		data.close();
		data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
	}
}