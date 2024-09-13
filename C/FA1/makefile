# Default target
.PHONY: run clean internal_run

# The 'run' target that processes the command internally
run:
	@$(MAKE) internal_run file=$(word 2, $(MAKECMDGOALS))

# Internal target that compiles and runs the file
internal_run: $(file)
	@./$(file)
	@echo ""  # Add a newline after program output

# Rule to build the executable
$(file): $(file).c
	@gcc $(file).c -o $(file)

# Clean up generated files (optional)
clean:
	@rm -f $(file)
