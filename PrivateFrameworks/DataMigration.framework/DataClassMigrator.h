/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@class NSDictionary;

@interface DataClassMigrator : NSObject {
    NSDictionary *_context;
    bool_didUpgrade;
}

@property(retain) NSDictionary * context;
@property(readonly) bool didMigrateBackupFromDifferentDevice;
@property(readonly) bool didRestoreFromBackup;
@property(readonly) bool didRestoreFromCloudBackup;
@property bool didUpgrade;
@property(readonly) bool shouldPreserveSettingsAfterRestore;
@property(readonly) bool wasPasscodeSetInBackup;

- (void).cxx_destruct;
- (id)context;
- (id)dataClassName;
- (bool)didMigrateBackupFromDifferentDevice;
- (bool)didRestoreFromBackup;
- (bool)didRestoreFromCloudBackup;
- (bool)didUpgrade;
- (float)estimatedDuration;
- (float)migrationProgress;
- (bool)performMigration;
- (void)setContext:(id)arg1;
- (void)setDidUpgrade:(bool)arg1;
- (bool)shouldPreserveSettingsAfterRestore;
- (bool)wasPasscodeSetInBackup;

@end
