
/*
 *
 * 100 - The The 3n + 1 problem
 * -Proceso matemático
 * Si n es par, dividirlo entre dos, si no multiplicarlo por 3 y sumarle uno
   Hallar el número al cual hay que hacerle más veces ese proceso en un rango dado
 * */
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <time.h>
#include <sys/time.h>

void resolver(int a, int b);
void resolver2(int a, int b);

std::map<int,int> memoMap;
std::list<int> memoList;
std::list<int>::iterator it;

int main(){

    int a, b;
    memoMap[1]=1;
    while(std::cin >> a >> b){
        resolver2(a,b);

        //resolver(a ,b);

    }
}

        

//memoria con map y list
void resolver(int a, int b){

    struct timeval t1, t2;
    gettimeofday(&t1, NULL);


    int max = 0, count = 0,n;
    int menor =std::min(a,b);
    int mayor =std::max(a,b);

    for(int i = mayor; i>= menor; i--){

        if(memoMap.count(i)){
            count = memoMap[i];
             //std::cout<<"ya estaba hecho"<<n<<" "<<count<<std::endl;
        } else {
            n = i;
            count =1;
            // std::cout<<"uno nuevo "<<n<< std::endl;
            while(n != 1){


                    memoList.push_back(n);
                    if(n % 2 == 0){
                        n = n/2;
                    } else {
                        n = 3*n + 1;
                    }

                    if(memoMap.count(n)){
                        count += memoMap[n];
                        //std::cout<<"nos saltamos "<<n<<std::endl;
                        break;
                    }
                    count ++;
                    //138367




            }

           // memoList.push_back(1);
            int aux = count;
            for (it=memoList.begin(); it!=memoList.end(); ++it){
                memoMap[*it] = aux;
                 //std::cout<<"nuevos valores "<<*it<<" = "<<memoMap[*it]<<std::endl;
                aux --;
            }
            memoList.clear();
        }
        if(count > max){
            max = count;

        }




    }
    //std::cout<<"no toco hacer el proceso para "<<notoco<<std::endl;
    std::cout<< a <<" " <<b <<" "<<  max <<std::endl;

     /* gettimeofday(&t2, NULL);
      int milliSeconds = (t2.tv_sec - t1.tv_sec) * 1000 + (t2.tv_usec - t1.tv_usec)/1000;

      std::cout<<"optimizado "<<milliSeconds<<std::endl;*/
}


//enfoque lineal
void resolver2(int a, int b){

    struct timeval t1, t2;
    gettimeofday(&t1, NULL);


    int max = 0, count = 0,n;
    int menor =std::min(a,b);
    int mayor =std::max(a,b);

    for(int i = mayor; i>= menor; i--){
        n = i;
        count =1;

            while(n != 1){


                    if(n % 2 == 0){
                        n = n/2;
                    } else {
                        n = 3*n + 1;
                    }
                    count ++;





            }
            if(count > max){
                max = count;

            }

        }






    //std::cout<<"no toco hacer el proceso para "<<notoco<<std::endl;
    std::cout<< a <<" " <<b <<" "<<  max <<std::endl;

    /*  gettimeofday(&t2, NULL);
      int milliSeconds = (t2.tv_sec - t1.tv_sec) * 1000 + (t2.tv_usec - t1.tv_usec)/1000;

      std::cout<<"no optmizado "<<milliSeconds<<std::endl;*/
}


