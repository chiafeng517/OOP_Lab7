# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinc

# Folders
SRC_DIR = src
OBJ_DIR = obj
BIN = Lab07

# Source files
SRCS = main.cpp $(SRC_DIR)/Cylinder.cpp
OBJS = $(SRCS:.cpp=.o)
OBJS := $(patsubst %.o,$(OBJ_DIR)/%.o,$(notdir $(OBJS)))

# Default target
all: $(BIN)

# Build executable
$(BIN): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

# Compile main.cpp
$(OBJ_DIR)/main.o: main.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile Cylinder.cpp
$(OBJ_DIR)/Cylinder.o: $(SRC_DIR)/Cylinder.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Create obj directory
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean up
clean:
	rm -rf $(OBJ_DIR) $(BIN)
