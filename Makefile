main:
	g++ -Wl,-rpath=/usr/local/lib main.cc CachePool.cc -o main -lhiredis -lspdlog -L/user/local/lib -g