#pragma once


#ifdef _DEBUG
	#pragma comment(lib, "cximage_mtd.lib")
	#pragma comment(lib, "jasper_mtd.lib")
	#pragma comment(lib, "jbig_mtd.lib")
	#pragma comment(lib, "jpeg_mtd.lib")
	#pragma comment(lib, "libdcr_mtd.lib")
	#pragma comment(lib, "libpsd_mtd.lib")
	#pragma comment(lib, "mng_mtd.lib")
	#pragma comment(lib, "png_mtd.lib")
	#pragma comment(lib, "tiff_mtd.lib")
	#pragma comment(lib, "zlib_mtd.lib")
#else
	#pragma comment(lib, "cximage_mt.lib")
	#pragma comment(lib, "jasper_mt.lib")
	#pragma comment(lib, "jbig_mt.lib")
	#pragma comment(lib, "jpeg_mt.lib")
	#pragma comment(lib, "libdcr_mt.lib")
	#pragma comment(lib, "libpsd_mt.lib")
	#pragma comment(lib, "mng_mt.lib")
	#pragma comment(lib, "png_mt.lib")
	#pragma comment(lib, "tiff_mt.lib")
	#pragma comment(lib, "zlib_mt.lib")
#endif
