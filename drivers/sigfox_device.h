#define SIGFOX_MODE_ON                           true
#define SIGFOX_MODE_OFF                          false
#define SIGFOX_RESET_MODE_SYSTEM                 0U
#define SIGFOX_RESET_MODE_CHIP                   1U
#define SIGFOX_STATUS_MODE_SYSTEM                0U
#define SIGFOX_STATUS_MODE_CHIP                  1U
#define SIGFOX_STATUS_MODE_ALL                   2U

#define SD_MAX_INSTANCES                         1U

typedef struct SigfoxDevice {
    void (*printStatus)(uint8_t);
    void (*sendCmd)(uint8_t);
    void (*reset)(uint8_t);
    void (*setMode)(bool);
    void (*read)(uint8_t*, uint8_t);
    void (*send)(uint8_t*, uint8_t);
} SigfoxDevice;
