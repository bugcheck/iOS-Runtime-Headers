/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSArray;

@interface NSLayoutManagerTextBlockRowArrayCache : NSObject {
    BOOL _collapseBorders;
    float _containerWidth;
    NSArray *_rowArray;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _rowCharRange;
}

- (void)dealloc;
- (id)initWithRowCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 containerWidth:(float)arg2 rowArray:(id)arg3 collapseBorders:(BOOL)arg4;

@end
