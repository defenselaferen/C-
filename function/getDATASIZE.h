int getDataSize(fstream &data){
	int start, end;
	data.seekg(0,ios::beg);
	start = data.tellg();
	data.seekg(0, ios::end);
	end = data.tellg();
	return (end-start)/sizeof(Mahasiswa);
}
Mahasiswa readData(fstream &data, int posisi){
	Mahasiswa readMahasiwa;
	data.seekg((posisi - 1)*sizeof(Mahasiswa),ios::beg);
	data.read(reinterpret_cast<char*>(&readMahasiwa),sizeof(Mahasiswa));
	return readMahasiwa;
}