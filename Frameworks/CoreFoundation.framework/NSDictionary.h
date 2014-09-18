/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSNumber, NSString;

@interface NSDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration, PQLBindable> {
}

@property(readonly) float averageRating;
@property(readonly) NSString * bundleId;
@property(readonly) NSArray * categories;
@property(readonly) unsigned long long count;
@property(readonly) NSString * creator;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned short fileHFSFlags;
@property(readonly) unsigned long long fileHFSResourceForkSize;
@property(readonly) unsigned long long hash;
@property(readonly) bool isInstalled;
@property(readonly) bool isOfficialApp;
@property unsigned long long lastClientRevision;
@property unsigned long long lastServerRevision;
@property unsigned long long newRevision;
@property(readonly) NSString * priceFormatted;
@property(readonly) unsigned long long ratingCount;
@property(readonly) NSNumber * storeID;
@property(readonly) Class superclass;
@property(readonly) NSString * title;
@property(readonly) NSArray * transitModeKeys;
@property(readonly) NSString * url;
@property(copy) NSString * versionToken;

+ (id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1;
+ (id)_dictionaryWithData:(id)arg1 isPlist:(bool)arg2 allowedClasses:(id)arg3;
+ (id)_geo_dictionaryFromXPCObject:(id)arg1;
+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)_gkImageCacheKeyPathsByKey;
+ (Class)_hk_expectedClassForKey:(id)arg1;
+ (bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dictionary;
+ (id)dictionaryByInvertingDictionary:(id)arg1;
+ (id)dictionaryByInvertingDictionary:(id)arg1;
+ (id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithArchiveData:(id)arg1;
+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(bool)arg2;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)dictionaryWithParametersInURLString:(id)arg1;
+ (id)dictionaryWithPlistData:(id)arg1;
+ (id)hk_acceptedMetadataKeyClasses;
+ (id)hk_acceptedMetadataValueClasses;
+ (bool)hk_acceptsMetadataKey:(id)arg1;
+ (bool)hk_acceptsMetadataValue:(id)arg1;
+ (id)hk_secureCodingClasses;
+ (id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)supportsSecureCoding;

- (struct KeyValueArray { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Object {} *x4[1]; }*)CA_copyRenderKeyValueArray;
- (id)CAMLType;
- (id)CDVMergeOverrideDictionary:(id)arg1;
- (id)CDVObjectForKeyCaseInsensitive:(id)arg1;
- (id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (id)CKPercentEscapedQueryString;
- (bool)CalHasKeyIn:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (id)DAMergeOverrideDictionary:(id)arg1;
- (id)DAObjectForKeyCaseInsensitive:(id)arg1;
- (id)MCDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCMutableDeepCopy;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
- (id)ML3StringForKey:(id)arg1;
- (bool)MR_isEqualToDictionary:(id)arg1;
- (id)MSASAlbumResetSyncAlbumGUID;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (bool)MSASIsErrorRecovery;
- (bool)MSASIsGlobalResetSync;
- (bool)MSASIsLocalChange;
- (bool)MSASIsNotInteresting;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)PKArrayContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKArrayForKey:(id)arg1;
- (bool)PKBoolForKey:(id)arg1;
- (id)PKColorForKey:(id)arg1;
- (id)PKDateForKey:(id)arg1;
- (id)PKDecimalNumberForKey:(id)arg1;
- (id)PKDictionaryForKey:(id)arg1;
- (double)PKDoubleForKey:(id)arg1;
- (long long)PKIntegerForKey:(id)arg1;
- (id)PKNumberForKey:(id)arg1;
- (id)PKSetContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKSetForKey:(id)arg1;
- (id)PKStringForKey:(id)arg1;
- (id)PKURLForKey:(id)arg1;
- (id)PKUUIDForKey:(id)arg1;
- (id)SCNMutableDeepCopy;
- (id)_FTFilteredDictionaryForAPS;
- (void)__apply:(int (*)())arg1 context:(void*)arg2;
- (id)__ftreg_candidateAliases;
- (bool)__ftreg_isValidSetupDictionary;
- (id)__ftreg_responseAppleID;
- (id)__ftreg_responseAuthToken;
- (bool)__ftreg_responseIsUpgrade;
- (id)__ftreg_responseProfileID;
- (bool)__getValue:(id*)arg1 forKey:(id)arg2;
- (id)__imDeepCopy;
- (bool)__imIsMutable;
- (id)_arrayForKey:(id)arg1;
- (bool)_boolForKey:(id)arg1;
- (unsigned long long)_cfTypeID;
- (id)_dataForKey:(id)arg1;
- (id)_defaultOffer;
- (id)_dictionaryForKey:(id)arg1;
- (id)_geo_newXPCObject;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long*)arg3;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkValuesForKeys:(id)arg1;
- (bool)_mapkit_writeBinaryPlist:(id)arg1 atomically:(bool)arg2;
- (id)_numberForKey:(id)arg1;
- (id)_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;
- (id)_placeOrCurrentLocation:(bool*)arg1;
- (id)_ratingData;
- (id)_sa_mappedDictionaryWithBlock:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)_stringToWrite;
- (id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
- (bool)_ui_dictionaryContainsUIStringDrawingKeys;
- (int)_web_intForKey:(id)arg1;
- (int)_web_messageLineNumber;
- (id)_web_messageSourceURL;
- (id)_web_messageText;
- (int)_web_messageType;
- (id)_web_numberForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (id)_webkit_arrayForKey:(id)arg1;
- (bool)_webkit_boolForKey:(id)arg1;
- (int)_webkit_intForKey:(id)arg1;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;
- (long long)abCompare:(id)arg1;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allObjects;
- (id)allValues;
- (void)appendJsonStringToString:(id)arg1;
- (void)appendJsonStringToString:(id)arg1;
- (id)archiveData;
- (id)arrayForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)asQueryParameterString;
- (float)averageRating;
- (id)bestImageURLForWidth:(double)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })bl_affineTransformForKey:(id)arg1;
- (bool)bl_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (bool)bl_boolForKey:(id)arg1;
- (id)bl_dictionaryByRemovingValuesForKey:(id)arg1;
- (id)bl_dictionaryBySwappingValuesWithDictionary:(id)arg1;
- (double)bl_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (double)bl_doubleForKey:(id)arg1;
- (float)bl_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (float)bl_floatForKey:(id)arg1;
- (int)bl_intForKey:(id)arg1 defaultValue:(int)arg2;
- (int)bl_intForKey:(id)arg1;
- (long long)bl_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)bl_integerForKey:(id)arg1;
- (id)bl_nonRetainedObjectForKey:(id)arg1;
- (id)bl_objectForIndex:(int)arg1;
- (id)bl_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)bl_objectOrNullForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })bl_pointFromStringForKey:(id)arg1 defaultValue:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })bl_pointFromStringForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectFromStringForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectFromStringForKey:(id)arg1;
- (id)blj_dictionaryByRemovingValuesForKey:(id)arg1;
- (id)blj_dictionaryBySwappingValuesWithDictionary:(id)arg1;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolValueForKey:(id)arg1;
- (bool)boolValueForKey:(id)arg1;
- (void)bs_eachValue:(id)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bundleId;
- (bool)bw_containsBuiltInMicAsAnInput;
- (id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned int)arg1;
- (unsigned int)bw_optimalMicPolarPattern;
- (id)calendarForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)calendarForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)categories;
- (Class)classForCoder;
- (bool)containsKey:(id)arg1;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForKey:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (id)creator;
- (id)dataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)deepCopy;
- (id)description;
- (id)descriptionInStringsFileFormat;
- (id)descriptionSingleLine;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)descriptionWithLocale:(id)arg1;
- (id)dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)dictionaryChanging:(id)arg1 to:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dictionaryFromChanges:(id)arg1;
- (id)displayName;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (id)errorForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)fileCreationDate;
- (bool)fileExtensionHidden;
- (id)fileGroupOwnerAccountID;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (unsigned int)fileHFSCreatorCode;
- (unsigned short)fileHFSFlags;
- (unsigned long long)fileHFSResourceForkSize;
- (unsigned int)fileHFSTypeCode;
- (bool)fileIsAppendOnly;
- (bool)fileIsImmutable;
- (id)fileModificationDate;
- (id)fileOwnerAccountID;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)fileType;
- (id)filteredDictionaryPassingTest:(id)arg1;
- (id)filteredDictionaryUsingKeyPredicate:(id)arg1;
- (id)filteredKeysUsingPredicate:(id)arg1;
- (double)floatForKeyPath:(id)arg1;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1;
- (id)gksDeepMutableCopy;
- (id)grappaInfo;
- (unsigned long long)hash;
- (bool)hk_validateMetadataKeysAndValuesWithError:(id*)arg1;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)invertedDictionary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (bool)isInstalled;
- (bool)isNSDictionary__;
- (bool)isOfficialApp;
- (int)iterations;
- (id)keyEnumerator;
- (id)keyMap:(id)arg1;
- (id)keyOfEntryPassingTest:(id)arg1;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)keysOfEntriesPassingTest:(id)arg1;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id)arg2;
- (id)keysSortedByValueUsingComparator:(id)arg1;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(id)arg2;
- (unsigned long long)lastClientRevision;
- (unsigned long long)lastServerRevision;
- (id)map:(id)arg1;
- (bool)matchesUID:(id)arg1;
- (bool)mf_boolForKey:(id)arg1;
- (id)mf_filterUsingMap:(id)arg1 inverse:(bool)arg2;
- (int)mf_integerForKey:(id)arg1;
- (id)model;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableCopyWithElementsCopy;
- (id)mutableCopyWithElementsCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableDeepAutoreleasedCopy;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (unsigned long long)newRevision;
- (id)nullForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)numberForKeyPath:(id)arg1;
- (id)objectEnumerator;
- (id)objectForCFString:(struct __CFString { }*)arg1;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyPath:(id)arg1;
- (id)objectForKeyPredicate:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectForNullMarkerForKey:(id)arg1;
- (id)objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)objectOrNullMarkerForCFString:(struct __CFString { }*)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;
- (float)offset;
- (id)osVersion;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)plistData;
- (id)priceFormatted;
- (id)prs_URLForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (bool)prs_boolForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (long long)prs_integerForKey:(id)arg1;
- (id)prs_numberForKey:(id)arg1;
- (id)prs_stringForKey:(id)arg1;
- (unsigned long long)ratingCount;
- (id)reduce:(id)arg1 withInitialValue:(id)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)safari_URLForKey:(id)arg1;
- (id)safari_arrayForKey:(id)arg1;
- (bool)safari_boolForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_dictionaryForKey:(id)arg1;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)sbs_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)sbs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)scriptEntry;
- (id)scriptPath;
- (void)setDisplayName:(id)arg1;
- (void)setGrappaInfo:(id)arg1;
- (void)setLastClientRevision:(unsigned long long)arg1;
- (void)setLastServerRevision:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setNewRevision:(unsigned long long)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setVersionToken:(id)arg1;
- (SEL)setupSelector;
- (id)shortDescription;
- (id)shortDescription;
- (id)shortDescription;
- (id)shortDescriptionWithIndent:(id)arg1;
- (id)shortDescriptionWithIndent:(id)arg1;
- (id)shortDescriptionWithIndent:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (long long)ssidAndBaseNameLocalizedCaseInsensitiveCompare:(id)arg1;
- (long long)ssidLocalizedCaseInsensitiveCompare:(id)arg1;
- (id)storeID;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForKeyPath:(id)arg1;
- (SEL)testSelector;
- (id)timeZoneForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)title;
- (id)transitModeKeys;
- (id)url;
- (id)uuidForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (id)versionToken;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToProtectedFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToProtectedFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;

@end
