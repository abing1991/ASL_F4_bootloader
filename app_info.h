#ifndef _APP_INFO_H_
#define _APP_INFO_H_

#include <stdint.h>

struct app_info_block {
	uint32_t magic_number;
	uint32_t start_addr;
	uint32_t app_len;
	uint32_t app_crc;
	uint32_t info_crc;
};

#define APP_INFO_MAGIC_NUMBER  (0xDEADFA11)
#endif
