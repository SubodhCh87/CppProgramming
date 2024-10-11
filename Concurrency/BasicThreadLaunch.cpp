#include <iostream>
#include <thread>

using namespace std;

void HelloWorkerThread()
{
    cout << "Hello From Worker Thread\n";
}

int main()
{
    cout << "Hello From Main Thread\n";
    
    thread t(HelloWorkerThread);
    t.join();

    return 0;
}