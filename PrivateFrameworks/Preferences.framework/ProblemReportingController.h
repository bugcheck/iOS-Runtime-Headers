/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController {
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    NSArray *_appActivitySpecifiers;
    PSSpecifier *_diagnosticDataGroupSpecifier;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    PSSpecifier *_spinnerSpecifier;
}

@property(readonly) NSArray * appActivitySpecifiers;
@property(readonly) PSSpecifier * filesystemMetadataSnapshotSpecifier;
@property(readonly) PSSpecifier * spinnerSpecifier;

+ (bool)isProblemReportingEnabled;

- (id)appActivitySpecifiers;
- (void)dealloc;
- (void)dismissAboutSheet:(id)arg1;
- (id)filesystemMetadataSnapshotSpecifier;
- (void)setProblemReportingEnabled:(bool)arg1;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (bool)shouldEnableProblemReportingForCheckedSpecifier;
- (id)shouldShareAppActivityWithAppDevelopers;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutDiagnosticsSheet;
- (void)snapshot:(id)arg1;
- (id)specifiers;
- (id)spinnerSpecifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;

@end
