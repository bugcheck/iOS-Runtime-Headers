/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKPCSDiagnosticInformation, NSArray, NSDictionary, NSString;

@interface CKDFetchRecordZonePCSDiagnosticsOperation : CKDDatabaseOperation {
    NSString *_identityStatus;
    NSDictionary *_invalidPCSByZoneID;
    CKPCSDiagnosticInformation *_pcsDiagnosticInfo;
    NSArray *_recordZoneIDs;
    NSDictionary *_validPCSByZoneID;
}

@property(retain) NSString * identityStatus;
@property(retain) NSDictionary * invalidPCSByZoneID;
@property(retain) CKPCSDiagnosticInformation * pcsDiagnosticInfo;
@property(retain) NSArray * recordZoneIDs;
@property(retain) NSDictionary * validPCSByZoneID;

- (void).cxx_destruct;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (id)identityStatus;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)invalidPCSByZoneID;
- (void)main;
- (id)pcsDiagnosticInfo;
- (id)recordZoneIDs;
- (void)setIdentityStatus:(id)arg1;
- (void)setInvalidPCSByZoneID:(id)arg1;
- (void)setPcsDiagnosticInfo:(id)arg1;
- (void)setRecordZoneIDs:(id)arg1;
- (void)setValidPCSByZoneID:(id)arg1;
- (id)validPCSByZoneID;

@end
