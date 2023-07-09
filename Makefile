.PHONY: clean All

All:
	@echo "----------Building project:[ Starters97 - Debug ]----------"
	@cd "Starters97" && "$(MAKE)" -f  "Starters97.mk"
clean:
	@echo "----------Cleaning project:[ Starters97 - Debug ]----------"
	@cd "Starters97" && "$(MAKE)" -f  "Starters97.mk" clean
