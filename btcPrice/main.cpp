#include <iostream>
#include <stdio.h>
#include "json.hpp"
#include <curl/curl.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main() {
    CURL *curl = curl_easy_init();
    if(curl) {
      CURLcode res;
      curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
      res = curl_easy_perform(curl);
      curl_easy_cleanup(curl);
    }
    return 0;
}
