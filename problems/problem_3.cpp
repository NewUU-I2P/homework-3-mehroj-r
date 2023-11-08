#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here
    std::string heightReport;

    if (S == 'M'){
        if (height < 1.7){
            heightReport = "Short";
        } else if (height >= 1.7 && height < 1.85){
            heightReport = "Normal";
        } else if (height >= 1.85){
            heightReport = "Tall";
        }
    } else if (S == 'F'){
        if (height < 1.6){
            heightReport = "Short";
        } else if (height >= 1.6 && height < 1.75){
            heightReport = "Normal";
        } else if (height >= 1.75){
            heightReport = "Tall";
        }
    }

    return heightReport;
    // use return to return your result
    // make use of control flow statements
}