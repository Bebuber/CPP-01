CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++17

TARGET = ZombieWorld

SRCS = main.cpp zombieHorde.cpp Zombie.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp	
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

re: clean all

.PHONY: all clean re
