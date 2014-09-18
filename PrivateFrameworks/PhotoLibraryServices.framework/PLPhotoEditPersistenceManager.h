/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface PLPhotoEditPersistenceManager : NSObject {
}

@property(readonly) NSString * latestFormatIdentifier;
@property(readonly) NSString * latestFormatVersion;

- (id)_allConverterClasses;
- (id)_allImporterClasses;
- (Class)_latestExporterClass;
- (bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
- (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 exifOrientation:(int)arg4;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (id)latestFormatIdentifier;
- (id)latestFormatVersion;
- (bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(long long)arg5;

@end
