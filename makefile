#!/bin/bash
CC = g++
CXXFLAGS = -Wall
SRCS = capturev4l2.cpp
TARGET = test
$(TARGET):$(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(OBJECTS) $(TARGET)
