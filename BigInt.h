#ifndef BIGINT_H
#define BIGINT_H

#include <vector>
#include <string>
using namespace std;

class BigInt{
private:
    vector<int>digits;
public:
    
    BigInt() {}
    BigInt(string num) {
        for (int i = num.length(); i > 0; i -= 9) {
            int start = std::max(0, i - 9);
            int len = i - start;
            digits.push_back(stoi(num.substr(start, len)));
        }
    }

    BigInt(const BigInt &other) {
        digits = other.digits;
    }

    friend istream& operator>>(istream& in, BigInt& num);
    friend ostream& operator<<(ostream& out,const BigInt& num);

};

istream& operator>>(istream& in, BigInt& num) {
    std::string s;
    in >> s;
    num=BigInt(s);
    return in;
}
ostream& operator<<(ostream& out,const BigInt& num) {
    if (num.digits.empty()) {
        out << 0;
        return out;
    }
    
    out << num.digits.back();

    for (int i = num.digits.size() - 2; i >= 0; i--) {
        string part = to_string(num.digits[i]);
        out << string(9 - part.length(), '0') << part;
    }

    return out;
}


#endif