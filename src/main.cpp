#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;


int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
	int menu_secondary;

	while(1) {
		Menuutama:
		system("cls||clear");
		system("clear");

		cout << "Selamat datang di Universitas akatsia, urrraaaaaa!!!" << endl << endl;
		cout << endl << "================================================================================\n\n";
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tenaga kependidikan" << endl;
		cout << endl << "================================================================================\n\n";
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  7. Edit data" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		cout << endl << "================================================================================\n\n";

		int idm, idd, idt, nid, dd, mm, yy, tahunmasuk;
		idm = 0; 
		idd = 0;
		idt = 0;
		string nama, nrp, departemen, npp, pendidikan, unit; 

		switch (menu_terpilih) //memilih opsi dari menu utama
		{
			case 1: //opsi pengisian dari data mahasiswa
			{
				tambahMhs:
				system("cls||clear");
				system("clear");
				idm = recMhs.size();

				cout << "  Masukkan nama mahasiswa	: ";
				cin.ignore();	//digunakan untuk mengisi string dengan spasi
				getline(cin, nama);	
				cout << endl;	

				cout << "  Masukkan tanggal, bulan, dan tahun lahir (dd mm yyyy) : ";
				cin >> dd >> mm >> yy ;
				cout << endl;
				
				cout << "  Masukkan NRP mahasiswa	: ";
				cin >> nrp ;
				cout << endl;

				cout << "  Masukkan departemen 		: ";
				cin.ignore();
				getline(cin, departemen);
				cout << endl;

				cout << "  Masukkan tahun masuk		: ";
				cin >> tahunmasuk ;
				cout << endl;

				mahasiswa mhs(idm, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
				recMhs.push_back(mhs); //menambah size dari vector mahasiswa
			}
				break;

			case 2://opsi pengisian dari data dosen
			{
				tambahDsn:
				system("cls||clear");
				system("clear");
				idd = recDosen.size();

				cout << "  Masukkan nama dosen					: ";
				cin.ignore();
				getline(cin, nama);
				cout << endl;

				cout << "  Masukkan tanggal, bulan, dan tahun lahir (dd mm yyyy) : ";
				cin >> dd >> mm >> yy ;
				cout << endl;

				cout << "  Masukkan NPP dosen 					: ";
				cin >> npp ;
				cout << endl;

				cout << "  Masukkan departemen					: ";
				cin.ignore();
				getline(cin, departemen);
				cout << endl;

				cout << "  Masukkan pendidikan terakhir dosen	: ";
				cin.ignore();
				getline(cin, pendidikan);
				cout << endl;

				dosen dsn(idd, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(dsn); //menambah size dari vector dosen
			}
				break;

			case 3://opsi dari pengisian data tendik
			{
				tambahTndk:
				system("cls||clear");
				system("clear");
				idt = recTendik.size();

				cout << "   Masukkan nama tenaga kependidikan	: ";
				cin.ignore();
				getline(cin, nama);
				cout << endl;

				cout << "   Masukkan tanggal, bulan, dan tahun lahir (dd mm yyyy)	: ";
				cin >> dd >> mm >> yy ;
				cout << endl;

				cout << "   Masukkan NPP tenaga kependidikan	: ";
				cin >> npp ;
				cout << endl;

				cout << "   Masukkan unit tenaga kependidikan	: ";
				cin.ignore();
				getline(cin, unit);
				cout << endl;

				tendik tndk(idt, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(tndk); //menambah size dari vector tendik
			}
				break;

			case 4: //menampilkan list dari mahasiswa yang telah ditambahkan di case 1 dari menu utama 1
			{
				listMhs:
				system("cls||clear");
				system("clear");

				for (unsigned i = 0 ; i < recMhs.size() ; i++) //loop untuk menampilkan nama dan nrp dari semua mahasiswa yang telah diinputkan
				{
					cout << endl << i+1 << ".	Nama Mahasiswa	: " << recMhs[i].getNama() << endl;
					cout << "	NRP 		: " << recMhs[i].getNRP() << endl;
				}
				cout << endl << "================================================================================\n\n";

				cout << endl << "Menu	:" << endl;
				cout << "  1. Lihat mahasiswa" << endl;
				cout << "  2. Tambah mahasiswa" <<  endl;
				cout << "  3. Kembali ke menu utama" << endl;
				cout << "  Masukkan pilihan : ";
				cin >> menu_secondary;

				switch(menu_secondary)
				{
					case 1://melihat data detail dari 1 mahasiswa dengan memilih idnya
					{
						cout << "  Masukkan id mahasiswa : ";
						cin >> nid;

						system("cls||clear");
						system("clear");
						cout << endl << "================================================================================\n\n";
						cout << endl << "	Nama Mahasiswa	: " << recMhs[nid-1].getNama() << endl;
						cout << "   NRP 			: " << recMhs[nid-1].getNRP() << endl;
						cout << "   Tanggal Lahir	: " << recMhs[nid-1].getTglLahir() << "/" << recMhs[nid-1].getBulanLahir()<< "/" << recMhs[nid-1].getTahunLahir() << endl;
						cout << "   Departemen		: " << recMhs[nid-1].getDepartemen() << endl;
						cout << "   Tahun Masuk		: " << recMhs[nid-1].gettahunmasuk() << "\n\n";
						cout << "   Detail :\n";
						cout << "   Semester	: " << recMhs[nid-1].getSemester() << endl;
						cout << "   SKS lulus	: " << recMhs[nid-1].getSKSLulus() << "\n";
						cout << "   IPS :\n";
						for (unsigned i=1 ; i <= recMhs[nid-1].getSemester() ; i++)//menampilkan ips tiap semester
						{
							cout << "IPS semester " << i << " : " << recMhs[nid-1].getIPS(i) << endl;
						}
						float ipst = 0;
						for (int i = 1 ; i <= recMhs[nid-1].getSemester() ; i++)//menghitung total ips
						{
							ipst += recMhs[nid-1].getIPS(i);
						}
						cout << "	IPK		: " << ipst/recMhs[nid-1].getSemester() << "\n\n";//menghitung ipk dengan total ips dibagi semester

						cout << "================================================================================\n\n";
						
						int menu3;
						cout << "1. Kembali\n";
						cout << "2. Masukkan detail data mahasiswa\n";
						cout << "3. Menu utama\n";
						cout << "Masukkan pilihan : ";
						cin >> menu3;

						switch(menu3)
						{
							case 1: //kembali ke list mahasiswa
							{
							goto listMhs;
							}
								break;

							case 2://menu untuk memasukkan detail data mahasiswa
							{
								int temp_smt=0, temp_sks=0;
								float temp_ips=0.0;
								cout << "Masukkan detail data mahasiswa : \n";
								cout << "Masukkan semester : ";
								cin >> temp_smt;
								cout << "Masukkan sks lulus : ";
								cin >> temp_sks;
								for (unsigned i=1 ; i <= recMhs[nid-1].getSemester() ; i++)
									{
										cout << endl;
										cout << "Masukkan IPS semester " << i << " : ";
										cin >> temp_ips;
										recMhs[nid-1].setIPS(temp_smt, temp_ips);
										cout << endl;
									}
								recMhs[nid-1].setSemester(temp_smt);
								recMhs[nid-1].setSKSLulus(temp_sks);
							}
							case 3://kembali ke main()
							{
							goto Menuutama;;
							}
								break;

						}
					}
						break;
					
					case 2://kembali ke menu tambah mahasiswa
					{
					goto tambahMhs;
					}
						break;

					case 3://kembali ke main()
					{
					goto Menuutama;
					}
						break;
				}
			}
				break;

			case 5://untuk menampilkan semua daftar dosen hasil dari input case 2
			{
				listDsn:
				system("cls||clear");
				system("clear");

				cout << endl << "================================================================================\n\n";

				for (unsigned i = 0 ; i < recDosen.size() ; i++)//loop untuk menampilkan list dosen
				{
					cout << endl << i+1 << ". Nama Dosen	: " << recDosen[i].getNama() << endl;
					cout << "   NPP 		: " << recDosen[i].getNPP() << "\n";
				}

				cout << endl << "================================================================================\n\n";

				cout << "  Menu	:" << endl;
				cout << "  1. Lihat dosen" << endl;
				cout << "  2. Tambah dosen" <<  endl;
				cout << "  3. Kembali ke menu utama" << endl;
				cout << "  Masukkan pilihan : ";
				cin >> menu_secondary;

				switch(menu_secondary)
				{
					case 1://melihat data detail dari salah satu dosen
					{
						cout << endl << "================================================================================\n\n";
						cout << "  Masukkan id dosen : ";
						cin >> nid;

						system("cls||clear");
						system("clear");
						cout << endl << "================================================================================\n\n";
						cout << endl << "	Nama Dosen		: " << recDosen[nid-1].getNama() << endl;
						cout << "   NPP 			: " << recDosen[nid-1].getNPP() << endl;
						cout << "   Tanggal Lahir	: " << recDosen[nid-1].getTglLahir() << "/" << recDosen[nid-1].getBulanLahir()<< "/" << recDosen[nid-1].getTahunLahir() << endl;
						cout << "   Departemen		: " << recDosen[nid-1].getDepartemen() << endl;
						cout << "   Pendidikan		: " << recDosen[nid-1].getPendidikan() << "\n\n";
						cout << endl << "================================================================================\n\n";

						int menu3;
						cout << "  1. Kembali\n";
						cout << "  2. Menu utama\n";
						cout << "  Masukkan pilihan : ";
						cin >> menu3;

						switch(menu3)
						{
							case 1://kembali ke menu list dosen
							{
								goto listDsn;
							}
								break;

							case 2://kembali ke manu main()
							{
								goto Menuutama;
							}
								break;
						}
					}
						break;
					
					case 2://kembali ke menu tambah dosen
					{
						goto tambahDsn;
					}
						break;

					case 3://kembali ke main()
					{
						goto Menuutama;
					}
						break;

				}
			}
				break;

			case 6://menampilkan semua daftar tendik hasil dari input case 3
			{
				listTndk:
				system("cls||clear");
				system("clear");

				for (unsigned i = 0 ; i < recTendik.size() ; i++)//loop untuk menampilkan tendik
				{
					cout << endl << i+1 << ". Nama Tendik	: " << recTendik[i].getNama() << endl;
					cout << "   NPP 		: " << recTendik[i].getNPP() << "\n";
				}

				cout << endl << "================================================================================\n\n";

				cout << "  Menu	:" << endl;
				cout << "  1. Lihat tendik" << endl;
				cout << "  2. Tambah tendik" <<  endl;
				cout << "  3. Kembali ke menu utama" << endl;
				cout << "  Masukkan pilihan : ";
				cin >> menu_secondary;

				switch(menu_secondary)
				{
					case 1://melihat detail data dari salah satu tendik
					{
						cout << "  Masukkan id tendik : ";
						cin >> nid;

						system("cls||clear");
						system("clear");
						cout << endl << "================================================================================\n\n";
						cout << endl << "	Nama Tendik		: " << recTendik[nid-1].getNama() << endl;
						cout << "   NPP 			: " << recTendik[nid-1].getNPP() << endl;
						cout << "   Tanggal Lahir	: " << recTendik[nid-1].getTglLahir() << "/" << recTendik[nid-1].getBulanLahir()<< "/" << recTendik[nid-1].getTahunLahir() << endl;
						cout << "   Unit			: " << recTendik[nid-1].getUnit() << "\n\n";
						cout << endl << "================================================================================\n\n";

						int menu3;
						cout << "  1. Kembali\n";
						cout << "  2. Menu utama\n";
						cout << "  Masukkan pilihan : ";
						cin >> menu3;

						switch(menu3)
						{
							case 1://kembali ke menu list tendik
							{
								goto listTndk;
							}
								break;

							case 2://kembali ke main()
							{
								goto Menuutama;
							}
								break;

						}
					}
						break;
					
					case 2://kembali ke menu tambah tendik
					{
						goto tambahTndk;
					}
						break;

					case 3://kembali ke main()
					{
						goto Menuutama;
					}
						break;

				}
			}
				break;

			case 7://menu untuk melakukan pengeditan terhadap detail data dari mahasiswa, dosen, dan tendik
			{
				Menuedit:
				system("CLS");
				int menu3;
				cout << endl << "================================================================================\n\n";
				cout << "  Pilih menu	: " << endl;
				cout << "  1. Edit data mahasiswa" << endl;
				cout << "  2. Edit data dosen" << endl;
				cout << "  3. Edit data tendik" << endl;
				cout << "  4. kembali" << endl;
				cout << "  Masukkan opsi :";
				cin >> menu3;
				
				switch(menu3)
				{
					case 1://menu edit detail data mahasiswa
					{
						system("cls||clear");
						int nid, edt;
						cout << endl << "================================================================================\n\n";
						cout << "Daftar id mahasiswa : \n";
						for (unsigned i = 0 ; i < recMhs.size() ; i++)
							{
								cout << endl << i+1 << ".	Nama Mahasiswa	: " << recMhs[i].getNama() << endl;
								cout << "	NRP 		: " << recMhs[i].getNRP() << endl;
							}
						cout << "Pilih id mahasiswa yang ingin di edit : ";
						cin >> nid;
						
						system("cls||clear");
						cout << endl << "================================================================================" << endl;
						cout << "Opsi	:\n";
						cout << "1. Nama Mahasiswa	: " << recMhs[nid-1].getNama() << endl;
						cout << "2. NRP 			: " << recMhs[nid-1].getNRP() << endl;
						cout << "3. Tanggal Lahir	: " << recMhs[nid-1].getTglLahir() << "/" << recMhs[nid-1].getBulanLahir()<< "/" << recMhs[nid-1].getTahunLahir() << endl;
						cout << "4. Departemen		: " << recMhs[nid-1].getDepartemen() << endl;
						cout << "5. Tahun Masuk		: " << recMhs[nid-1].gettahunmasuk() << endl;
						cout << "6. kembali\n\n";
						cout << "Pilih data yang ingin di edit : ";
						cin >> edt;
						cout << "\n\n";

						switch(edt)
						{
							case 1://menu edit nama
							{
								string newnama;
								cout << "	Masukkan nama baru :\n";
								cin.ignore();
								getline(cin, newnama);
								recMhs[nid-1].setNama(newnama);
							}break;
							
							case 2://menu edit NRP
							{
								string newnrp;
								cout << "	Masukkan NRP baru :\n";
								cin >> newnrp;
								recMhs[nid-1].setNRP(newnrp);
							}break;

							case 3://menu edit tanggal, bulan, tahun lahir
							{
								int DD, MM, YY;
								cout << "	Masukkan tanggal lahir yang baru :\n";
								cin >> DD >> MM >> YY;
								recMhs[nid-1].setTglLahir(DD,MM,YY);
							}break;

							case 4://menu edit departemen
							{
								string Dpt;
								cout << "	Masukkan departemen yang baru :\n";
								cin.ignore();
								getline(cin,Dpt);
								recMhs[nid-1].setDepartemen(Dpt);
							}break;

							case 5://menu edit tahun masuk
							{
								int tahun;
								cout << "	masukkan tahun masuk yang baru :\n";
								cin >> tahun;
								recMhs[nid-1].settahunmasuk(tahun);
							}break;

							case 6://kembali ke main menu edit
							{
								goto Menuedit;
							}break;

						}
					}break;

					case 2://menu edit detail data dosen
					{
						system("cls||clear");
						int nid, edt;
						cout << endl << "================================================================================\n\n";
						cout << "Daftar id dosen :\n";
						for (unsigned i = 0 ; i < recDosen.size() ; i++)
							{
								cout << endl << i+1 << ". Nama Dosen	: " << recDosen[i].getNama() << endl;
								cout << "   NPP 		: " << recDosen[i].getNPP() << "\n";
							}
						cout << "Pilih id dosen yang ingin di edit : ";
						cin >> nid;

						system("cls||clear");
						cout << endl << "================================================================================\n\n";
						cout << "Opsi	:\n";
						cout << "1. Nama Dosen		: " << recDosen[nid-1].getNama() << endl;
						cout << "2. NPP 			: " << recDosen[nid-1].getNPP() << endl;
						cout << "3. Tanggal Lahir	: " << recDosen[nid-1].getTglLahir() << "/" << recDosen[nid-1].getBulanLahir()<< "/" << recDosen[nid-1].getTahunLahir() << endl;
						cout << "4. Departemen		: " << recDosen[nid-1].getDepartemen() << endl;
						cout << "5. Pendidikan		: " << recDosen[nid-1].getPendidikan() << "\n";
						cout << "6. Kembali\n\n";
						cout << "Pilih data yang ingin di edit : ";
						cin >> edt;
						cout << "\n\n";

						switch(edt)
						{
							case 1://edit nama dosen
							{
								cout << " Masukkan nama yang baru :\n";
								string newnama;
								cin.ignore();
								getline(cin, newnama);
								recDosen[nid-1].setNama(newnama);
							}break;

							case 2://edit NPP dosen
							{
								string newnpp;
								cout << "	Masukkan NPP baru :\n";
								cin >> newnpp;
								recDosen[nid-1].setNPP(newnpp);
							}break;

							case 3://edit tanggal, bulan, tahun lahir
							{
								int DD, MM, YY;
								cout << "	Masukkan tanggal lahir yang baru :\n";
								cin >> DD >> MM >> YY;
								recDosen[nid-1].setTglLahir(DD,MM,YY);
							}break;

							case 4://edit departemen dosen
							{
								string Dpt;
								cout << "	Masukkan departemen yang baru :\n";
								cin.ignore();
								getline(cin,Dpt);
								recDosen[nid-1].setDepartemen(Dpt);
							}break;

							case 5://edit pendidikan terakhir dosen
							{
								string pnd;
								cout << " Masukkan pendidikan yang baru :\n";
								cin.ignore();
								getline(cin,pnd);
								recDosen[nid-1].setPendidikan(pnd);
							}break;

							case 6://kembali ke menu edit
							{
								goto Menuedit;
							}break;
						}

					}break;

					case 3://menu edit detail data tendik
					{
						system("cls||clear");
						int nid, edt;
						cout << endl << "================================================================================\n\n";
						cout << "Daftar id tendik :\n";
						for (unsigned i = 0 ; i < recTendik.size() ; i++)
							{
								cout << endl << i+1 << ". Nama Tendik	: " << recTendik[i].getNama() << endl;
								cout << "   NPP 		: " << recTendik[i].getNPP() << "\n";
							}
						cout << "Pilih id tendik yang ingin di edit : ";
						cin >> nid;

						system("cls||clear");
						cout << endl << "================================================================================\n\n";
						cout << "Opsi	:\n";
						cout << "1. Nama Tendik		: " << recTendik[nid-1].getNama() << endl;
						cout << "2. NPP 				: " << recTendik[nid-1].getNPP() << endl;
						cout << "3. Tanggal Lahir	: " << recTendik[nid-1].getTglLahir() << "/" << recTendik[nid-1].getBulanLahir()<< "/" << recTendik[nid-1].getTahunLahir() << endl;
						cout << "4. Unit				: " << recTendik[nid-1].getUnit() << "\n\n";
						cout << "5. Kembali\n";
						cout << "Pilih data yang ingin di edit : ";
						cin >> edt;
						cout << "\n\n";

						switch (edt)
						{
							case 1://edit nama tendik
							{
								cout << " Masukkan nama yang baru :\n";
								string newnama;
								cin.ignore();
								getline(cin, newnama);
								recTendik[nid-1].setNama(newnama);
							}break;

							case 2://edit NPP tendik
							{
								string newnpp;
								cout << "	Masukkan NPP baru :\n";
								cin >> newnpp;
								recTendik[nid-1].setNPP(newnpp);
							}break;

							case 3://edit tanggal, bulan, tahun lahir
							{
								int DD, MM, YY;
								cout << "	Masukkan tanggal lahir yang baru :\n";
								cin >> DD >> MM >> YY;
								recTendik[nid-1].setTglLahir(DD,MM,YY);
							}break;

							case 4://edit unit tendik
							{
								string unt;
								cout << "	masukkan unit yang baru :\n";
								cin.ignore();
								getline(cin, unt);
								recTendik[nid-1].setUnit(unt);
							}break;

							case 5://kembali ke menu utama edit
							{
								goto Menuedit;
							}break;

						}
					}break;

					case 4://kembali ke main()
					{
						goto Menuutama;
					}break;

				}
			}break;

		}
	}
	return 0;
}