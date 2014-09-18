/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSArray;

@interface PTSHUDRow : NSObject {
    NSArray *_controls;
    double _height;
}

@property(retain) NSArray * controls;
@property double height;

+ (id)controlsModeFooterRow;
+ (id)controlsModeHeaderRow;
+ (id)rowWithControls:(id)arg1;
+ (id)rowWithHeight:(double)arg1 controls:(id)arg2;
+ (id)savedModeFooterRow;
+ (id)savedModeHeaderRow;
+ (id)savedModeTableRow;

- (void).cxx_destruct;
- (id)controls;
- (double)height;
- (void)setControls:(id)arg1;
- (void)setHeight:(double)arg1;

@end
