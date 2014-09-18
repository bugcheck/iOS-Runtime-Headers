/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKAnnotation>, NSArray, NSString, TSWPSelection, TSWPSmartField, TSWPStorage;

@interface TSWPSearchReference : NSObject <TSKSearchReference> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    struct CGPoint { 
        double x; 
        double y; 
    NSArray *_findHighlights;
    TSWPSelection *_selection;
    TSWPSmartField *_smartField;
    } _smartFieldRange;
    TSWPStorage *_storage;
    <TSKAnnotation> *annotation;
    bool_autohideHighlight;
    bool_pulseHighlight;
    bool_refersToSmartField;
    } searchReferencePoint;
}

@property(retain) <TSKAnnotation> * annotation;
@property bool autohideHighlight;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSArray * findHighlights;
@property(readonly) unsigned long long hash;
@property(readonly) bool isInsertionPoint;
@property bool pulseHighlight;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property bool refersToSmartField;
@property struct CGPoint { double x1; double x2; } searchReferencePoint;
@property(retain) TSWPSelection * selection;
@property(retain) TSWPSmartField * smartField;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } smartFieldRange;
@property(readonly) Class superclass;

+ (id)searchReferenceWithStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)searchReferenceWithStorage:(id)arg1 selection:(id)arg2;

- (id).cxx_construct;
- (id)annotation;
- (bool)autohideHighlight;
- (id)commandForReplacingWithString:(id)arg1 options:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)findHighlights;
- (id)initWithStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithStorage:(id)arg1 selection:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInsertionPoint;
- (bool)isReplaceable;
- (bool)isSelectable;
- (id)model;
- (void)pUpdateSelection;
- (bool)pulseHighlight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (bool)refersToSmartField;
- (id)searchReferenceEnd;
- (id)searchReferenceForReplacingWithString:(id)arg1 options:(unsigned long long)arg2 authorCreatedWithCommand:(id*)arg3;
- (struct CGPoint { double x1; double x2; })searchReferencePoint;
- (id)searchReferenceStart;
- (id)selection;
- (void)setAnnotation:(id)arg1;
- (void)setAutohideHighlight:(bool)arg1;
- (void)setFindHighlights:(id)arg1;
- (void)setPulseHighlight:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRefersToSmartField:(bool)arg1;
- (void)setSearchReferencePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelection:(id)arg1;
- (void)setSmartField:(id)arg1;
- (void)setSmartFieldRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)smartField;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })smartFieldRange;
- (id)storage;

@end
