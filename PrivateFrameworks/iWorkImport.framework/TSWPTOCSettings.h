/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSSet, NSString, TSURetainedPointerKeyDictionary;

@interface TSWPTOCSettings : TSPObject <TSPCopying, TSSPreset> {
    NSString *_displayName;
    TSURetainedPointerKeyDictionary *_map;
    int _scope;
}

@property(copy) NSString * displayName;
@property(readonly) NSSet * indexedStyles;
@property(retain) TSURetainedPointerKeyDictionary * map;
@property(readonly) NSSet * paragraphStylesShownInTOC;
@property(readonly) NSString * presetKind;
@property int scope;

- (void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2 showInTOC:(bool)arg3;
- (void)addIndexedStyle:(id)arg1 withEntryStyle:(id)arg2;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)entryStyleForParagraphStyle:(id)arg1;
- (id)indexedStyles;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isThemeEquivalent:(id)arg1;
- (void)loadFromArchive:(const struct TOCSettingsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSWP::TOCSettingsArchive_TOCEntryData> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)map;
- (id)paragraphStylesShownInTOC;
- (id)presetKind;
- (void)removeIndexedStyle:(id)arg1;
- (void)saveToArchive:(struct TOCSettingsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x3; struct RepeatedPtrField<TSWP::TOCSettingsArchive_TOCEntryData> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; unsigned int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (int)scope;
- (void)setDisplayName:(id)arg1;
- (void)setMap:(id)arg1;
- (void)setScope:(int)arg1;
- (bool)showInTOCForParagraphStyle:(id)arg1;

@end
