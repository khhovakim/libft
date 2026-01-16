# ===== Compiler =====
CC         = cc
CXX        = c++
AR         = ar rcs

# ===== Build Type =====
BUILD_TYPE ?= r
MODE := $(shell echo $(BUILD_TYPE) | tr '[:upper:]' '[:lower:]')

# r/R   = Release;
# d/D   = Debug;
# as/AS = ASan;
# make BUILD_TYPE=r/d/as
# make -j[N] // -j$(nproc)

# ===== Flags =====
MAKEFLAGS += --no-print-directory

FLAGS    = -Wall -Wextra -Werror -pedantic-errors
CFLAGS   = -std=c11   $(FLAGS)
CXXFLAGS = -std=c++17 $(FLAGS)
LDFLAGS  =
DEPFLAGS = -MMD -MP

ifeq ($(MODE), r)
    TYPE = release
    CFLAGS   += -O2 -DNDEBUG
    CXXFLAGS += -O2 -DNDEBUG
else ifeq ($(MODE), d)
    TYPE = debug
    CFLAGS   += -g3 -O0
    CXXFLAGS += -g3 -O0
else ifeq ($(MODE), as)
    TYPE = ASan
    CFLAGS   += -g3 -O0 -fsanitize=address
    CXXFLAGS += -g3 -O0 -fsanitize=address
    LDFLAGS  += -fsanitize=address
else
$(error Unknown BUILD_TYPE '$(MODE)'. Use 'd/D for Debug, r/R for Release, as/AS for ASan')
endif

DEPFILES = $(ROOT)/Makefile $(ROOT)/config/config.mk $(ROOT)/config/utils.mk
