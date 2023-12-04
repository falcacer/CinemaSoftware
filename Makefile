CXX = clang++
CXXFLAGS = -std=c++11 -I./include
SRC_DIR = src
TEST_DIR = test
BUILD_DIR = build
BIN_DIR = bin

SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
TEST_FILES = $(wildcard $(TEST_DIR)/*.cpp)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRC_FILES))
TEST_OBJ_FILES = $(patsubst $(TEST_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(TEST_FILES))
TARGET = $(BIN_DIR)/mi_programa
TEST_TARGET = $(BIN_DIR)/test_mi_programa

$(TARGET): $(OBJ_FILES)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(TEST_TARGET): $(TEST_OBJ_FILES) $(filter-out $(BUILD_DIR)/main.o, $(OBJ_FILES))
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: $(TEST_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

.PHONY: clean test
