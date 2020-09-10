//#include<iostream>
//#include<ctime>
//using namespace std;
//
//void Display(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//int swp = 0;
//int  comp = 0; 
//int oper = 0;
//void sort(int arr[],int size)
//{
//	oper++;
//	for (int i =0; i<size; i++)
//	{
//		if (arr[i]>arr[size-1])
//		{
//			swap(arr[size-1],arr[i]);
//			swp++;;
//			oper++;
//			oper++;
//		}
//		oper++;
//		oper++;
//		comp++;
//	}
//	oper++;
//}
//void BubbleSort(int arr[], int size)
//{
//	if (size == 1)
//	{
//		return;
//	}
//
//	BubbleSort(arr, size - 1);
//	sort(arr, size);
//
//	
//}
//int sortArray(int x[], const int SIZE) {
//	int i, j, temp;
//	int oprs = 0;
//
//	oprs++; // i=0;
//	for (i = 1; i<SIZE - 1; i++)
//	{
//		comp++;
//		oprs += 2; // i<SIZE-1 and i++
//		oprs++; // j=0
//		for (j = i; j<SIZE - 1; j *= 2)
//		{
//			comp++;
//			oprs += 2; // j<SIZE-1 and j++
//			oprs++; // if condition
//			comp++;
//			if (x[j]>x[j + 1])
//			{
//				temp = x[j];
//				x[j] = x[j + 1];
//				x[j + 1] = temp;
//				oprs += 3; // above three lines
//			}
//		}
//		oprs++; // last j<SIZE evalueted to false for loop termination
//	}
//	oprs++; // last i<SIZE evalueted to false for loop termination
//
//	return oprs;
//}
//void rInitArray(int x[], const int SIZE) {
//	srand(time(NULL));
//	int i, j;
//	for (i = 0; i<SIZE; i++)
//		x[i] = rand() % 1000;
//}
//
//int main()
//{
//	
//	int arr[] = { 7,6,4,8 };
//	BubbleSort(arr, 4);
//	Display(arr, 4);
//	cout << "No of Comparisons: " << comp << endl;
//	cout << "No of Swapings: " << swp << endl;
//	cout << "No of operators used: " << oper << endl;
//	///////////////////////////////////
//	for (int SIZE = 10; SIZE <= 100; SIZE += 10)
//	{
//		int *x = new int[SIZE];
//		rInitArray(x, SIZE);
//		int scount = sortArray(x, SIZE);
//		cout << SIZE << "\t" << scount << endl;
//		delete[] x;
//	}
//	return 0;
//}