/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSCoreDataTaggedObjectID : _NSScalarObjectID {
}

+ (void)_setStoreInfo1:(id)arg1;
+ (void)_storeDeallocated;
+ (id)_storeInfo1;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 count:(unsigned int)arg2;
+ (Class)classWithStore:(id)arg1 andEntity:(id)arg2;
+ (void)initialize;
+ (id)managedObjectIDFromURIRepresentation:(id)arg1;
+ (void)setObjectStoreIdentifier:(id)arg1;

- (bool)_isPersistentStoreAlive;
- (long long)_referenceData64;
- (id)_referenceData;
- (id)_retainedURIString;
- (id)_storeIdentifier;
- (id)_storeInfo1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)entity;
- (id)entityName;
- (unsigned long long)hash;
- (id)initWithObject:(id)arg1;
- (id)initWithPK64:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemporaryID;
- (id)persistentStore;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
