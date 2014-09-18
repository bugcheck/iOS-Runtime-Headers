/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString;

@interface TSWPCitationSmartField : TSWPSmartField <TSWPCitationRecordHosting> {
    NSArray *_citationRecords;
    bool_isLocalizable;
}

@property(copy) NSArray * citationRecords;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property bool isLocalizable;
@property(readonly) Class superclass;

+ (bool)isValidCitationField:(id)arg1;

- (id)bibliographySmartField;
- (id)citationRecords;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (bool)isLocalizable;
- (void)saveToArchiver:(id)arg1;
- (void)setCitationRecords:(id)arg1;
- (void)setIsLocalizable:(bool)arg1;
- (int)smartFieldKind;

@end
