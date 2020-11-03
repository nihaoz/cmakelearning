/*
 * @Author: TICA:zyh
 * @Date: 2020-10-29 20:37:31
 * @LastEditor: TICA:zyh
 * @LastEditTime: 2020-10-29 20:53:14
 * @FilePath: /cmakelearning/backup/cmake/t5/src/main.c
 * @Email: 369023466@qq.com
 */
#include <curl/curl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
FILE *fp;
int write_data(void *ptr, size_t size, size_t nmemb, void *stream)
{
int written = fwrite(ptr, size, nmemb, (FILE *)fp);
return written;
}
int main()
{
    const char * path = "./curl-test";
    const char * mode = "w";
    fp = fopen(path,mode);
    curl_global_init(CURL_GLOBAL_ALL);
    CURLcode res;
    CURL *curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL, "http://www.baidu.com");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
    curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);
    res = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
}