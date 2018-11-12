#ifndef XERXES_HTTP_H
#define XERXES_HTTP_H

#include <string>
#include <vector>
#include "utils.h"

struct httphdr{
    std::string method{};
    std::string path{};
    std::string useragent{};
    std::string cache_control{};
    std::string encoding{};
    std::string charset[2]{};
    std::string referer{};
    std::string content_type{};
    std::string cookie[2]{};
    std::string connection_type{};
    int keep_alive = 0;
    int DNT = 0;
    std::string accept{};
    int content_length = 0;
};

namespace http{

    namespace randomizer{

        void random_referer(std::string& src);

        void random_useragent(std::string& src);

        void random_encoding(std::string& src);

        void random_caching(std::string& src);

        void random_charset(std::string& src);

        void random_contenttype(std::string& src);

        void random_method(std::string& src);
    }

    void hdr_gen(httphdr& hdr, std::string& str);

    static void load_usr(std::vector<std::string>& useragents);
}

#endif //XERXES_HTTP_H
