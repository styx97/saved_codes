#include <iostream>
#include <vector> 

// in place sorting

void quicksort(std::vector<int>&,int,int);
int Partition(std::vector<int>&,int,int);

int Partition(std::vector<int>& A,int begin,int end) {
    int pivot = A[end-1];   //considering the last element to be the pivot 
    int i = begin;
    int partitionIndex = begin;
    
    for (i;i<end-1;i++) {
        if (A[i] <= pivot )   {
            
            std::swap(A[i],A[partitionIndex]);
            partitionIndex++ ;
        }
    }
    std::swap(A[partitionIndex],A[end-1]);
    return partitionIndex;

}

void quicksort(std::vector<int>& A,int begin,int end) {
    int partitionIndex;
    if (end>begin) {
        partitionIndex = Partition(A,begin,end);
        quicksort(A,begin,partitionIndex);
        quicksort(A,partitionIndex+1,end);
    
    }
}




int main() {
    std::vector<int>  A =  {12,23,1,23,45,675,57,12,2};
    int start = 0;
    int stop = 9;

    for (auto e: A)
        std::cout << e << " ";
    std::cout << "\n";

    quicksort(A,start,stop);
    
    for (auto e: A)
        std::cout << e << " " ;
    std::cout << "\n";
    
}
