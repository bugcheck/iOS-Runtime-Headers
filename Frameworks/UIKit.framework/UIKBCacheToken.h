/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {
    NSMutableArray *_components;
    int _emptyFields;
    NSString *_name;
    long long _renderFlags;
    double _scale;
}

@property int displayHint;
@property int emptyFields;
@property(readonly) bool hasKey;
@property(retain) NSString * name;
@property long long renderFlags;
@property int rowHint;
@property struct CGSize { double x1; double x2; } size;
@property(readonly) NSString * string;

+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)tokenForKey:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2;
+ (id)tokenForKeyMask:(id)arg1 style:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg2 displayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (id)tokenForKeyplane:(id)arg1;
+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize { double x1; double x2; })arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize { double x1; double x2; })arg4;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize { double x1; double x2; })arg3;

- (int)_writeArray:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (int)_writeNumber:(float)arg1 toStr:(char *)arg2;
- (int)_writeString:(id)arg1 toStr:(char *)arg2 maxLen:(int)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)displayHint;
- (int)emptyFields;
- (bool)hasKey;
- (id)initWithComponents:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)name;
- (long long)renderFlags;
- (int)rowHint;
- (void)setDisplayHint:(int)arg1;
- (void)setEmptyFields:(int)arg1;
- (void)setName:(id)arg1;
- (void)setRenderFlags:(long long)arg1;
- (void)setRowHint:(int)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)string;
- (id)stringForComponentArray:(id)arg1 additionalValues:(id)arg2;
- (id)stringForConstruction:(id)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
- (id)stringForRenderFlags:(long long)arg1 lightKeyboard:(bool)arg2;
- (id)stringForSplitState:(bool)arg1;
- (id)stringForState:(int)arg1;

@end
