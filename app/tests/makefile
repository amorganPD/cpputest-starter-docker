# we don’t want to use relative paths, so we set these variables
PROJECT_DIR=/project/app
SRC_DIR=$(PROJECT_DIR)/src
TEST_DIR=$(PROJECT_DIR)/tests
# specify where the source code and includes are located
INCLUDE_DIRS=$(SRC_DIR)
SRC_DIRS=$(SRC_DIR)

# specify where the test code is located
TEST_SRC_DIRS = $(TEST_DIR)

# what to call the test binary
TEST_TARGET=unitTests

# where the cpputest library is located
CPPUTEST_HOME=/usr

# run MakefileWorker.mk with the variables defined here
include MakefileWorker.mk
