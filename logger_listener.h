#ifndef LOGGER_LISTENER_H_H
#define LOGGER_LISTENER_H_H

#include "logger.h"
#include "event_listener.h"

typedef EventListener* Logger;

EventListener* logger_listener_create(int logger_level, FILE *fp);

#endif //LOGGER_LISTENER_H_H
