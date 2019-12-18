
void cube(double* x) {
    *x = *x * *x * *x;
}


//void cube(const double* x)  //  ошибка



void cube(double& x) {
    x = x * x * x;
}

//void cube(const double& x) // ошибка

//void cube(double) //  не возвращает значение

//void cube(const double)  // не возвращает значение
