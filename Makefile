.PHONY: clean All

All:
	@echo "----------Building project:[ Starters99 - Debug ]----------"
	@cd "Starters99" && "$(MAKE)" -f  "Starters99.mk"
clean:
	@echo "----------Cleaning project:[ Starters99 - Debug ]----------"
	@cd "Starters99" && "$(MAKE)" -f  "Starters99.mk" clean
