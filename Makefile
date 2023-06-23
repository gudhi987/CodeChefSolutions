.PHONY: clean All

All:
	@echo "----------Building project:[ Starters95 - Debug ]----------"
	@cd "Starters95" && "$(MAKE)" -f  "Starters95.mk"
clean:
	@echo "----------Cleaning project:[ Starters95 - Debug ]----------"
	@cd "Starters95" && "$(MAKE)" -f  "Starters95.mk" clean
