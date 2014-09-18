/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTextureCache : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    unsigned int *alphaMap;
    } alphaMapSize;
    boolhasAlpha;
    boolisLoaded;
    boolisPOT;
    struct CGImage { } *collisionMask;
    long long filteringMode;
    int lock;
    char *pixelData;
    } pixelSize;
    } size;
    int state;
    unsigned int texFormat;
    unsigned int texId;
    int texInternalFormat;
    unsigned int texType;
    int wrapMode;
}

@property unsigned int* alphaMap;
@property struct CGSize { double x1; double x2; } alphaMapSize;
@property long long filteringMode;
@property bool hasAlpha;
@property bool isLoaded;
@property bool isPOT;
@property(getter=getLock,readonly) int* lock;
@property char * pixelData;
@property struct CGSize { double x1; double x2; } pixelSize;
@property struct CGSize { double x1; double x2; } size;
@property int state;
@property unsigned int texFormat;
@property unsigned int texId;
@property int texInternalFormat;
@property unsigned int texType;
@property int wrapMode;

- (id).cxx_construct;
- (unsigned int*)alphaMap;
- (struct CGSize { double x1; double x2; })alphaMapSize;
- (void)dealloc;
- (long long)filteringMode;
- (int*)getLock;
- (bool)hasAlpha;
- (id)init;
- (bool)isLoaded;
- (bool)isPOT;
- (char *)pixelData;
- (struct CGSize { double x1; double x2; })pixelSize;
- (void)setAlphaMap:(unsigned int*)arg1;
- (void)setAlphaMapSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFilteringMode:(long long)arg1;
- (void)setHasAlpha:(bool)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setIsPOT:(bool)arg1;
- (void)setPixelData:(char *)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setState:(int)arg1;
- (void)setTexFormat:(unsigned int)arg1;
- (void)setTexId:(unsigned int)arg1;
- (void)setTexInternalFormat:(int)arg1;
- (void)setTexType:(unsigned int)arg1;
- (void)setWrapMode:(int)arg1;
- (struct CGSize { double x1; double x2; })size;
- (int)state;
- (unsigned int)texFormat;
- (unsigned int)texId;
- (int)texInternalFormat;
- (unsigned int)texType;
- (int)wrapMode;

@end
