/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@class <BiometricKitDelegate>, BiometricKitStatistics, BiometricKitXPCClient, NSData, NSString, UIImage;

@interface BiometricKit : NSObject <BiometricKitDelegateXpcProtocol> {
    struct { 
        int count; 
        int capa; 
        struct { /* ? */ } **items; 
        int unusedImageCount; 
        int componentCount; 
        int componentCapa; 
        int bestComponentIndex; 
        int bestMapiComponentIndex; 
        struct { /* ? */ } **components; 
        short mapiNodeAddedIndex; 
        short mapiNodeRemovedIndex; 
        int updateCount; 
        boolstructureIsInconsistent; 
    struct { 
        struct { 
            NSData *imageData; 
            unsigned int width; 
            unsigned int height; 
        } nodes[100]; 
    struct CGSize { 
        double width; 
        double height; 
    } _compSet;
    <BiometricKitDelegate> *_delegate;
    } _enrollImageSet;
    int _enrollProgressConfigRenderMode;
    } _enrollProgressConfigRenderViewSize;
    int _enrollingMode;
    UIImage *_fauxprintImage;
    UIImage *_images[100];
    int _matchingMode;
    float _opacity;
    int _renderMode;
    UIImage *_scanbedImage;
    BiometricKitStatistics *_statistics;
    BiometricKitXPCClient *_xpcClient;
    bool_inUse;
    bool_isInternalInstall;
    bool_showDebugImages;
}

@property(copy,readonly) NSString * debugDescription;
@property <BiometricKitDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property int enrollProgressConfigRenderMode;
@property struct CGSize { double x1; double x2; } enrollProgressConfigRenderViewSize;
@property(readonly) unsigned long long hash;
@property bool inUse;
@property float opacity;
@property int renderMode;
@property(readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (long long)getSensorPatchVersion;
+ (id)manager;
+ (bool)preferencesGetBOOLValue:(const struct __CFString { }*)arg1;
+ (id)preferencesGetStringValue:(const struct __CFString { }*)arg1;
+ (void)preferencesSetBOOLValue:(bool)arg1 forKey:(const struct __CFString { }*)arg2;
+ (id)stringForProvisioningState:(int)arg1;

- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)cancel;
- (id)compositeTopologyImage:(struct { int x1; int x2; struct { /* ? */ } **x3; int x4; int x5; int x6; int x7; int x8; struct { /* ? */ } **x9; short x10; short x11; int x12; boolx13; }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createMatchInfo:(id)arg1 withTopology:(const struct { short x1; short x2; short x3; struct { short x_4_1_1; short x_4_1_2; short x_4_1_3; } x4; struct { short x_5_1_1; short x_5_1_2; short x_5_1_3; short x_5_1_4; short x_5_1_5; short x_5_1_6; short x_5_1_7; unsigned char x_5_1_8[16]; unsigned char x_5_1_9[16]; short x_5_1_10; struct { struct { short x_1_3_1; short x_1_3_2; short x_1_3_3; } x_11_2_1; short x_11_2_2; short x_11_2_3; } x_5_1_11[100]; short x_5_1_12; short x_5_1_13; short x_5_1_14; short x_5_1_15; short x_5_1_16; short x_5_1_17; } x5; int x6; int x7; }*)arg2 withMatchImage:(struct { id x1; unsigned int x2; unsigned int x3; }*)arg3;
- (void)dealloc;
- (id)delegate;
- (int)detectFingerWithOptions:(id)arg1;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(bool*)arg3 withDetails:(id*)arg4;
- (int)enroll:(int)arg1 withAuthToken:(id)arg2;
- (int)enroll:(int)arg1;
- (int)enrollProgressConfigRenderMode;
- (struct CGSize { double x1; double x2; })enrollProgressConfigRenderViewSize;
- (void)enrollProgressMessage:(unsigned int)arg1;
- (void)enrollResult:(id)arg1;
- (long long)getBioLockoutState;
- (long long)getCalBlobVersion;
- (long long)getCalibrationDataState;
- (int)getCountersignedStoreToken:(id*)arg1;
- (id)getIdentityFromUUID:(id)arg1;
- (id)getLogs:(bool)arg1;
- (id)getMatchPolicyInfo;
- (long long)getMaxIdentityCount:(int)arg1;
- (float)getModulationRatio;
- (id)getProtectedConfiguration;
- (long long)getProvisioningState;
- (long long)getSensorCalibrationStatus;
- (id)getTemplateInfo:(id)arg1;
- (void)homeButtonPressed;
- (id)identities:(id)arg1;
- (id)identityImage:(id)arg1;
- (id)imageFauxprint:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTheta:(const struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; short x2; short x3; short x4; short x5; }*)arg2 withLamda:(float)arg3;
- (id)imageFromBitmapData:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)imageFromRawImageData:(struct { id x1; unsigned int x2; unsigned int x3; }*)arg1;
- (id)imageTopology:(struct { int x1; int x2; struct { /* ? */ } **x3; int x4; int x5; int x6; int x7; int x8; struct { /* ? */ } **x9; short x10; short x11; int x12; boolx13; }*)arg1 forGroup:(unsigned short)arg2;
- (id)imageWithImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)imageWithImage:(id)arg1 withMaskImage:(id)arg2;
- (id)imageWithImage:(id)arg1 withNode:(id)arg2 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 alpha:(float)arg4;
- (id)imageWithImage:(id)arg1 withTintColor:(id)arg2;
- (bool)inUse;
- (id)init;
- (bool)isDelegate;
- (int)match:(id)arg1 withOptions:(id)arg2;
- (int)match:(id)arg1;
- (int)matchIdentities:(id)arg1;
- (void)matchResult:(id)arg1 withDictionary:(id)arg2;
- (float)opacity;
- (id)pullCalibrationData;
- (id)pullCaptureBuffer;
- (id)pullDebugImage:(bool)arg1 rotated:(bool)arg2;
- (void)pullDebugImageData:(bool)arg1 rotated:(bool)arg2 target:(struct { id x1; unsigned int x2; unsigned int x3; }*)arg3;
- (int)registerDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (int)registerStoreToken:(id)arg1;
- (int)removeIdentity:(id)arg1;
- (int)renderMode;
- (int)resetAppleConnectCounter;
- (int)resetEngine;
- (void)setDebugImages:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnrollProgressConfigRenderMode:(int)arg1;
- (void)setEnrollProgressConfigRenderViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setInUse:(bool)arg1;
- (void)setOpacity:(float)arg1;
- (int)setProtectedConfiguration:(id)arg1 withAuthToken:(id)arg2;
- (void)setRenderMode:(int)arg1;
- (int)setUserDSID:(unsigned long long)arg1 withAuthToken:(id)arg2;
- (void)statusMessage:(unsigned int)arg1;
- (id)stringFromSensorConfiguration;
- (void)taskResumeStatus:(int)arg1;
- (void)templateUpdate:(id)arg1 withDictionary:(id)arg2;
- (void)timestampEvent:(unsigned long long)arg1;
- (id)topologyImage:(id)arg1;
- (int)updateIdentity:(id)arg1;

@end
