void addDataMahsiwa(fstream &data){

	Mahasiswa inputMahasiswa, lastMahasiswa;
	int size  = getDataSize(data);
	// readData(data, size);
	cout << "ukuran : " << size << endl;
	if(size == 0){
		inputMahasiswa.pk = 1;
	} else {
		lastMahasiswa = readData(data,size);
		cout << "Pk " << lastMahasiswa.pk << endl;
		inputMahasiswa.pk = lastMahasiswa.pk + 1;
	}
	cout << "Nama : ";
	getline(cin, inputMahasiswa.name);

	cout << "Jurusan : ";
	getline(cin, inputMahasiswa.jurusan);

	cout << "NIM : ";
	getline(cin, inputMahasiswa.NIM);
	writeData(data,size+1,inputMahasiswa);
}
void displayDataMahasiwa(fstream &data){
	int size = getDataSize(data);
	Mahasiswa showMahasiswa;
	cout << "no.\tpk.\tNIM.\tNama.\tjurusan." << endl;
	for(int i = 1; i <= size; i++){
		showMahasiswa = readData(data, i);
		cout << i << "\t";
		cout << showMahasiswa.pk << "\t";
		cout << showMahasiswa.NIM << "\t";
		cout << showMahasiswa.name << "\t";
		cout << showMahasiswa.jurusan << endl;
	}
}