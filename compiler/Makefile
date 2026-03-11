include config.mk

CC=g++
CCFLAGS=-g -c -std=c++17 -I$(ANTLRINC) -Igenerated/ -Wno-attributes 
LDFLAGS=-g

default: all
all: ifcc

# 确保编译所有必要的组件 [cite: 13]
OBJECTS=build/ifccBaseVisitor.o \
	build/ifccLexer.o \
	build/ifccVisitor.o \
	build/ifccParser.o \
	build/main.o \
	build/StaticVisitor.o \
	build/CodeGenVisitor.o

ifcc: $(OBJECTS)
	@mkdir -p build
	$(CC) $(LDFLAGS) build/*.o $(ANTLRLIB) -o ifcc

build/%.o: %.cpp generated/ifccParser.cpp
	@mkdir -p build
	$(CC) $(CCFLAGS) -MMD -o $@ $< 

build/%.o: generated/%.cpp
	@mkdir -p build
	$(CC) $(CCFLAGS) -MMD -o $@ $< 

-include build/*.d

##########################################
# 生成逻辑：增加了对 Windows 换行符的清理和全量 override 移除
generated/ifccParser.cpp: ifcc.g4
	@mkdir -p generated
	java -jar $(ANTLRJAR) -visitor -no-listener -Dlanguage=Cpp -o generated ifcc.g4
	@echo "--- 正在深度清理兼容性问题 ---"
	# 1. 移除可能的 Windows 换行符 \r，防止匹配失败
	find generated -name "*.h" -exec sed -i 's/\r//g' {} +
	# 2. 移除所有的 override 关键字（核武级方案）
	find generated -name "*.h" -exec sed -i 's/override//g' {} +
	@echo "--- 修复完成 ---"

generated/ifccLexer.cpp: generated/ifccParser.cpp
generated/ifccVisitor.cpp: generated/ifccParser.cpp
generated/ifccBaseVisitor.cpp: generated/ifccParser.cpp

.PRECIOUS: generated/ifcc%.cpp   

clean:
	rm -rf build generated
	rm -f ifcc