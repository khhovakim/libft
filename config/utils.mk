# ==== Colors ====
_GREY   = \033[1;30m
_RED    = \033[1;31m
_GREEN  = \033[1;32m
_YELLOW = \033[1;33m
_BLUE   = \033[1;34m
_PURPLE = \033[1;35m
_CYAN   = \033[1;36m
_WHITE  = \033[1;37m
_NC     = \033[0m

# ==== Status Messages ====
SUCCESS   = $(_GREEN)SUCCESS[✔]$(_NC)
COMPILING = $(_BLUE)COMPILING[●]$(_NC)
WARNING   = $(_YELLOW)WARNING[⚠]$(_NC)
TAG       = $(_WHITE)[$(_CYAN)$(CC)$(_WHITE)][$(_PURPLE)$(TYPE)$(_WHITE)]$(_NC)

BR_L = $(_WHITE)[
BR_R = $(_WHITE)]

# ===== Macro for printing info =====
define PRINT
    MSG1=$$(echo "$1" | sed 's/^[[:space:]]*//;s/[[:space:]]*$$//'); \
    MSG2=$$(echo "$2" | sed 's/^[[:space:]]*//;s/[[:space:]]*$$//'); \
    printf "$(_BLUE)%s\n" "$$MSG1"; \
    echo "$$MSG2" | tr ' ' '\n' | while IFS= read -r line; do \
        [ -n "$$line" ] && printf "$(_GREY) -> $(_NC)%s\n" "$$line"; \
    done; \
    echo
endef