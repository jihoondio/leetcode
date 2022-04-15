double average(int* salary, int salarySize){
    int min_sal = 10000000;
    int max_sal = 0;
    double sum_sal = 0;
    for (int i = 0; i < salarySize; i++) {
        int sal = salary[i];
        if (sal > max_sal) max_sal = sal;
        if (sal < min_sal) min_sal = sal;
        sum_sal += sal;
    }
    
    sum_sal -= min_sal;
    sum_sal -= max_sal;
    return (double)sum_sal / (salarySize - 2);
}