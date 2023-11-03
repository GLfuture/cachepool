#include <hiredis/hiredis.h>
#include "CachePool.h"
#include <time.h>
using namespace std;
int main()
{
    CachePool pool("pool","8.130.92.28",6379,3,"",4);
    pool.Init();
    CacheConn*conn = pool.GetCacheConn();
    cout<<conn->zscore("key1","lll");
    pool.RelCacheConn(conn);
    return 0;
}