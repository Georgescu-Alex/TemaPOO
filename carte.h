#pragma once
#include <iostream>
#include <vector>
//#include <memory>
#include <exception>

class carte
{
private:
	std::string nume_carte = "";
	int nr_volume = 0;
	std::vector<int> nr_pagini_vol = {};
	std::vector<float> rating_vol = {};
	int nr_pagini_total = 0;
	float medie_rating = 0, medie_pagini = 0;

public:
	carte(std::string nume_carte, int nr_volume, const std::vector<int> nr_pagini_vol, const std::vector<float> rating_vol);
	//carte(carte& cc);
	~carte();
	//carte& operator=(const carte& eop);
	friend std::ostream& operator<<(std::ostream& out, const carte& carte);
	int Nr_total_pagini(int nr_pagini_total);
	float Medie_rating(float medie_rating);
	float Medie_pagini(float medie_pagini, int nr_pagini_total);
	void afisare();
};