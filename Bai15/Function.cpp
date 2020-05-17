#include <iostream>
#include "Function.h"

using namespace std;

int nhapSach(Sach& q) {
	cout << "Ma sach: ";
	cin.getline(q.ma, MAX_ID_LENGHT);
	cout << "Ten sach:";
	cin.getline(q.ten, MAX_TITLE_LENGHT);
	cout << "Tac gia:";
	cin.getline(q.tac_gia, MAX_AUTHOR_LENGHT);
	cout << "Nha xuat ban:";
	cin.getline(q.nxb, MAX_NXB_LENGHT);
	cout << "Gia sach:";
	cin >> q.gia;
	cout << "So trang:";
	cin >> q.so_trang;
	cout << "Nam xuat ban:";
	cin >> q.nam_xb;

	// Nhap sach thanh cong
	return 0;
}

int inSach(Sach q) {
	cout << "Ma sach: " << q.ma << '\n';
	cout << "Ten sach: " << q.ten << '\n';
	cout << "Tac gia: " << q.tac_gia << '\n';
	cout << "Nha xuat ban: " << q.nxb << '\n';
	cout << "Gia sach: " << q.gia << '\n';
	cout << "So trang: " << q.so_trang << '\n';
	cout << "Nam xuat ban: " << q.nam_xb << '\n';

	// In sach thanh cong
	return 0;
}

int nhapDanhSach(Sach* ds, int sl) {

	for (int i = 0; i < sl; i++) {
		cout << "--Quyen " << i + 1 << "--\n";
		nhapSach(ds[i]);
	}

	return 0;
}

int inDanhSach(Sach* ds, int sl) {
	for (int i = 0; i < sl; i++) {
		cout << "--Quyen " << i + 1 << "--\n";
		inSach(ds[i]);
	}

	return 0;
}

int swap(Sach& a, Sach& b) {
	Sach temp;
	Sach temp = a;
	a = b;
	b = temp;
}

int sapXep(Sach* ds, int sl) {
	// Bubble sort
	for (int i = 0; i < sl - 1; i++) {
		for (int j = i; j < sl - 1; j++) {
			// compare
			if (ds[j].nam_xb > ds[j + 1].nam_xb) {
				swap(ds[j], ds[j + 1]);
			}
		}
	}

	return 0;
}

Sach timKiem(Sach* ds, int sl, int so_trang) {
	int gia_cao_nhat = ds[0].gia;
	int vi_tri = 0;

	for (int i = 0; i < sl; i++) {
		if (ds[i].so_trang < so_trang && ds[i].gia > gia_cao_nhat) {
			gia_cao_nhat = ds[i].gia;
			vi_tri = i;
		}
	}

	return ds[vi_tri];
}

int themSach(Sach* ds, int sl, Sach quyen, int vi_tri) {
	if (vi_tri > sl) {
		cout << "Vi tri nam ngoai danh sach!\n";
		return 1;
	}

	if (ds[vi_tri - 1].ma) {
		cout << "Vi tri nay da co sach!\n";
		return 2;
	}

	nhapSach(ds[vi_tri - 1]);

	return 0;
}

int xoaSach(Sach* ds, int nam_xb) {

}

