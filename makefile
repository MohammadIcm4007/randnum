CC = gcc
CFLAGS = -Wall -O3
OUTDIR = build
SRC = src/randnum.c
TARGET = $(OUTDIR)/randnum

$(TARGET): $(SRC)
	@mkdir -p $(OUTDIR)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -rf $(OUTDIR)
