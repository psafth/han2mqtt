#ifndef Message_h
#define Message_h

class P1Message {
  public:
    P1Message(char* msg, char* crc);
    
    /*  Date and time
     *  OBIS: 0-0.1.0.0 
     *  Format: YYMMDDhhmmssX
     *  Comment: X=X summer time. X=W normal time
    */
    char* getDate();
    
    /*  Total consumption
     *  OBIS: 1-0:1.8.0
     *  Format: {8 digits}.{3 decimals}*kWh
    */
    double getTotalConsumption();

    /*  Total production
     *  OBIS: 1-0:2.8.0
     *  Format: {8 digits}.{3 decimals}*kWh
    */
    double getTotalProduction();

    /*  Total reactive consumption
     *  OBIS: 1-0:3.8.0 
     *  Format: {8 digits}.{3 decimals}*kVArh
    */
    double getTotalReactiveConsumption();

    /*  Total reactive production
     *  OBIS: 1-0:4.8.0
     *  Format: {8 digits}.{3 decimals}*kVArh
    */
    double getTotalReactiveProduction();

    /*  Momentary consumption
     *  OBIS: 1-0:1.7.0 
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryConsumption();

    /*  Momentary production
     *  OBIS: 1-0:2.7.0 
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryProduction();

    /*  Momentary reactive consumption
     *  OBIS: 1-0:3.7.0
     *  Format: {4 digits}.{3 decimals}*kVAr 
    */
    float getMomentaryReactiveConsumption();

    /*  Momentary reactive production
     *  OBIS: 1-0:4.7.0
     *  Format: {4 digits}.{3 decimals}*kVAr 
    */
    float getMomentaryReactiveProduction();

    /*  Momentary L1 consumption
     *  OBIS: 1-0:21.7.0
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryL1Consumption();

    /*  Momentary L1 production
     *  OBIS: 1-0:22.7.0
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryL1Production();

    /*  Momentary L2 production
     *  OBIS: 1-0:41.7.0
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryL2Consumption();

    /*  Momentary L2 production
     *  OBIS: 1-0:42.7.0
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryL2Production();

    /*  Momentary L3 consumption
     *  OBIS: 1-0:61.7.0
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryL3Consumption();

    /*  Momentary L3 production
     *  OBIS: 1-0:62.7.0
     *  Format: {4 digits}.{3 decimals}*kW
    */
    float getMomentaryL3Production();

    /*  Momentary L1 reactive consumption
     *  OBIS: 1-0:23.7.0
     *  Format: {4 digits}.{3 decimals}*kVAr
    */
    float getMomentaryL1ReactiveConsumption();

    /*  Momentary L1 reactive production
     *  OBIS: 1-0:24.7.0 
     *  Format: {4 digits}.{3 decimals}*kVAr
    */
    float getMomentaryL1ReactiveProduction();

    /*  Momentary L2 reactive consumption
     *  OBIS: 1-0:43.7.0 
     *  Format: {4 digits}.{3 decimals}*kVAr
    */
    float getMomentaryL2ReactiveConsumption();

    /*  Momentary L2 reactive production
     *  OBIS: 1-0:44.7.0 
     *  Format: {4 digits}.{3 decimals}*kVAr
    */
    float getMomentaryL2ReactiveProduction();

    /*  Momentary L3 reactive consumption
     *  OBIS: 1-0:63.7.0
     *  Format: {4 digits}.{3 decimals}*kVAr
    */
    float getMomentaryL3ReactiveConsumption();

    /*  Momentary L3 reactive production
     *  OBIS: 1-0:64.7.0 
     *  Format: {4 digits}.{3 decimals}*kVAr
    */
    float getMomentaryL3ReactiveProduction();

    /*  Momentary L1 RMS voltage
     *  OBIS: 1-0:32.7.0
     *  Format: {3 digits}.{1 decimal}*V
    */
    float getMomentaryL1Voltage();

    /*  Momentary L2 RMS voltage
     *  OBIS: 1-0:52.7.0 
     *  Format: {3 digits}.{1 decimal}*V
    */
    float getMomentaryL2Voltage();

    /*  Momentary L3 RMS voltage
     *  OBIS: 1-0:72.7.0
     *  Format: {3 digits}.{1 decimal}*V
    */
    float getMomentaryL3Voltage();

    /*  Momentary L1 RMS current
     *  OBIS: 1-0:31.7.0 
     *  Format: {3 digits}.{1 decimal}*A
    */
    float getMomentaryL1Current();

    /*  Momentary L2 RMS current
     *  OBIS: 1-0:51.7.0 
     *  Format: {3 digits}.{1 decimal}*A
    */
    float getMomentaryL2Current();

    /*  Momentary L3 RMS current
     *  OBIS: 1-0:71.7.0 
     *  Format: {3 digits}.{1 decimal}*A
    */
    float getMomentaryL3Current();

    /* 
     *  Get the P1 message as JSON
    */
    char* getJSON();

    /* 
     *  Get the P1 message as CSV
    */
    char* getCSV();
  private:
    char* _msg;
    char* _crc;
};

#endif
