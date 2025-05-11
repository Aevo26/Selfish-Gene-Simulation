# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Iinclude

# Source and object files
SRCS = src/Agent.cpp src/Environment.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = selfish-gene-sim

# Default target
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp files into .o object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up object files and executable
clean:
	$(RM) $(OBJS) $(TARGET)
