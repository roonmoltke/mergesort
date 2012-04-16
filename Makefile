TARGET = ms

SRCS :=
SRCS += main.c
SRCS += mergesort.c
SRCS += error.c
SRCS += args_process.c




HDRS :=
HDRS += mergesort.h
HDRS += error.h
HDRS += args_process.h


OBJS := $(SRCS:.c=.o)

CFLAGS :=


CFLAGS += -g
CFLAGS += -o


LFLAGS :=
LFLAGS += -g
LFLAGS += -c





$(TARGET) : $(OBJS)
	gcc $(CFLAGS) $(TARGET) $(OBJS)

$(OBJS) : $(SRCS) $(HDRS)
	gcc $(LFLAGS) $(SRCS)

clean :
	rm $(OBJS) 

tags :
	etags --members $(SRCS) $(HDRS)