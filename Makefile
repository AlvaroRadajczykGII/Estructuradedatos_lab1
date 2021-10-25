.PHONY: clean All

All:
	@echo "----------Building project:[ Pilasycolas - Debug ]----------"
	@cd "Pilasycolas" && "$(MAKE)" -f  "Pilasycolas.mk"
clean:
	@echo "----------Cleaning project:[ Pilasycolas - Debug ]----------"
	@cd "Pilasycolas" && "$(MAKE)" -f  "Pilasycolas.mk" clean
