CXX = g++ 

SRCS = main.cpp Particle.cpp Vector.cpp MassParticle.cpp

TARGET = app.exe

all:  $(TARGET)

run: clean all
	./$(TARGET)

runClean: clean run

$(TARGET):
	$(CXX) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)