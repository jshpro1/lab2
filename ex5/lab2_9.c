#include <iostream>
#include <vector>

int main() {
	   
      	int rows, columns;

	std::cout << "행렬의 행 수 입력: ";
	std::cin >> rows;
	std::cout << "행렬의 열 수 입력: ";
	std::cin >> columns;

	// 두 개의 행렬과 결과 행렬을 선언하고 크기를 할당
	std::vector<std::vector<int>> matrix1(rows, std::vector<int>(columns));
	std::vector<std::vector<int>> matrix2(rows, std::vector<int>(columns));
	std::vector<std::vector<int>> result(rows, std::vector<int>(columns));
	
	std::cout << "첫 번째 행렬을 입력하세요:\n";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cin >> matrix1[i][j];
		}
	}

	std::cout << "두 번째 행렬을 입력하세요:\n";
	
   	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cin >> matrix2[i][j];		   			  
	    	}
	}


    	for (int i = 0; i < rows; i++) {
    		for (int j = 0; j < columns; j++) {
    			result[i][j] = matrix1[i][j] + matrix2[i][j];
    		}
    	}


      	std::cout << "결과 행렬:\n";
      	for (int i = 0; i < rows; i++) {
	     for (int j = 0; j < columns; j++) {		     
   			     std::cout << result[i][j] << " ";
		 }		            	
	    std::cout << std::end
	}
   return 0;
}
