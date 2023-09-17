.PHONY: clean All

All:
	@echo "----------Building project:[ Starters100 - Debug ]----------"
	@cd "Starters100" && "$(MAKE)" -f  "Starters100.mk"
clean:
	@echo "----------Cleaning project:[ Starters100 - Debug ]----------"
	@cd "Starters100" && "$(MAKE)" -f  "Starters100.mk" clean
