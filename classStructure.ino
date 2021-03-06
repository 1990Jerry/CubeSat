

// The satellite class houses the other components
class gammaSat{
  private:
    ADCSUnit    attitudeUnit();
    COMSystem   communications();
    // other systems should be their own class
  public:
    int Status;
    vector3D satAttitude;
    vector3D satPosition;
    
    int changeMode(int mode);
    int normalMode();
    int recoveryMode();
    int safeMode();
    int scienceMode();
    int transmissionMode();
    int technologyMode();
    
    int essentialFunctions(); //essential fns including Beacon transmit, receive commmands, GPS and attitude control. Always ON regardless of which mode
    int techPayload(); //Operate tech payload
    
    int diagnoseStatus(); //diagnostic of all satellite components
    
    // User accessable satellite methods
}


// Declaring the ADCS system
class ADCSUnit{
  public:
    vector3D determineAttitude();
    vector3D determinePosition();
    void controlLoop();
  
  private:
    vector3D currentAttitude;
    vector3D currentPosition;
}


// Declaring the communication system
class COMSystem{
  public:
    void sendData( string str );
    void beaconSignal();
    char getMode(); //Receive command from ground station about desired mode.
  private:

}

//Declaring payload system
class Payload{
  public: 
    int senseGamma();
  private:
  
}

// Declare other systems below

