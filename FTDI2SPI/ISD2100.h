bool ISD2100_AutoInitialize(unsigned int clockHz);
bool WriteISD2100(const char* filename, bool verbose);
bool VerifyISD2100(const char* filename, bool verbose);
void ISD_EraseMass(void);
bool DumpISD2100(const char* filename, bool verbose);
void Play(unsigned short index);
int getPercentage();