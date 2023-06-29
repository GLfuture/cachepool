#include <hiredis/hiredis.h>
#include "CachePool.h"
#include <time.h>
using namespace std;
int main()
{
    CachePool pool("pool","8.130.92.28",6379,0,"123456",4);
    pool.Init();
    CacheConn*conn = pool.GetCacheConn();
    //vector<string> members=conn->Arg_List(string("1"),string("2"),string("3"));
    // conn->sadd("key","sb");
    //conn->flushdb();
    //vector<string>res = conn->smembers("key");
    // for(auto &str:res){
    //     cout<<str<<endl;
    // }
    //cout<<conn->srem("key","sb")<<endl;
    // res = conn->smembers("key");
    // for(auto &str:res){
    //     cout<<str<<endl;
    // }
    //map<string,string> base={{"field1","123"},{"field2","234"},{"field3","456"}};
    //conn->hmset("key",base);
    //conn->lpush("key","123","456","789");
    //list<string> L;
    // conn->lrange("key",0,3,L);
    // for(auto&v:L)
    // {
    //     cout<<v<<endl;
    // }
    //cout<<conn->lrem("key",1,"456");
    // vector<string> res;
    // conn->sinter(res,"set1","set2");
    // for(auto &s:res) cout<<s<<endl;
    // vector<string> res;
    // conn->zrange("key1",0,3,res);
    // for(auto&v:res){
    //     cout<<v<<endl;
    // }
    //cout<<conn->zrem("key1","ggg");
    cout<<conn->zscore("key1","lll");
    pool.RelCacheConn(conn);
    return 0;
}