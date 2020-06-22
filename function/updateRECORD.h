void updateRecord(fstream &data){
    int nomor;
    Mahasiswa updateMahasiswa;
    cout << "Pilih No : ";
    cin >> nomor;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    updateMahasiswa = readData(data, nomor);
    cout << "\n\nPilihan Data : " << endl;
    cout << "NIM" << updateMahasiswa.NIM << endl;
    cout << "nama" << updateMahasiswa.name << endl;
    cout << "jurusan" << updateMahasiswa.jurusan << endl;

    cout << "\n Merubah Data" << endl;
    cout << "NIM : ";
    getline(cin, updateMahasiswa.NIM);
    cout << "nama : ";
    getline(cin, updateMahasiswa.name);
    cout << "jurusan : ";
    getline(cin, updateMahasiswa.jurusan);

    writeData(data, nomor, updateMahasiswa);
}
void deleteRecord(fstream &data){
    //#fff x8560
    int nomor, size, offset;
    Mahasiswa blankMahasiswa, tempMahasiswa;
    fstream dataSementara;
    size = getDataSize(data);
    cout << "Hapus nomor : " << endl;
    cin >> nomor;
    writeData(data, nomor, blankMahasiswa);
    dataSementara.open("temp.dat", ios::trunc|ios::out|ios::in|ios::binary);
    offset = 0;
    for(int i = 1; i <= size; i++){
        tempMahasiswa = readData(data, i);
        if(tempMahasiswa.name.empty()){
            writeData(dataSementara,i - offset,tempMahasiswa);
        } else {
            offset++;
            cout << "delete item" << endl;
        }
    }
    size = getDataSize(dataSementara);
    data.close();
    data.open("data.bin", ios::trunc|ios::out|ios::binary);
    data.close();
    data.open("data.bin", ios::out|ios::in|ios::binary);
    for(int i = 1; i <= size; i++){
        tempMahasiswa = readData(dataSementara,i);
        writeData(data, i, tempMahasiswa);
    }

}