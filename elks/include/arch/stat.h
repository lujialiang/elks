#ifndef LX86_ARCH_STAT_H
#define LX86_ARCH_STAT_H

#include <linuxmt/types.h>

struct stat {
    dev_t	st_dev;
#ifdef CONFIG_32BIT_INODES
    __u16	st_ino;
#else
    ino_t	st_ino;
#endif
    mode_t	st_mode;
    nlink_t	st_nlink;
    uid_t	st_uid;
    gid_t	st_gid;
    dev_t	st_rdev;
    off_t	st_size;
    time_t	st_atime;
    time_t	st_mtime;
    time_t	st_ctime;
};

#endif
