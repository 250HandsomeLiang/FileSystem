#ifndef _TYPES_H_
#define _TYPES_H_

#define MAX_NAME_LEN    128     

#define NEWFS_ERROR_NONE          0
typedef enum file_type {
    FILE,           // 普通文件
    DIR             // 目录文件
} FILE_TYPE;


struct custom_options {
	const char*        device;
};

struct newfs_super {
    uint32_t magic;
    int      fd;
    /* TODO: Define yourself */
};

struct newfs_inode {
    uint32_t ino;
    /* TODO: Define yourself */
};

struct newfs_dentry {
    char     name[MAX_NAME_LEN];
    uint32_t ino;
    /* TODO: Define yourself */
};

#endif /* _TYPES_H_ */