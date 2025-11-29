#include <iostream>
using namespace std;

// int main() {
//     int arr[] = {5, 1, 4, 2, 8};
//     int n = 5;

//     for (int i = 0; i < n - 1 ; i++) {
//         for (int j = 0; j <  n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }

//     for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
// }
//     return 0;
// }
//=============================================================
// int main() {
//     int arr[] = {5, 1, 4, 2, 8};
//     int n = 5;    
// // Descending Order
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - i - 1; j++) {
//             if(arr[j] < arr[j + 1]) {   // Compare for descending
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }

//     cout << "Descending Order: ";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }
//=============================================================
// Optimized Bubble Sort
// int main() {
//     int arr[] = {5, 1, 4, 2, 8};
//     int n = 5;
//     bool swapped;
//     for (int i = 0; i < n - 1; i++) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         // If no two elements were swapped in the inner loop, then break
//         if (!swapped)
//             break;
//     }

//     cout << "Optimized Bubble Sort: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;

//     return 0;
// }
//==================Student Scores Sorting==========================
// int main(){
//     int scores[] = {78, 92, 85, 66, 90, 74, 88, 95, 80, 83};
//     int n = sizeof(scores) / sizeof(scores[0]);
//     for(int i = 0; i < n-1; i++){
//         for(int j=0; j < n - i - 1; j++ ){
//             if(scores[j] < scores[j+1] )
//             swap(scores[j],scores[j+1]);
//         }
//     }
//     for (int i = 0; i < n; i++)
//         cout << scores[i] << " ";
//         cout << endl;
//     // top 3 scores
//     cout <<"TOP SCORES" << endl;
//     for(int i=0; i <= 2; i++){
//         cout << scores[i] << " " << endl;
//     }
// }
