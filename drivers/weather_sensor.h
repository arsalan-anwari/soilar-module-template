typedef struct WeatherSensor {
    bool (*read)(int16_t*, int16_t*);
    void (*start)(void);
    void (*reset)(void);
} WeatherSensor;
