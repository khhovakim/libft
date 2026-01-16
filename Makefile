ROOT = .

include $(ROOT)/config/config.mk
include $(ROOT)/config/utils.mk

# =======================================
# ============= Project =================
# =======================================

NAME = libft.a

# Directories
SRCDIR         = src
CURRENT_INCDIR = include
OBJDIR_ROOT    = obj
BINDIR         = lib

# Include flags
IFLAGS = -I$(CURRENT_INCDIR)

# Source files
SRC =   \
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
all: $(EXE)

# Linking
$(EXE) : $(OBJ)
	@echo
	@echo "$(_CYAN)Creating Lib $(_WHITE)$(_NC)"
	@mkdir -p $(@D)
	@$(AR) $(EXE) $(OBJ)
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

# Cleaning
.PHONY: clean
clean:
	@rm -rf $(OBJDIR_ROOT)
	@echo "$(_YELLOW)[-] Removed library object files$(_NC)"

.PHONY: fclean
fclean: clean
	@rm -rf $(BINDIR)
	@echo "$(_RED)[x] Removed library archive file$(_NC)"

.PHONY: re
re: fclean all
	@echo "$(_GREEN)[✔] Rebuild library complete$(_NC)"
