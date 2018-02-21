//ex11.33将1个文件里的单词替换为另一个文件里的单词.  单词转换程序。
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<map>
#include<sstream>
using namespace std;
map<string,string> bulidMap(ifstream&map_file){
	map<string, string>trans_map;
	string key;
	string value;
	while (map_file >> key&&getline(map_file, value))
		if (value.size() > 1)
			trans_map[key] = value.substr(1);
		else
			throw runtime_error("no rule for" + key);
	return trans_map;
}
const string& transform(const string&s, const map<string, string>&m){
	auto map_it = m.find(s);
	if (map_it != m.cend())
		return map_it->second;
	else return s;
}
void word_transform(ifstream&map_file, ifstream&input){
	auto trans_map = bulidMap(map_file); //保存转换规则
	string text;
	while (getline(input, text)){  
		istringstream stream(text);
		string word;
		bool firstword = true;
		while (stream >> word){
			if (firstword)firstword = false;
			else cout << " ";
			cout << transform(word, trans_map);
		}
		cout << endl;
	}
}


int main(){
	ifstream map_file, input;
	map_file.open("F:\\keshanchu\\111.txt");
	input.open("F:\\keshanchu\\222.txt");
	if (!map_file.is_open() && !input.is_open()){
		cout << "can't open the file" << endl;
	}
	else{
		word_transform(map_file, input);
		map_file.close();
		input.close();
	}
	return 0;
}