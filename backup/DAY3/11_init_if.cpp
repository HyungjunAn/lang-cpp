int foo() { return 0; }

int main()
{
//	if (a <=> b)  // C++20
//	{
//	}

	// /std:c++latest
	switch (int n = foo(); n )
	{
	}

	// init if 
	if (int ret = foo() ; ret == 0)
	{

	}


	int ret = foo();

	if (ret == 0)
	{
		//....
	}
}