##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Pilasycolas
ConfigurationName      :=Debug
WorkspaceConfiguration := $(ConfigurationName)
WorkspacePath          :=C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos
ProjectPath            :=C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas
IntermediateDirectory  :=../build-$(ConfigurationName)/Pilasycolas
OutDir                 :=../build-$(ConfigurationName)/Pilasycolas
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=ALVARO_RADAJCZYK
Date                   :=25/10/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=..\build-$(ConfigurationName)\bin\$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/main.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(ObjectSuffix) \
	../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(ObjectSuffix) ../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): ../build-$(ConfigurationName)/Pilasycolas/.d $(Objects) 
	@if not exist "..\build-$(ConfigurationName)\Pilasycolas" mkdir "..\build-$(ConfigurationName)\Pilasycolas"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "..\build-$(ConfigurationName)\Pilasycolas" mkdir "..\build-$(ConfigurationName)\Pilasycolas"
	@if not exist ""..\build-$(ConfigurationName)\bin"" mkdir ""..\build-$(ConfigurationName)\bin""

../build-$(ConfigurationName)/Pilasycolas/.d:
	@if not exist "..\build-$(ConfigurationName)\Pilasycolas" mkdir "..\build-$(ConfigurationName)\Pilasycolas"

PreBuild:


##
## Objects
##
../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(ObjectSuffix): NodoPila.cpp ../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/NodoPila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoPila.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(DependSuffix): NodoPila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(DependSuffix) -MM NodoPila.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(PreprocessSuffix): NodoPila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/NodoPila.cpp$(PreprocessSuffix) NodoPila.cpp

../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(ObjectSuffix): Pila.cpp ../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/Pila.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Pila.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(DependSuffix): Pila.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(DependSuffix) -MM Pila.cpp

../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(PreprocessSuffix): Pila.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/Pila.cpp$(PreprocessSuffix) Pila.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(ObjectSuffix): NodoCola.cpp ../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/NodoCola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoCola.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(DependSuffix): NodoCola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(DependSuffix) -MM NodoCola.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(PreprocessSuffix): NodoCola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/NodoCola.cpp$(PreprocessSuffix) NodoCola.cpp

../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(ObjectSuffix): Cola.cpp ../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/Cola.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cola.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(DependSuffix): Cola.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(DependSuffix) -MM Cola.cpp

../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(PreprocessSuffix): Cola.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/Cola.cpp$(PreprocessSuffix) Cola.cpp

../build-$(ConfigurationName)/Pilasycolas/main.cpp$(ObjectSuffix): main.cpp ../build-$(ConfigurationName)/Pilasycolas/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/main.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/main.cpp$(DependSuffix) -MM main.cpp

../build-$(ConfigurationName)/Pilasycolas/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/main.cpp$(PreprocessSuffix) main.cpp

../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(ObjectSuffix): Cliente.cpp ../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/Cliente.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Cliente.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(DependSuffix): Cliente.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(DependSuffix) -MM Cliente.cpp

../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(PreprocessSuffix): Cliente.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/Cliente.cpp$(PreprocessSuffix) Cliente.cpp

../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(ObjectSuffix): funciones_aparte.cpp ../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/funciones_aparte.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/funciones_aparte.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(DependSuffix): funciones_aparte.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(DependSuffix) -MM funciones_aparte.cpp

../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(PreprocessSuffix): funciones_aparte.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/funciones_aparte.cpp$(PreprocessSuffix) funciones_aparte.cpp

../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(ObjectSuffix): Gestor.cpp ../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/Gestor.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Gestor.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(DependSuffix): Gestor.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(DependSuffix) -MM Gestor.cpp

../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(PreprocessSuffix): Gestor.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/Gestor.cpp$(PreprocessSuffix) Gestor.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(ObjectSuffix): NodoAbb.cpp ../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/NodoAbb.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoAbb.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(DependSuffix): NodoAbb.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(DependSuffix) -MM NodoAbb.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(PreprocessSuffix): NodoAbb.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/NodoAbb.cpp$(PreprocessSuffix) NodoAbb.cpp

../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(ObjectSuffix): Lista.cpp ../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/Lista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Lista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(DependSuffix): Lista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(DependSuffix) -MM Lista.cpp

../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(PreprocessSuffix): Lista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/Lista.cpp$(PreprocessSuffix) Lista.cpp

../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(ObjectSuffix): Entrada.cpp ../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/Entrada.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Entrada.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(DependSuffix): Entrada.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(DependSuffix) -MM Entrada.cpp

../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(PreprocessSuffix): Entrada.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/Entrada.cpp$(PreprocessSuffix) Entrada.cpp

../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(ObjectSuffix): ArbolBinario.cpp ../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/ArbolBinario.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/ArbolBinario.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(DependSuffix): ArbolBinario.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(DependSuffix) -MM ArbolBinario.cpp

../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(PreprocessSuffix): ArbolBinario.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/ArbolBinario.cpp$(PreprocessSuffix) ArbolBinario.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(ObjectSuffix): NodoLista.cpp ../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/ALVARO_RADAJCZYK/Documents/EstructurasdeDatos/Pilasycolas/NodoLista.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/NodoLista.cpp$(ObjectSuffix) $(IncludePath)
../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(DependSuffix): NodoLista.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(ObjectSuffix) -MF../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(DependSuffix) -MM NodoLista.cpp

../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(PreprocessSuffix): NodoLista.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) ../build-$(ConfigurationName)/Pilasycolas/NodoLista.cpp$(PreprocessSuffix) NodoLista.cpp


-include ../build-$(ConfigurationName)/Pilasycolas//*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


