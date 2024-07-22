#include <iostream>
#include <list> // библиотека, хранящая в себе реализацию класса list.
#include <map> // библиотека, хранящая в себе реализацию класса map ( ассоциативная коллекция ).
#include <string>



int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	// Класс list

	/*std::list<int> list1;
	list1.push_back(7);
	list1.push_back(105);
	list1.push_back(42);
	list1.push_front(555);*/
	/*list1.pop_back();
	list1.pop_front();*/
	
	// std::list<int>::const_iterator, заменяет на auto
	/*for (auto it = list1.cbegin(); it != list1.cend(); ++it)*/ // можно заменить auto el.
	/*for (auto el : list1) // цикл foreach
		std::cout << el << ' ';
	std::cout << std::endl;

	auto place = list1.begin();
	std::advance(place, 3);
	list1.insert(place, 1000);

	std::cout << *place << std::endl;

	place = list1.begin();
	++place;
	list1.erase(place);


	for (auto el : list1) // цикл foreach
		std::cout << el << ' ';
	std::cout << std::endl;
	*/
	
	// Класс map
	std::pair<int, std::string> pair(11, "Hello");
	std::cout << pair.first << std::endl; // 11
	std::cout << pair.second << std::endl; // "Hello"

	std::map<std::string, int> map1;
	map1.insert(std::pair<std::string, int>("Drax", 41));
	map1.insert(std::make_pair("Thanos", 57)); // позволяет добавить pair.
	map1.emplace("Tony", 54);   // обладает разнымы дополнительными настройками.
	map1["Steph Rodgers"] = 44; // самый простой и удобный.
	
	//map1[pair.second] = pair.first;
	std::cout << map1["Thanos"] << std::endl;
	std::cout << map1.find("Tony")->first << std::endl;
	std::cout << map1.find("Tony")->second << std::endl;
	map1.erase("Thanos");
	//auto para = map1.find("Hello");
	map1.emplace("Drax", 20); // не отработает
	map1["Drax"] = 30; // может поменять значение у существуещего поля.
	
	for (auto key : map1)
		std::cout << key.first << " is " << key.second<< " years old" << std::endl;
	return 0;
}