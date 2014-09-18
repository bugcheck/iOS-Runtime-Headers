/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {
    TIHandwritingStrokes *_strokes;
}

@property(retain) TIHandwritingStrokes * strokes;

- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)clear;
- (void)dealloc;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)setStrokes:(id)arg1;
- (id)strokes;

@end
