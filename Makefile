.PHONY: clean All

All:
	@echo "----------Building project:[ CodeChefPractise - Debug ]----------"
	@cd "CodeChefPractise" && "$(MAKE)" -f  "CodeChefPractise.mk"
clean:
	@echo "----------Cleaning project:[ CodeChefPractise - Debug ]----------"
	@cd "CodeChefPractise" && "$(MAKE)" -f  "CodeChefPractise.mk" clean
