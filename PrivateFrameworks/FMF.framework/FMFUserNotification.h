/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFUserNotification : NSObject {
}

+ (void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2;
+ (bool)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4;
+ (void)notLoggedIntoiCloudAlert;
+ (bool)shouldDisplayAlerts;
+ (void)show5XXDuringStartOfferAlert;
+ (void)show5XXDuringStopOfferAlert;
+ (void)showActiveDeviceChangedAlert;
+ (void)showForbiddenRegionAlert;
+ (void)showGenericErrorAlert;
+ (void)showLocationServicesSwitchOffAlert;
+ (void)showMaxFollowersLimitReachedAlert;
+ (void)showNetworkOfflineDuringOfferAlert;
+ (void)showNetworkOfflineDuringStopOfferAlert;
+ (void)showRestrictedAlert;
+ (void)showShareMyLocationSystemServiceOffAlert;
+ (void)showShareMyLocationiCloudSettingsOffAlert;
+ (bool)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1;
+ (void)upselliCloudAlert;

@end
