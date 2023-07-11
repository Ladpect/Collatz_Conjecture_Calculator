
#include <iostream>
#include <vector>
#include <string>
int main()
{
    int a; //첫번째 자연수를 담을 변수
    std::vector<int> array;
    std::cout << "콜라츠 추측 계산기에 온 것을 환영합니다.\n처음으로 시작할 자연수를 입력해주세요. : ";
    std::cin >> a;
    try {
        if (a <= 0) throw a;
        array.push_back(a);
        while (a != 1)
            {
                if (a % 2 == 1)
                {
                    a = a * 3 + 1;
                }
                else
                {
                    a = a / 2;
                }
                array.push_back(a);
            }
        int cho;
        std::cout << "결과값들은 총 " << int(array.size()) << "개 입니다.\n";
        std::cout << "모든 항의 합을 출력하려면 1을 입력하세요. \n";
        std::cout << "모든 항을 출력하려면 2를 입력하세요. \n";
        std::cout << "제 n항의 값을 출력하려면 3을 입력하세요. \n";
        std::cout << "제 n항까지의 합을 출력하려면 4을 입력하세요. \n";
        std::cin >> cho;

        switch (cho) {
        case 1:
        {
            int sum = 0;
            for (int i = 0; i < array.size(); i++)
            {
                sum = sum + array[i];
            }
            std::cout << "모든 항의 총합은 " << sum << "입니다.";
            return 0;
        }
        case 2:
        {
            for (int i = 0; i < array.size(); i++)
            {
                std::cout << array[i] << " ";
            }
            return 0;
        }
        case 3:
        {
            int an;
            std::cout << "제 n번째 항을 출력합니다. (n 입력): ";
            std::cin >> an;
            try {
                if (an > array.size()) throw an;
                std::cout << "제 " << an << "번째 항은 " << array[an - 1] << "입니다.";
            }
            catch (int exception) {
                std::cout << "범위를 벗어났거나, 자연수가 아닙니다.";
            }
            return 0;
        }
        case 4:
        {
            int sn;
            std::cout << "제 n번째 항까지의 합을 구합니다.(n 입력) : ";
            std::cin >> sn;
            try {
                if (sn > array.size()) throw sn;
                int sum_sn = 0;
                for (int i = 0; i < sn; i++)
                {
                    sum_sn = sum_sn + array[i];
                }
                std::cout << "제 " << sn << "항까지의 합은 " << sum_sn << "입니다.";
            }
            catch (int exception) {
                std::cout << "범위를 벗어났거나, 자연수가 아닙니다.";
            }
            return 0;
        }

        }


    }
    catch (int exception) 
    {
        std::cout << "예외 발생. 자연수가 아닙니다.";
    }

    
    
}
