/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TNSheet;

@interface TNSheetSelection : TSKSelection {
    boolmIsPaginated;
    TNSheet *mSheet;
}

@property(getter=isPaginated,readonly) bool paginated;
@property(retain,readonly) TNSheet * sheet;

+ (Class)archivedSelectionClass;
+ (id)selectionForSheet:(id)arg1 paginated:(bool)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSheet:(id)arg1 paginated:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPaginated;
- (id)sheet;

@end
