/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAssetSupport : NSObject {
}

+ (void)_cleanupAllAssetsOfType:(id)arg1;
+ (id)assetDownloadOptionsForDocumentation;
+ (id)assetDownloadOptionsFromMetadata:(id)arg1 descriptor:(id)arg2 priority:(int)arg3 forBrain:(bool)arg4;
+ (void)cleanupAllSoftwareUpdateAndRelatedAssets;
+ (void)cleanupAllSoftwareUpdateAssets;
+ (id)defaultAssetDownloadOptionsWithPriority:(int)arg1;
+ (id)findAssetWithMatcher:(id)arg1 localSearch:(bool)arg2 error:(id*)arg3;
+ (id)getInstalledDocumentationAssetFromSoftwareUpdateAssetIfExists:(id)arg1;
+ (id)getLocalDefaultSoftwareUpdateAssetIfExists;
+ (void)purgeMSUUpdate:(id)arg1;
+ (id)tryCreateDescriptorFromSoftwareUpdateAsset:(id)arg1;
+ (id)tryCreateDocumentationFromDocumentationAsset:(id)arg1;

@end
