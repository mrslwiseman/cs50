# installing cs50.h library macOS.

Refer https://github.com/cs50/libcs50

// place cs50.h in /usr/local/include
// place libcs50.dylib in /usr/local/lib
// .bashrc: 
// # Add RVM to PATH for scripting. Make sure this is the last PATH variable change.
// export PATH="$PATH:$HOME/.rvm/bin"
// export LIBRARY_PATH=/usr/local/lib
// export C_INCLUDE_PATH=/usr/local/include
// export LD_LIBRARY_PATH=/usr/local/lib’

// function make50 { gcc "$1".c -o "$1" -I /usr/local/include -L /usr/local/lib -lcs50; }

// clang INPUTFILENAME.c -lcs50 -o OUTPUTFILENAME
// make OUTPUTFILENAME