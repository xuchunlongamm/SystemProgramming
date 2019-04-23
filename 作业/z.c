/*************************************************************************
	> File Name: z.c
	> Author:xcl 
	> Mail:2939720340@qq.com 
	> Created Time: 2019年04月23日 星期二 19时29分05秒
 ************************************************************************/

#include <stdio.h>
#include <pwd.h>
#include <unistd.h>
#include <stdlib.h>
int main() {
    struct passwd *pwd;
    pwd = getpwuid(getuid());
    char hostname[32 + 1];
    gethostname(hostname, sizeof(hostname));
    char buf[80];
    getcwd(buf, sizeof(buf));
    printf("\033[32m%s@%s:%s\033[1m\n", pwd->pw_name,hostname, buf);
    return 0;
}
