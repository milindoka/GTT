.PHONY: clean All

All:
	@echo "----------Building project:[ GTT - Debug ]----------"
	@"$(MAKE)" -f  "GTT.mk"
clean:
	@echo "----------Cleaning project:[ GTT - Debug ]----------"
	@"$(MAKE)" -f  "GTT.mk" clean
