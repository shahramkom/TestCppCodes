// TestCPP.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>

template <class T>
void func(T t)
{
	printf("%d", sizeof(t));
}

int main()
{
// 	auto inp = getchar();
// 	func(inp);


	uint64_t arr[5], i;

	printf("Size of integer in this compiler is %u\n", sizeof(uint64_t));

	for (i = 0; i < 5; i++)
		// The use of '&' before a variable name, yields
		// address of variable.
		cout << "Address arr" << i << " is " << &arr[i] << endl;



	getchar();
}


auto mainT() -> int
{
	return 0;
}

auto test () -> string
{
	
	return  "sabz";
}

//#pragma comment(lib, "windowsapp")
//#include "winrt/Windows.Foundation.Metadata.h"
// 
//using namespace winrt;
//using namespace Windows::Foundation::Metadata;
// 
//int mainSp()
//{
//    init_apartment();
// 
//    bool const rs4 = ApiInformation::IsApiContractPresent(L"Windows.Foundation.UniversalApiContract", 6);
// 
//    printf("Am I running on Redstone 4? %s\n", rs4 ? "Yes!" : "No. :(");
//}