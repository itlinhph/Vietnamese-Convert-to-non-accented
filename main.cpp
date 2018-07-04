#include <iostream>
#include <string>
#include <regex>
#include <iterator>
using namespace std ;

int main ()
{

    string s ("Sô Nha ̀ 223-khu phố 1 phường phước bình Thị xã Phước Long, Bình Phước");
    
    regex special ("[^0-9a-zA-Z]+"); 
    regex a ("á|à|ạ|ả|ã|â|ấ|ầ|ậ|ẩ|ẫ|ă|ắ|ằ|ặ|ẳ|ẵ|à"); 
    regex e ("é|è|ẹ|ẻ|ẽ|ê|ề|ế|ể|ễ|ệ|È|É|Ẻ|Ẽ|Ẹ|Ề|Ế|Ể|Ễ|Ệ");
    regex u ("ú|ù|ụ|ủ|ũ|Ú|Ù|Ụ|Ủ|Ũ|ư|ứ|ừ|ự|ử|ữ|Ư|Ứ|Ừ|Ự|Ử|Ữ");
    regex o ("ó|ò|ọ|ỏ|õ|Ó|Ò|Ọ|Ỏ|Õ|ô|ố|ồ|ộ|ổ|ỗ|ơ|ớ|ờ|ợ|ở|ỡ|ộ|Ô|Ố|Ồ|Ộ|Ổ|Ỗ|Ơ|Ớ|Ờ|Ợ|Ở");
    regex i ("í|ì|ị|ỉ|ĩ|Í|Ì|Ị|Ỉ|Ĩ");
    regex y ("ý|ỳ|ỵ|ỷ|ỹ|Ý|Ỳ|Ỵ|Ỹ|Ỷ");
    regex d ("đ|Đ");

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    // cout << s << std::endl ;

    s = regex_replace (s,a,"a");
    s = regex_replace (s,e,"e");
    s = regex_replace (s,u,"u");
    s = regex_replace (s,o,"o");
    s = regex_replace (s,i,"i");
    s = regex_replace (s,y,"y");
    s = regex_replace (s,d,"d");
    s= regex_replace(s, special, " ");
    
    cout << s << std::endl ;

  return 0;
}