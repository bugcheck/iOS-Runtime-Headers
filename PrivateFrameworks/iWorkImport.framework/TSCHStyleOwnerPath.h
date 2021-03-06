/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray;

@interface TSCHStyleOwnerPath : NSObject <NSCopying> {
    NSArray *mUuids;
}

@property(readonly) NSArray * uuids;

+ (id)instanceWithArchive:(const struct StyleOwnerPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
+ (id)styleOwnerPathForSemanticTag:(id)arg1 ofChart:(id)arg2;
+ (id)styleOwnerPathForStyleOwner:(id)arg1;
+ (unsigned char)styleOwnerPathTypeForStyleOwner:(id)arg1;
+ (id)styleOwnerPathWithUUIDs:(id)arg1;
+ (id)verifiedUUIDs:(id)arg1;

- (id)TSUUUIDPath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)didInitFromSOS;
- (Class)genericPropertyMapClass;
- (unsigned int)hash;
- (id)initWithArchive:(const struct StyleOwnerPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 unarchiver:(id)arg2;
- (id)initWithUUIDs:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)p_axisStyleOwnerForChart:(id)arg1;
- (id)p_createUUIDDecoder;
- (id)p_referenceLineStyleOwnerForChart:(id)arg1;
- (id)p_seriesStyleOwnerForChart:(id)arg1;
- (id)pathByPrefixingWithUUIDs:(id)arg1;
- (void)saveToArchive:(struct StyleOwnerPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 archiver:(id)arg2;
- (id)styleOwnerForChart:(id)arg1;
- (unsigned char)styleOwnerPathType;
- (int)styleOwnerType;
- (id)uuids;

@end
