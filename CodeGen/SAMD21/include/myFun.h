void setTimer(unsigned long period, void (*call)());
void serialInit();
void serialWrite(char* buffer, int len);
void setPinMode(int pin, int mode);
void initADDA();
void writeDA(int pin, double val);
double readAD(int pin);
void writeDO(int pin, int val);
int readDI(int pin);
void writePWM(int pin, double val);
void * setESC(int pin);
void writeESC(void * esc, double val);
int initIMU();
void readAcc(double * meas);
void readGyro(double * meas);
double readTemp();
int initVLsensor();
double getLux();
double getRange();
void setRGB(int br, int r, int g, int b, int mode);
