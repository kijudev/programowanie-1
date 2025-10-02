CXX := clang++
CXXOPT := -O1 -g
CXXFLAGS := -std=c++11 -Wall -Wextra -Iinclude $(CXXOPT)
CXXTESTFLAGS := -std=c++11 -Wall -Wextra -Iinclude $(CXXOPT)

PROJECTS := $(wildcard projects/*/main.cpp)
PROJECT_BINS := $(patsubst projects/%/main.cpp,bin/%/project,$(PROJECTS))

TESTS := $(wildcard projects/*/test.cpp)
TEST_BINS := $(patsubst projects/%/test.cpp,bin/%/test,$(TESTS))

.PHONY: all projects tests clean compile-commands

all: projects tests

projects: $(PROJECT_BINS)

tests: $(TEST_BINS)

bin/%/project: projects/%/main.cpp
	mkdir -p bin/$*
	$(CXX) $(CXXFLAGS) $< -o $@

bin/%/tests: projects/%/test.cpp
	mkdir -p bin/$*
	$(CXX) $(CXXTESTFLAGS) $< -o $@

clean:
	rm -rf bin
	rm -f compile_commands.json

compile-commands: clean
	bear -- make

run-tests: tests
	@set -e; \
	for t in $(TEST_BINS); do \
	  printf "Running %s\n" "$$t"; \
	  if "$$t"; then \
	    printf "PASS$\n"; \
	  else \
	    printf "FAIL: %s\n" "$$t"; \
	    exit 1; \
	  fi \
	done
