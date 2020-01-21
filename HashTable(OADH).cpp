// HashTable(OADH).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Hash_table.h"
#include "Prime.h"



int main()
{
	char* answer = NULL;


	std::cout << "Hello World!\n"; 

	ht_hash_table* ht = ht_new();
	std::cout << "Hash table has been created!\n";
	ht_del_hash_table(ht);
	std::cout << "Hash table has been deleted!\n";
	
	
	ht_hash_table* ht1 = ht_new();
	ht_insert(ht1, "key1", "potato is better than cabbage");
	ht_insert(ht1, "key2", "abracadabra");
	ht_insert(ht1, "key3", "this sentence on key3");
	
	answer=ht_search(ht, "key3");
	std::cout << answer << std::endl;
	ht_del_hash_table(ht1);
	std::cout << "Hash table has been deleted!\n";

}
