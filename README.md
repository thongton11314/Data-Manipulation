# Build and Run the Code

- To build this project, we use the programming language C++ version 11
    - The code was written in Visual Studio and Visual Studio Code
    
- To complete this project, we use the g++ compiler. 

- To execute this program, we use command line at Linux terminal which “g++ -std=c++11 *.h *.cpp”
    - Compile all header files which: bst.h, command_borrow.h, command_history.h, command_return.h, customers_collection.h, media.h, media_factory.h, media_movie_classic.h, media_movie_drama.h, store_manager.h, command.h, command_factory.h, command_inventory.h, customer.h, hashtable.h, media_collection.h, media_movie.h, media_movie_comedy.h, media_movie_factory.h
        
    - Compile all implementation files which: command.cpp, command_factory.cpp, command_inventory.cpp, customer.cpp, main.cpp, media_collection.cpp, media_movie.cpp          media_movie_comedy.cpp, media_movie_factory.cpp, command_borrow.cpp, command_history.cpp, command_return.cpp, customers_collection.cpp, media.cpp, media_factory.cpp, media_movie_classic.cpp, media_movie_drama.cpp, store_manager.cpp
    
- To check memory leak, we use the command line at the Linux terminal which “valgrind ./a.out”
    - The memory leak was carefully detected and manageable. There is no memory leak in this project
    
# How the Application Process

- To sucessfully run the program, some .txt files need to be included as corrected form
    - data4commands.txt, this file contain all command to be executed
    - data4customers.txt, this file contain all customer information
    - data4movies.txt, this files contain all movies information
 
- The application will at first build the customer by reading each customer from "data4customers.txt". Secondly, building the movies by reading each movies from "data4movies.txt"
. Finally, process commands by reading each command from "data4commands.txt".
