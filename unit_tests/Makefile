ROOT = ..
include $(ROOT)/config/config.mk
include $(ROOT)/config/utils.mk

# =======================================
# ============= Project =================
# =======================================
NAME = unit_tests

# Static Library
LIBFT_DIR    = $(ROOT)/lib/$(TYPE)
LIBFT_INCDIR = $(ROOT)/include
LIBFT        = $(LIBFT_DIR)/libft.a

# Directories
SRCDIR         = src
CURRENT_INCDIR = include
OBJDIR_ROOT    = obj
BINDIR         = bin

# Flags
LDFLAGS  += -L$(LIBFT_DIR) -lft
IFLAGS   = -I$(CURRENT_INCDIR) -I$(LIBFT_INCDIR)

# Dependency files
DEPFILES += Makefile

# Source files
SRC =   main.cpp \
		$(shell find $(SRCDIR) -type f -name "*.c") \
		$(shell find $(SRCDIR) -type f -name "*.cc") \
		$(shell find $(SRCDIR) -type f -name "*.cpp")

# Final Object files directory
OBJDIR = $(OBJDIR_ROOT)/$(TYPE)

# Final Object Executable file
EXE = $(BINDIR)/$(TYPE)/$(NAME)

# Object files
OBJ =   $(patsubst %.c,$(OBJDIR)/%.o,$(filter %.c,$(SRC))) \
		$(patsubst %.cc,$(OBJDIR)/%.o,$(filter %.cc,$(SRC))) \
		$(patsubst %.cpp,$(OBJDIR)/%.o,$(filter %.cpp,$(SRC)))

# Default target
all: pretty $(EXE)

# Linking
$(EXE) : $(OBJ) $(LIBFT)
	@echo
	@echo "$(_CYAN)Creating Executable $(_WHITE)$(_NC)"
	@mkdir -p $(@D)
	@$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	@echo "$(SUCCESS)\n$(_WHITE)Linked $@"

# Compile rules
$(OBJDIR)/%.o: %.c $(DEPFILES)
	@mkdir -p $(@D)
	@echo "$(COMPILING) $(TAG) $(BR_L)$(_YELLOW)$<$(BR_R) → $(_GREEN)$@$(_NC)"
	@$(CC) $(CFLAGS) $(DEPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJDIR)/%.o: %.cc $(DEPFILES)
	@mkdir -p $(@D)
	@echo "$(COMPILING) $(TAG) $(BR_L)$(_YELLOW)$<$(BR_R) → $(_GREEN)$@$(_NC)"
	@$(CXX) $(CXXFLAGS) $(DEPFLAGS) $(IFLAGS) -c $< -o $@

$(OBJDIR)/%.o: %.cpp $(DEPFILES)
	@mkdir -p $(@D)
	@echo "$(COMPILING) $(TAG) $(BR_L)$(_YELLOW)$<$(BR_R) → $(_GREEN)$@$(_NC)"
	@$(CXX) $(CXXFLAGS) $(DEPFLAGS) $(IFLAGS) -c $< -o $@

# Auto-include dependency files
-include $(OBJ:.o=.d)

# Run Program
.PHONY: run
run: all
	@echo
	@echo "$(_WHITE)Running unit_tests...$(_NC)"
	@./$(EXE)

# Cleaning
.PHONY: clean
clean:
	@rm -rf $(OBJDIR_ROOT)
	@echo "$(_YELLOW)[-] Removed unit_tests object files$(_NC)"

.PHONY: fclean
fclean: clean
	@rm -rf $(BINDIR)
	@echo "$(_RED)[x] Removed unit_tests executable$(_NC)"

.PHONY: re
re: fclean all
	@echo "$(_GREEN)[✔] Rebuild unit_tests complete$(_NC)"

# =======================================
# ==========   Show info   ==============
# =======================================
.PHONY: show
show: show_src
show: show_compilers
show: show_flags
show: show_include_flags
show: show_link_flags

.PHONY: show_src
show_src:
	@$(call PRINT,"Source Files:","$(SRC)")

.PHONY: show_compilers
show_compilers:
	@$(call PRINT,"C Compilers:","$(CC)")
	@$(call PRINT,"C++ Compilers:","$(CXX)")

.PHONY: show_flags
show_flags:
	@$(call PRINT,"CFlags:","$(CFLAGS)")
	@$(call PRINT,"CXXFlags:","$(CXXFLAGS)")

.PHONY: show_include_flags
show_include_flags:
	@$(call PRINT,"Include Flags:","$(IFLAGS)")

.PHONY: show_link_flags
show_link_flags:
	@$(call PRINT,"Link Flags:","$(LDFLAGS)")

# Beautify output
.PHONY: pretty
pretty:
	@echo "$(_CYAN)--- Building Unit Tests ($(TYPE)) ---$(_NC)"
