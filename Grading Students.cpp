vector<int> gradingStudents(vector<int> grades) {
    for (unsigned i = 0; i < grades.size(); i++) {
        if (grades[i] >= 38) {
            if ((grades[i] + 1) % 5 == 0) {
                grades[i] = grades[i] + 1;
            }
            else if ((grades[i] + 2) % 5 == 0) {
               grades[i] = grades[i] + 2; 
            }
            else {
                grades[i] = grades[i];
            }
        }
        
        else if (grades[i] < 38) {
            grades[i] = grades[i];
        };
    };
    return grades;
};
