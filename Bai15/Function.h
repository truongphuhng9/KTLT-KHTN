#ifndef __FUNCTION_H__
#define __FUNCTION_H__

// Định nghĩa 1 số hằng số độ dài chuỗi
#define MAX_ID_LENGHT 7
#define MAX_TITLE_LENGHT 50
#define MAX_AUTHOR_LENGHT 50
#define MAX_NXB_LENGHT 50

typedef struct Sach {
	char ma[MAX_ID_LENGHT + 1];
	char ten[MAX_TITLE_LENGHT + 1];
	char tac_gia[MAX_AUTHOR_LENGHT + 1];
	char nxb[MAX_NXB_LENGHT + 1];
	float gia;
	int so_trang;
	int nam_xb;
};

// Hàm nhập thông tin 1 quyển sách
int nhapSach(Sach& q);

// Hàm xuất thông tin 1 quyển sách
int inSach(Sach q);

// Hàm nhập số lượng các quyển sách
int nhapDanhSach(Sach* ds, int sl);

// Xuất ra màn hình thông tin các quyển sách
int inDanhSach(Sach* ds, int sl);

// Sắp xếp sách theo năm xuất bản tăng dần
int sapXep(Sach* ds, int sl);

// Tìm kiếm sách ít hơn k trang có giá cao nhất trong mảng
Sach timKiem(Sach* ds, int sl, int so_trang);

// Thêm 1 quyển sách vào vị trí người dùng nhập vào
int themSach(Sach* ds, int sl, Sach quyen, int vi_tri);

// Xóa sách có năm xuất bản trước năm chỉ định
int xoaSach(Sach* ds, int nam_xb);

#endif // !__FUNCTION_H__
